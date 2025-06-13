#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPainterPath>
#include<QDebug>
#include"app.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap originalPixmap(":/IMG_2409.heic");  // Match your file name exactly
    qDebug() << "Image loaded:" << !originalPixmap.isNull(); // <-- this should print true
    QPixmap scaledPixmap = originalPixmap.scaled(
        ui->profileLabel->width(),
        ui->profileLabel->height(),
        Qt::KeepAspectRatioByExpanding,
        Qt::SmoothTransformation
        );

    // Create a transparent pixmap and draw a circular image
    QPixmap circularPixmap(ui->profileLabel->size());
    circularPixmap.fill(Qt::transparent);

    QPainter painter(&circularPixmap);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // Create a circular path
    QPainterPath path;
    path.addEllipse(0, 0, ui->profileLabel->width(), ui->profileLabel->height());
    painter.setClipPath(path);
    int x = (scaledPixmap.width() - ui->profileLabel->width()) / 2;
    int y = (scaledPixmap.height() - ui->profileLabel->height()) / 2;
    painter.drawPixmap(-x, -y, scaledPixmap);
    // Set the circular image to the label
    ui->profileLabel->setPixmap(circularPixmap);
    connect(ui->studentButton, &QPushButton::clicked, this, &MainWindow::on_studentButton_clicked);
    connect(ui->adminButton, &QPushButton::clicked, this, &MainWindow::on_adminButton_clicked);
    connect(ui->appButton, &QPushButton::clicked, this, &MainWindow::on_appButton_clicked);
}


void MainWindow::on_studentButton_clicked() {
    StudentLogin studentLogin(this);
    studentLogin.exec();
}

void MainWindow::on_adminButton_clicked() {
    AdminLogin adminLogin (this);
    adminLogin.exec();

}
void MainWindow::on_appButton_clicked() {
    app adminLogin (this);
    adminLogin.exec();

}
MainWindow::~MainWindow()
{
    delete ui;
}



