#ifndef APP_H
#define APP_H

#include <QDialog>

namespace Ui {
class app;
}

class app : public QDialog
{
    Q_OBJECT

public:
    explicit app(QWidget *parent = nullptr);
    void on_closeButton_clicked();
    ~app();

private:
    Ui::app *ui;
};

#endif // APP_H
