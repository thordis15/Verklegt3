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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab_sci;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_searchSci;
    QComboBox *comboBox_searchSci;
    QLineEdit *lineEdit_searchSci;
    QTreeWidget *treeWidget_sci;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_addSci;
    QPushButton *Button_editSci;
    QPushButton *Button_removeSci;
    QPushButton *Button_addSciConnection;
    QWidget *tab_comp;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget_comp;
    QLabel *label_searchComp;
    QComboBox *comboBox_searchComp;
    QLineEdit *lineEdit_searchComp;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_addComp;
    QPushButton *Button_editComp;
    QPushButton *Button_removeComp;
    QPushButton *Button_addCompConnection;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 568);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_sci = new QWidget();
        tab_sci->setObjectName(QStringLiteral("tab_sci"));
        verticalLayout_5 = new QVBoxLayout(tab_sci);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_searchSci = new QLabel(tab_sci);
        label_searchSci->setObjectName(QStringLiteral("label_searchSci"));

        horizontalLayout_3->addWidget(label_searchSci);

        comboBox_searchSci = new QComboBox(tab_sci);
        comboBox_searchSci->setObjectName(QStringLiteral("comboBox_searchSci"));

        horizontalLayout_3->addWidget(comboBox_searchSci);


        verticalLayout_4->addLayout(horizontalLayout_3);

        lineEdit_searchSci = new QLineEdit(tab_sci);
        lineEdit_searchSci->setObjectName(QStringLiteral("lineEdit_searchSci"));
        lineEdit_searchSci->setEnabled(false);

        verticalLayout_4->addWidget(lineEdit_searchSci);

        treeWidget_sci = new QTreeWidget(tab_sci);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_sci->setHeaderItem(__qtreewidgetitem);
        treeWidget_sci->setObjectName(QStringLiteral("treeWidget_sci"));
        treeWidget_sci->setAlternatingRowColors(true);
        treeWidget_sci->setSortingEnabled(true);

        verticalLayout_4->addWidget(treeWidget_sci);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Button_addSci = new QPushButton(tab_sci);
        Button_addSci->setObjectName(QStringLiteral("Button_addSci"));

        horizontalLayout_4->addWidget(Button_addSci);

        Button_editSci = new QPushButton(tab_sci);
        Button_editSci->setObjectName(QStringLiteral("Button_editSci"));

        horizontalLayout_4->addWidget(Button_editSci);

        Button_removeSci = new QPushButton(tab_sci);
        Button_removeSci->setObjectName(QStringLiteral("Button_removeSci"));

        horizontalLayout_4->addWidget(Button_removeSci);

        Button_addSciConnection = new QPushButton(tab_sci);
        Button_addSciConnection->setObjectName(QStringLiteral("Button_addSciConnection"));

        horizontalLayout_4->addWidget(Button_addSciConnection);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_sci, QString());
        tab_comp = new QWidget();
        tab_comp->setObjectName(QStringLiteral("tab_comp"));
        verticalLayout_2 = new QVBoxLayout(tab_comp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeWidget_comp = new QTreeWidget(tab_comp);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_comp->setHeaderItem(__qtreewidgetitem1);
        treeWidget_comp->setObjectName(QStringLiteral("treeWidget_comp"));
        treeWidget_comp->setAlternatingRowColors(true);
        treeWidget_comp->setSortingEnabled(true);

        horizontalLayout_2->addWidget(treeWidget_comp);

        label_searchComp = new QLabel(tab_comp);
        label_searchComp->setObjectName(QStringLiteral("label_searchComp"));

        horizontalLayout_2->addWidget(label_searchComp);

        comboBox_searchComp = new QComboBox(tab_comp);
        comboBox_searchComp->setObjectName(QStringLiteral("comboBox_searchComp"));

        horizontalLayout_2->addWidget(comboBox_searchComp);


        verticalLayout->addLayout(horizontalLayout_2);

        lineEdit_searchComp = new QLineEdit(tab_comp);
        lineEdit_searchComp->setObjectName(QStringLiteral("lineEdit_searchComp"));

        verticalLayout->addWidget(lineEdit_searchComp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_addComp = new QPushButton(tab_comp);
        Button_addComp->setObjectName(QStringLiteral("Button_addComp"));

        horizontalLayout->addWidget(Button_addComp);

        Button_editComp = new QPushButton(tab_comp);
        Button_editComp->setObjectName(QStringLiteral("Button_editComp"));

        horizontalLayout->addWidget(Button_editComp);

        Button_removeComp = new QPushButton(tab_comp);
        Button_removeComp->setObjectName(QStringLiteral("Button_removeComp"));

        horizontalLayout->addWidget(Button_removeComp);

        Button_addCompConnection = new QPushButton(tab_comp);
        Button_addCompConnection->setObjectName(QStringLiteral("Button_addCompConnection"));

        horizontalLayout->addWidget(Button_addCompConnection);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab_comp, QString());

        horizontalLayout_5->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
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
        label_searchSci->setText(QApplication::translate("MainWindow", "Search by:", 0));
        Button_addSci->setText(QApplication::translate("MainWindow", "Add Scientist", 0));
        Button_editSci->setText(QApplication::translate("MainWindow", "Edit Scientist", 0));
        Button_removeSci->setText(QApplication::translate("MainWindow", "Remove", 0));
        Button_addSciConnection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_sci), QApplication::translate("MainWindow", "Scientists", 0));
        label_searchComp->setText(QApplication::translate("MainWindow", "Search by:", 0));
        Button_addComp->setText(QApplication::translate("MainWindow", "Add Computer", 0));
        Button_editComp->setText(QApplication::translate("MainWindow", "Edit Computer", 0));
        Button_removeComp->setText(QApplication::translate("MainWindow", "Remove", 0));
        Button_addCompConnection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_comp), QApplication::translate("MainWindow", "Computers", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
