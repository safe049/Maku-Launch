/********************************************************************************
** Form generated from reading UI file 'appitem.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPITEM_H
#define UI_APPITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *appIconLabel;
    QLabel *appNameLabel;

    void setupUi(QWidget *AppItem)
    {
        if (AppItem->objectName().isEmpty())
            AppItem->setObjectName("AppItem");
        AppItem->resize(200, 50);
        horizontalLayout = new QHBoxLayout(AppItem);
        horizontalLayout->setObjectName("horizontalLayout");
        appIconLabel = new QLabel(AppItem);
        appIconLabel->setObjectName("appIconLabel");

        horizontalLayout->addWidget(appIconLabel);

        appNameLabel = new QLabel(AppItem);
        appNameLabel->setObjectName("appNameLabel");

        horizontalLayout->addWidget(appNameLabel);


        retranslateUi(AppItem);

        QMetaObject::connectSlotsByName(AppItem);
    } // setupUi

    void retranslateUi(QWidget *AppItem)
    {
        appIconLabel->setText(QCoreApplication::translate("AppItem", "Icon", nullptr));
        appNameLabel->setText(QCoreApplication::translate("AppItem", "App Name", nullptr));
        (void)AppItem;
    } // retranslateUi

};

namespace Ui {
    class AppItem: public Ui_AppItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPITEM_H
