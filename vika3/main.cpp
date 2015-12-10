

#include <QApplication>
#include <QCoreApplication>
#include <QtSql>
#include <iostream>
#include "ui.h"

using namespace std;

#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
/*
int main(int argc, char *argv[])
{
    UI ui;
    ui.run();

    return 0;
}
*/
