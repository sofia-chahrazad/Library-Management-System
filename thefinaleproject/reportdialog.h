#ifndef REPORTDIALOG_H
#define REPORTDIALOG_H

#include <QDialog>

namespace Ui {
class reportDialog;
}



class reportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit reportDialog(QWidget *parent = nullptr);
    ~reportDialog();

private slots:
    void onCancelButtonClicked();
    void onConfirmButtonClicked();


private:
    Ui::reportDialog *ui;
};

#endif // REPORTDIALOG_H

