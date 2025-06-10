#include "reportdialog.h"
#include "ui_reportdialog.h"
#include<QMessageBox>
#include<QFile>
#include<QDate>
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
    QString reportText = ui->reportEdit->toPlainText();

    if (reportText.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Empty Report", "Please write something before confirming.");
        return;
    }

    QFile file("/Users/mac/Desktop/LIBRARY/reports.txt");  // Make sure this file is in your project directory

    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

        out << reportText << "\nDate: " << currentDateTime << "\n--------------------\n";
        file.close();

        QMessageBox::information(this, "Report Saved", "Your report has been saved successfully.");
        ui->reportEdit->clear();
    } else {
        QMessageBox::critical(this, "Error", "Unable to write to reports.txt");
    }

    this->close();
}
reportDialog::~reportDialog()
{
    delete ui;
}
