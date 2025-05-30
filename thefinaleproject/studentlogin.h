#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QDialog>

namespace Ui {
class StudentLogin;
}

class StudentLogin : public QDialog
{
    Q_OBJECT

public:
    void handleLogin() ;

    explicit StudentLogin(QWidget *parent = nullptr);
    ~StudentLogin();

private:
    Ui::StudentLogin *ui;
};

#endif // STUDENTLOGIN_H
