/********************************************************************************
** Form generated from reading UI file 'addressbook.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QListWidget *addressList;
    QLabel *nameLabel;
    QSplitter *splitter;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QLabel *emailLabel;

    void setupUi(QWidget *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QString::fromUtf8("AddressBookClass"));
        AddressBookClass->resize(421, 323);
        widget = new QWidget(AddressBookClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 401, 304));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addressList = new QListWidget(widget);
        addressList->setObjectName(QString::fromUtf8("addressList"));

        gridLayout->addWidget(addressList, 0, 0, 1, 1);

        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        addButton = new QPushButton(splitter);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        splitter->addWidget(addButton);
        deleteButton = new QPushButton(splitter);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        splitter->addWidget(deleteButton);

        gridLayout->addWidget(splitter, 0, 1, 1, 1);

        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);


        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QWidget *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QCoreApplication::translate("AddressBookClass", "AddressBook", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddressBookClass", "<No items selected>", nullptr));
        addButton->setText(QCoreApplication::translate("AddressBookClass", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("AddressBookClass", "Delete", nullptr));
        emailLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
