#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include "book.h"
#include "library.h"
#include <QDialog>

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent = nullptr, Library* lib = nullptr);
    ~addDialog();
signals:
    void bookAdded();
private slots:
    void on_confirmButton_clicked();
private:
    Ui::addDialog *ui;
    Library* lib;
};

#endif // ADDDIALOG_H
