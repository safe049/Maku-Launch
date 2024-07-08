/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *categoryList;
    QPushButton *addCategoryButton;
    QPushButton *deleteCategoryButton;
    QPushButton *addAppButton;
    QPushButton *deleteAppButton;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QListWidget *appList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background: transparent"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        categoryList = new QListWidget(centralwidget);
        categoryList->setObjectName("categoryList");
        categoryList->setGeometry(QRect(0, 20, 211, 521));
        categoryList->setStyleSheet(QString::fromUtf8("background: transparent"));
        addCategoryButton = new QPushButton(centralwidget);
        addCategoryButton->setObjectName("addCategoryButton");
        addCategoryButton->setGeometry(QRect(230, 20, 541, 34));
        deleteCategoryButton = new QPushButton(centralwidget);
        deleteCategoryButton->setObjectName("deleteCategoryButton");
        deleteCategoryButton->setGeometry(QRect(230, 60, 541, 34));
        addAppButton = new QPushButton(centralwidget);
        addAppButton->setObjectName("addAppButton");
        addAppButton->setGeometry(QRect(230, 100, 541, 34));
        deleteAppButton = new QPushButton(centralwidget);
        deleteAppButton->setObjectName("deleteAppButton");
        deleteAppButton->setGeometry(QRect(230, 140, 541, 34));
        searchLineEdit = new QLineEdit(centralwidget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(241, 191, 421, 32));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(670, 190, 101, 34));
        appList = new QListWidget(centralwidget);
        appList->setObjectName("appList");
        appList->setGeometry(QRect(240, 230, 521, 301));
        appList->setStyleSheet(QString::fromUtf8("color: white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Maku Linux Application Launcher", nullptr));
        addCategoryButton->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        deleteCategoryButton->setText(QCoreApplication::translate("MainWindow", "Delete Category", nullptr));
        addAppButton->setText(QCoreApplication::translate("MainWindow", "Add App", nullptr));
        deleteAppButton->setText(QCoreApplication::translate("MainWindow", "Delete App", nullptr));
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
