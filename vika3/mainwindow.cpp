#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->SelectingDatabase->addItem("<No database selected>");
    ui->SelectingDatabase->addItem("Scientists");
    ui->SelectingDatabase->addItem("Computers");

    setTreeSci();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayScientists(const People& p1)
{
   ui->ViewList->clear();
   for(int i =0 ;i <p1.getSize();i++)
   {
       ui->ViewList->addItem(QString::fromStdString(p1.getIndi(i).getSurname()));
   }

}

void MainWindow::displayComputers(const Machines& c1)
{
    ui->ViewList->clear();
    for(int i =0 ;i <c1.getSize();i++)
    {
        ui->ViewList->addItem(QString::fromStdString(c1.getComputer(i).getName()));
    }
}

void MainWindow::createDropSortForSci()
{
    ui->sortByDrop->clear();
    ui->sortByDrop->addItem("<Nothing selected>");
    ui->sortByDrop->addItem("Name ascending");
    ui->sortByDrop->addItem("Name decending");
    ui->sortByDrop->addItem("Birth year");
    ui->sortByDrop->addItem("Year of death");
}

void MainWindow::createDropSortForComp()
{
    ui->sortByDrop->clear();
    ui->sortByDrop->addItem("<Nothing selected>");
    ui->sortByDrop->addItem("Name ascending");
    ui->sortByDrop->addItem("Name decending");
    ui->sortByDrop->addItem("Type");
    ui->sortByDrop->addItem("Year of creation");
}

void MainWindow::sortSci(const string sorting)
{
    People p1;
    if(sorting == "Name ascending")
    {

       p1 = core.sortSciAlpabetFront();
       displayScientists(p1);
    }
    if(sorting == "Name decending")
    {
       p1 = core.sortSciAlpabetBack();
       displayScientists(p1);
     }
     if(sorting == "Birth year")
     {
        p1 = core.sortSciByBirthYear();
        displayScientists(p1);
     }
     if(sorting =="Year of death")
     {
         p1 = core. sortSciByDeathYear();
         displayScientists(p1);
     }

}

void MainWindow::sortComp(const string sorting)
{

}

void MainWindow::setTreeSci()
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(3);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Age");

    People scientists = core.sortSciAlpabetFront();
    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
}

void MainWindow::addTreeRootSci(Individual scientist)
{
    QString name, gender, age;

    int id = scientist.getId();
    Machines connected = core.getConnectedComp(id);
    name = QString::fromStdString(scientist.getSurname() + ", " + scientist.getName());
    if(scientist.getGender() == 'm')
    {
        gender = QString::fromStdString("Male");
    }
    else
    {
        gender = QString::fromStdString("Female");
    }

    if(scientist.getDeath() == 0)
    {
        age = QString::number(scientist.getBirth()) + " - Today";
    }
    else
    {
    age = QString::number(scientist.getBirth()) + " - " + QString::number(scientist.getDeath());
    }

    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_sci);
    treeItem->setText(0, name);
    treeItem->setText(1, gender);
    treeItem->setText(2, age);

    for(int i = 0; i < connected.getSize(); i++)
    {
      addTreeChildSci(treeItem, connected.getComputer(i));
    }
}

void MainWindow::addTreeChildSci(QTreeWidgetItem *parent, Computer computer)
{
    // QString name, QString type, QString built
    QString name, type, built;
    name = QString::fromStdString(computer.getName());
    type = QString::fromStdString(computer.getType());

    if(computer.getYear() == 0)
    {
        built = "Unbuilt";
    }
    else
    {
        built = QString::number(computer.getYear());
    }

    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
    treeItem->setText(0, name);
    treeItem->setText(1, type);
    treeItem->setText(2, built);

    parent->addChild(treeItem);
}

void MainWindow::on_SelectingDatabase_activated(const QString &arg1)
{
    string dbname = arg1.toStdString();
    if(dbname == "Scientists")
    {
       createDropSortForSci();
       on_sortByDrop_activated();
    }
    else if(dbname == "Computers")
    {
        createDropSortForComp();
    }
}

void MainWindow::on_sortByDrop_activated()
{
    string sortsel = ui->sortByDrop->currentText().toStdString();
    sortSci(sortsel);
}
