#include "returndialog.h"
#include "library.h"
#include "ui_returndialog.h"
#include <QMessageBox>
#include"TransactionManager.h"
#include<QDate>

returnDialog::returnDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnDialog),
    tm(new TransactionManager("/Users/mac/Desktop/LIBRARY/transactions.txt"))
{
    ui->setupUi(this);

    // Connect buttons
    connect(ui->cancelButton, &QPushButton::clicked, this, &returnDialog::onCancelButtonClicked);
    connect(ui->confirmButton, &QPushButton::clicked, this, &returnDialog::onConfirmButtonClicked);
}

returnDialog::~returnDialog()
{
    delete tm;
    delete ui;
}

void returnDialog::setBookInfo(const QString& title, const QString& author, const QString& year, const QString& isbn)
{
    ui->titleLabel->setText("Title : " + title);
    ui->AuthorLabel->setText("Author : " +author);
    ui->yearLabel->setText("Year : " +year);
    ui->isbnLabel->setText("ISBN : " + isbn);
}

void returnDialog::onCancelButtonClicked()
{
    this->reject();
}


void returnDialog::onConfirmButtonClicked()
{
    QString isbn = ui->isbnLabel->text().split("ISBN : ").last().trimmed();
    QDate returnDate = ui->dateEdit->date();

     Library *library  = new Library("/Users/mac/Desktop/LIBRARY/books.txt");
    Book* book = library->findBookByISBN(isbn);

    if (book) {
        QString studentID = "1234"; // TODO: Replace with actual logged-in user ID if available

        Transaction t(studentID, isbn, QDate::currentDate(), returnDate, TransactionType::Return);

        if (tm->returnBookByISBN(t)) {
            bool success = library->returnBookByISBN(isbn);
            if (success) {
                QMessageBox::information(this, "Book Returned", "The book was successfully returned.");
                this->accept();
            } else {
                QMessageBox::warning(this, "Return Failed", "Could not update book availability.");
            }
        } else {
            QMessageBox::warning(this, "Already Returned", "You have already returned this book.");
        }
    }
    else {
        QMessageBox::warning(this, "Not Found", "Book not found in the system.");
    }
}
