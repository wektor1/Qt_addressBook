#pragma once

#include <QtWidgets/QWidget>

#include "ui_addressbook.h"

class AddressBook : public QWidget {
  Q_OBJECT

 public:
  AddressBook(QWidget* parent = Q_NULLPTR);

 private:
  Ui::AddressBookClass ui;

 private slots:
  void on_addButton_clicked();
  void on_addressList_currentItemChanged();
  void on_deleteButton_clicked();
};
