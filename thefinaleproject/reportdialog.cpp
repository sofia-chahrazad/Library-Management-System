#include "reportdialog.h"
#include "ui_reportdialog.h"

reportDialog::reportDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reportDialog)
{
    ui->setupUi(this);

    connect(ui->cancelButton, &QPushButton::clicked, this, &reportDialog::onCancelButtonClicked);
    connect(ui->confirmButton, &QPushButton::clicked, this, &reportDialog::onConfirmButtonClicked);

}
void reportDialog::onCancelButtonClicked() {
    this->close();
}

void reportDialog::onConfirmButtonClicked() {
    // Add your reporting logic here
    this->close();
}
reportDialog::~reportDialog()
{
    delete ui;
}
