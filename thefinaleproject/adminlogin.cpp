#include "adminlogin.h"
#include "ui_adminlogin.h"
#include<QMessageBox>
#include"admindashboard.h"

AdminLogin::AdminLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &AdminLogin::handleLogin);
}



void AdminLogin::handleLogin() {
    QString username = ui->usernamelineEdit->text();
    QString password = ui->passwordlineEdit->text();

    if (username == "admin" && password == "1234") {
        this->hide();
        adminDashboard *addb = new adminDashboard();
        addb->show();

        accept();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials.");
    }
}


AdminLogin::~AdminLogin()
{
    delete ui;
}
