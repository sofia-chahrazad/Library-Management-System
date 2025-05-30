#include "studentlogin.h"
#include "ui_studentlogin.h"
#include<QMessageBox>
#include"studentdashboard.h"

StudentLogin::StudentLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentLogin)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &StudentLogin::handleLogin);
}



void StudentLogin::handleLogin() {
    QString username = ui->fullnamelineEdit->text();
    QString password = ui->studentnumberlineEdit->text();

    if (username == "student" && password == "1234") {

        this->hide();
        StudentDashboard *s = new StudentDashboard;
        s->show();
        accept();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid credentials.");
    }
}





StudentLogin::~StudentLogin()
{
    delete ui;
}
