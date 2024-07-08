/********************************************************************************
** Form generated from reading UI file 'categorydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYDIALOG_H
#define UI_CATEGORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CategoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *categoryNameLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CategoryDialog)
    {
        if (CategoryDialog->objectName().isEmpty())
            CategoryDialog->setObjectName("CategoryDialog");
        CategoryDialog->resize(400, 100);
        verticalLayout = new QVBoxLayout(CategoryDialog);
        verticalLayout->setObjectName("verticalLayout");
        categoryNameLineEdit = new QLineEdit(CategoryDialog);
        categoryNameLineEdit->setObjectName("categoryNameLineEdit");

        verticalLayout->addWidget(categoryNameLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        okButton = new QPushButton(CategoryDialog);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(CategoryDialog);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CategoryDialog);

        QMetaObject::connectSlotsByName(CategoryDialog);
    } // setupUi

    void retranslateUi(QDialog *CategoryDialog)
    {
        CategoryDialog->setWindowTitle(QCoreApplication::translate("CategoryDialog", "Add Category", nullptr));
        categoryNameLineEdit->setPlaceholderText(QCoreApplication::translate("CategoryDialog", "Enter category name...", nullptr));
        okButton->setText(QCoreApplication::translate("CategoryDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("CategoryDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryDialog: public Ui_CategoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYDIALOG_H
