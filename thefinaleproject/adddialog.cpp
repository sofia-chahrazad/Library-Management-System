#include "adddialog.h"
#include "book.h"
#include "ui_adddialog.h"
#include "library.h"
#include"QMessageBox"


addDialog::addDialog(QWidget *parent, Library* lib)
    : QDialog(parent)
    , ui(new Ui::addDialog),lib(lib
          )
{
    ui->setupUi(this);
    connect(ui->confirmButton, &QPushButton::clicked, this, &addDialog::on_confirmButton_clicked);


}

void addDialog::on_confirmButton_clicked() {
    QString isbn = ui->isbnLineEdit->text();
    QString title = ui->titleLineEdit->text();
    QString author = ui->authorLineEdit->text();
    int year = ui->yearSpinBox->value();
    int co = ui->copiesSpinBox->value();

    // Check for duplicate using existing method
    if (lib->findBookByISBN(isbn) != nullptr) {
        return; // Don't proceed
    }

    Book b(isbn, title, author, "", year, co);
    lib->addBook(b);
    emit bookAdded();
    this->accept();
}

addDialog::~addDialog()
{
    delete ui;
}
