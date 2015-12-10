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
#include <QtWidgets/QHBoxLayout>
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
    QTabWidget *tabWidget;
    QWidget *tab_sci;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget_sci;
    QWidget *tab_comp;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget_comp;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *databaseSelectLabel;
    QComboBox *SelectingDatabase;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *sortByDrop;
    QListWidget *ViewList;
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(720, 20, 441, 411));
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
        verticalLayout_2 = new QVBoxLayout(tab_comp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget_comp = new QTreeWidget(tab_comp);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_comp->setHeaderItem(__qtreewidgetitem1);
        treeWidget_comp->setObjectName(QStringLiteral("treeWidget_comp"));

        verticalLayout_2->addWidget(treeWidget_comp);

        tabWidget->addTab(tab_comp, QString());
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 258, 256));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        databaseSelectLabel = new QLabel(widget);
        databaseSelectLabel->setObjectName(QStringLiteral("databaseSelectLabel"));

        horizontalLayout->addWidget(databaseSelectLabel);

        SelectingDatabase = new QComboBox(widget);
        SelectingDatabase->setObjectName(QStringLiteral("SelectingDatabase"));

        horizontalLayout->addWidget(SelectingDatabase);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        sortByDrop = new QComboBox(widget);
        sortByDrop->setObjectName(QStringLiteral("sortByDrop"));

        horizontalLayout_2->addWidget(sortByDrop);


        verticalLayout_3->addLayout(horizontalLayout_2);

        ViewList = new QListWidget(widget);
        ViewList->setObjectName(QStringLiteral("ViewList"));

        verticalLayout_3->addWidget(ViewList);

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

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_sci), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_comp), QApplication::translate("MainWindow", "Tab 2", 0));
        databaseSelectLabel->setText(QApplication::translate("MainWindow", "Select a database:", 0));
        label->setText(QApplication::translate("MainWindow", "Sort by:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
