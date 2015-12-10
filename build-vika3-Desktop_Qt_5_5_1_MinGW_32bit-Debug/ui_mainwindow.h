/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *databaseSelectLabel;
    QComboBox *SelectingDatabase;
    QListWidget *ViewList;
    QLabel *label;
    QComboBox *sortByDrop;
    QTabWidget *tabWidget;
    QWidget *tab_sci;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget_sci;
    QWidget *tab_comp;
    QTreeWidget *treeWidget_comp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1188, 552);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        databaseSelectLabel = new QLabel(centralWidget);
        databaseSelectLabel->setObjectName(QStringLiteral("databaseSelectLabel"));
        databaseSelectLabel->setGeometry(QRect(10, 20, 90, 20));
        SelectingDatabase = new QComboBox(centralWidget);
        SelectingDatabase->setObjectName(QStringLiteral("SelectingDatabase"));
        SelectingDatabase->setGeometry(QRect(100, 20, 165, 20));
        ViewList = new QListWidget(centralWidget);
        ViewList->setObjectName(QStringLiteral("ViewList"));
        ViewList->setGeometry(QRect(30, 90, 371, 181));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 61, 16));
        sortByDrop = new QComboBox(centralWidget);
        sortByDrop->setObjectName(QStringLiteral("sortByDrop"));
        sortByDrop->setGeometry(QRect(100, 50, 161, 22));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(720, 20, 441, 401));
        tab_sci = new QWidget();
        tab_sci->setObjectName(QStringLiteral("tab_sci"));
        verticalLayout = new QVBoxLayout(tab_sci);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget_sci = new QTreeWidget(tab_sci);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_sci->setHeaderItem(__qtreewidgetitem);
        treeWidget_sci->setObjectName(QStringLiteral("treeWidget_sci"));

        verticalLayout->addWidget(treeWidget_sci);

        tabWidget->addTab(tab_sci, QString());
        tab_comp = new QWidget();
        tab_comp->setObjectName(QStringLiteral("tab_comp"));
        treeWidget_comp = new QTreeWidget(tab_comp);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_comp->setHeaderItem(__qtreewidgetitem1);
        treeWidget_comp->setObjectName(QStringLiteral("treeWidget_comp"));
        treeWidget_comp->setGeometry(QRect(110, 100, 256, 192));
        tabWidget->addTab(tab_comp, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1188, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        databaseSelectLabel->setText(QApplication::translate("MainWindow", "Select a database:", 0));
        label->setText(QApplication::translate("MainWindow", "Sort by:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_sci), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_comp), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
