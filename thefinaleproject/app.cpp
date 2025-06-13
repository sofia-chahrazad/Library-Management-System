#include "app.h"
#include "ui_app.h"
#include <QPixmap>
#include <QLabel>
app::app(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::app)
{
    ui->setupUi(this);
    QPixmap pix(":/library.png");  // If using resources
    // OR: QPixmap pix("/absolute/path/to/image.png"); // If using direct path

    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);
    connect(ui->closeButton, &QPushButton::clicked, this, &app::on_closeButton_clicked);
}
void app::on_closeButton_clicked(){
    this->close();
}
app::~app()
{
    delete ui;
}
