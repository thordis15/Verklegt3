#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createDropSearchForSci();
    setTreeSci();
    createDropSearchForComp();
    setTreeComp();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::searchSciMenu(string search)
{
   People p1;
   string searching = ui->comboBox_searchSci->currentText().toStdString();
   bool found;
   if(searching == "Name")
   {
      p1 = core.searchNam(search);
      setTreeSci(p1);
   }
   if(searching == "Gender")
   {
       char sea = search[0];
       p1 = core.searchGend(sea);
       setTreeSci(p1);
   }
   if(searching == "Year of birth")
    {
       int year = atoi(search.c_str());
       p1 = core.searchBir(year);
       setTreeSci(p1);
    }
    if(searching=="Year of death")
    {
       int year = atoi(search.c_str());
        p1 = core.searchDea(year);
        setTreeSci(p1);
    }
}

void MainWindow::searchCompMenu(const string search)
{
   Machines c1;
   string searching = ui->comboBox_searchComp->currentText().toStdString();
   if(searching == "Name")
   {
      c1 = core.searchComName(search);
      setTreeComp(c1);
   }
    if(searching == "Year of creation")
    {
       int year = atoi(search.c_str());
       c1 = core.searchComYear(year);
       setTreeComp(c1);
    }
    if(searching=="Type")
    {
        c1 = core.searchComType(search);
        setTreeComp(c1);
    }

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

void MainWindow::setTreeSci(People & scientists)
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(3);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Age");

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
}

void MainWindow::setTreeComp()
{
    ui->treeWidget_comp->clear();
    ui->treeWidget_comp->setColumnCount(3);
    ui->treeWidget_comp->setHeaderLabels(QStringList() << "Name" << "Type" << "Built");

    Machines computers = core.sortCompAlpabetFront();

    for(int i = 0; i < computers.getSize(); i++)
    {
        addTreeRootComp(computers.getComputer(i));
    }
}

void MainWindow::setTreeComp(Machines & computers)
{
    ui->treeWidget_comp->clear();
    ui->treeWidget_comp->setColumnCount(3);
    ui->treeWidget_comp->setHeaderLabels(QStringList() << "Name" << "Type" << "Built");

    for(int i = 0; i < computers.getSize(); i++)
    {
        addTreeRootComp(computers.getComputer(i));
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

void MainWindow::addTreeRootComp(Computer computer)
{
    QString name, type, built;

    int id = computer.getId();
    People connected = core.getConnectedSci(id);

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

    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_comp);
    treeItem->setText(0, name);
    treeItem->setText(1, type);
    treeItem->setText(2, built);

    for(int i = 0; i < connected.getSize(); i++)
    {
      addTreeChildComp(treeItem, connected.getIndi(i));
    }
}

void MainWindow::addTreeChildComp(QTreeWidgetItem *parent, Individual scientist)
{
    // QString name, QString type, QString built
    QString name, gender, age;

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

    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
    treeItem->setText(0, name);
    treeItem->setText(1, gender);
    treeItem->setText(2, age);

    parent->addChild(treeItem);
}
void MainWindow::createDropSearchForSci()
{
    ui->comboBox_searchSci->clear();
    ui->comboBox_searchSci->addItem("");
    ui->comboBox_searchSci->addItem("Name");
    ui->comboBox_searchSci->addItem("Gender");
    ui->comboBox_searchSci->addItem("Year of birth");
    ui->comboBox_searchSci->addItem("Year of death");
}

void MainWindow::createDropSearchForComp()
{
    ui->comboBox_searchComp->clear();
    ui->comboBox_searchComp->addItem("");
    ui->comboBox_searchComp->addItem("Name");
    ui->comboBox_searchComp->addItem("Type");
    ui->comboBox_searchComp->addItem("Year of creation");
}
void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    if(index == 0)
    {
        createDropSearchForSci();
        setTreeSci();
    }
    else
    {
        createDropSearchForComp();
        setTreeComp();
    }
}

void MainWindow::on_lineEdit_searchSci_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchSciMenu(search);
}

void MainWindow::on_comboBox_searchSci_currentIndexChanged(const QString &arg1)
{
    ui->lineEdit_searchSci->setEnabled(true);
}

void MainWindow::on_lineEdit_searchComp_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchCompMenu(search);
}

void MainWindow::on_comboBox_searchComp_currentIndexChanged(const QString &arg1)
{
    ui->lineEdit_searchComp->setEnabled(true);
}
