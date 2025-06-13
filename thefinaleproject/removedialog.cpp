#include "removedialog.h"
#include "ui_removedialog.h"

removeDialog::removeDialog(Library* lib, const Book& book, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::removeDialog)
    , lib(lib)
    , selectedBook(book)
{
    ui->setupUi(this);

    // Set the text of the QLabel widgets
    ui->titlelabel->setText("Title: " + selectedBook.title);
    ui->authorlabel->setText("Author: " + selectedBook.author);
    ui->yearlabel->setText("Year: " + QString::number(selectedBook.year));

    connect(ui->cancelButton, &QPushButton::clicked, this, &removeDialog::onCancelButtonClicked);
    connect(ui->confirmButton, &QPushButton::clicked, this, &removeDialog::on_confirmButton_clicked );
}
void removeDialog::on_confirmButton_clicked() {
    if (lib->removeBookByISBN(selectedBook.ISBN)) {
        emit bookRemoved(); // Emit signal to notify removal
        accept();           // Close dialog
    } else {
        QMessageBox::warning(this, "Error", "Could not remove book.");
    }
}
void removeDialog::onCancelButtonClicked()
{
    this->reject();
}

removeDialog::~removeDialog()
{
    delete ui;
}
