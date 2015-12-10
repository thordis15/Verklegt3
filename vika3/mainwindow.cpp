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
