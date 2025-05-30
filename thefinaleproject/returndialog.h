#ifndef RETURNDIALOG_H
#define RETURNDIALOG_H
#include <QDialog>
#include"TransactionManager.h"



namespace Ui {
class returnDialog;
}

class returnDialog : public QDialog
{
    Q_OBJECT

public:
    void setBookInfo(const QString& title, const QString& author,const QString& year, const QString& isbn);

    explicit returnDialog(QWidget *parent = nullptr);
    ~returnDialog();

private slots:
    void onCancelButtonClicked();
    void onConfirmButtonClicked();

private:
    Ui::returnDialog *ui;
    TransactionManager* tm;
};


#endif // RETURNDIALOG_H
