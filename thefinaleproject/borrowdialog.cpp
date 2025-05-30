#include "borrowdialog.h"
#include "ui_borrowdialog.h"
#include <QDate>
#include<QDebug>
#include<QMessageBox>
#include"transaction.h"
#include"TransactionManager.h"
#include"book.h"
#include"library.h"

borrowDialog::borrowDialog(QWidget *parent)
    : QDialog(parent)
    ,tm(new TransactionManager("/Users/mac/Desktop/LIBRARY/transactions.txt"))
    , ui(new Ui::borrowDialog)
{
    ui->setupUi(this);
    connect(ui->cancelButton, &QPushButton::clicked, this, &borrowDialog::onCancelButtonClicked);
    connect(ui->confirmButton,&QPushButton::clicked, this, &borrowDialog::onConfirmButtonClicked);
}



void borrowDialog::onCancelButtonClicked(){

    qDebug()<<"cancel button clicked";
    this->reject();
}

void borrowDialog::onConfirmButtonClicked() {
    QString bid = ui->isbnLabel->text().remove("ISBN: ").trimmed();
    QDate today = QDate::currentDate();
    QDate returnDate = ui->dateEdit->date();

    Library library("/Users/mac/Desktop/LIBRARY/books.txt");

    Book* book = library.findBookByISBN(bid);


    if (book && book->availableCopies > 0) {

            bool success = library.updateCopiesByISBN(bid, -1);

        if (success) {
            Transaction t("1234", bid, today, returnDate, TransactionType::Borrow);
            tm->addTransaction(t);

            QMessageBox::information(this, "Success", "Book borrowed successfully!\nReturn by: " + returnDate.toString());
            accept();
        } else {
            QMessageBox::warning(this, "Error", "Failed to update the book file.");
        }
    } else {
        QMessageBox::warning(this, "Unavailable", "This book is no longer available.");
    }
}


void borrowDialog::setBookInfo(const QString& title, const QString& author,
                               const QString& year, const QString& isbn)
{
    ui->titleLabel->setText("Title: " + title);
    ui->authorLabel->setText("Author: " + author);
    ui->yearLabel->setText("Year: " + year);
    ui->isbnLabel->setText("ISBN: " + isbn);

    // Automatically set return date = today + 14 days
    QDate today = QDate::currentDate();
    QDate returnDate = today.addDays(14);
    ui->dateEdit->setDate(returnDate);
}


borrowDialog::~borrowDialog()
{
    delete ui;
}
