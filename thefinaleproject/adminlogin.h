#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    void handleLogin() ;
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private:
    Ui::AdminLogin *ui;
};

#endif // ADMINLOGIN_H
