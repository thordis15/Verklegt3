#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <QMainWindow>
#include "core.h"
#include "people.h"
#include "machines.h"
#include <vector>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_SelectingDatabase_activated(const QString &arg1);
    void on_sortByDrop_activated();

private:
    Ui::MainWindow *ui;
    Core core;
    void displayScientists(const People& p1);
    void displayComputers(const Machines& c1);
    void createDropSortForSci();
    void createDropSortForComp();
    void sortSci(const string sorting);
    void sortComp(const string sorting);
};

#endif // MAINWINDOW_H
