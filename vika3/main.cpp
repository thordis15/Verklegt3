#include "mainwindow.h"
#include <QApplication>
/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}*/


#include <QCoreApplication>
#include <QtSql>
#include <iostream>
#include "ui.h"

using namespace std;

int main()
{
    UI ui;
    ui.run();

    return 0;
}
