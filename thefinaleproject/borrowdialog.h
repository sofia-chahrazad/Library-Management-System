#ifndef BORROWDIALOG_H
#define BORROWDIALOG_H

#include <QDialog>
#include"TransactionManager.h"



namespace Ui {
class borrowDialog;
}

class borrowDialog : public QDialog
{
    Q_OBJECT

public:
    void setBookInfo(const QString& title, const QString& author,const QString& year, const QString& isbn);

    explicit borrowDialog(QWidget *parent = nullptr);
    ~borrowDialog();

private slots:
    void onCancelButtonClicked();
    void onConfirmButtonClicked();

private:
    Ui::borrowDialog *ui;
    TransactionManager* tm;
};

#endif // BORROWDIALOG_H
