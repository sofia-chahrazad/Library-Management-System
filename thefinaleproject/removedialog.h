#ifndef REMOVEDIALOG_H
#define REMOVEDIALOG_H

#include <QDialog>
#include"library.h"
#include"book.h"//

namespace Ui {
class removeDialog;
}

class removeDialog : public QDialog
{
    Q_OBJECT

public:
    void setBookInfo(const QString& title, const QString& author,const QString& year, const QString& isbn);
    explicit removeDialog(Library* lib, const Book& book, QWidget *parent = nullptr);
    void onCancelButtonClicked();
    void on_confirmButton_clicked();


    ~removeDialog();

private:
    Ui::removeDialog *ui;
    Library* lib;
    Book selectedBook;
signals:
    void bookRemoved();
};

#endif // REMOVEDIALOG_H
