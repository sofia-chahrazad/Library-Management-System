/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QGroupBox *groupBox;
    QLineEdit *usernamelineEdit;
    QLineEdit *passwordlineEdit;
    QLabel *label;
    QPushButton *loginButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(776, 562);
        AdminLogin->setStyleSheet(QString::fromUtf8("QDialog#AdminLogin{\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"QGroupBox#groupBox {\n"
"    background-color: #7F00FF;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #cecece;\n"
"    border-radius: 25px;\n"
"	font-size:16px;\n"
"	color:#3a3a3a;\n"
"	padding-left: 15px;\n"
"}\n"
"QLineEdit::placeholder{\n"
"	color: #3d3d3d;	\n"
"}\n"
"\n"
"QPushButton#loginButton {\n"
"    background-color: #1DB500;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #308420;\n"
"}\n"
"QDialog#StudentLogin {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"\n"
"QGroupBox#groupBox {\n"
"    background-color: #7F00FF;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #cecece;\n"
"    border-radius: 25px;\n"
"	font-size:16px;\n"
"	colo"
                        "r:#3a3a3a;\n"
"	padding-left: 15px;\n"
"}\n"
"QLineEdit::placeholder{\n"
"	color: #3d3d3d;	\n"
"}\n"
"\n"
"QPushButton#loginButton {\n"
"    background-color: #1DB500;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #308420;\n"
"}\n"
""));
        groupBox = new QGroupBox(AdminLogin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 100, 521, 391));
        usernamelineEdit = new QLineEdit(groupBox);
        usernamelineEdit->setObjectName("usernamelineEdit");
        usernamelineEdit->setGeometry(QRect(60, 130, 401, 51));
        passwordlineEdit = new QLineEdit(groupBox);
        passwordlineEdit->setObjectName("passwordlineEdit");
        passwordlineEdit->setGeometry(QRect(60, 230, 401, 51));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 261, 31));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(180, 310, 141, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        loginButton->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 131, 21));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 200, 131, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(AdminLogin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 20, 551, 71));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        label_4->setFont(font3);

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QDialog *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        usernamelineEdit->setPlaceholderText(QCoreApplication::translate("AdminLogin", "admin", nullptr));
        passwordlineEdit->setPlaceholderText(QCoreApplication::translate("AdminLogin", "1234", nullptr));
        label->setText(QCoreApplication::translate("AdminLogin", "LOGIN AS ADMIN", nullptr));
        loginButton->setText(QCoreApplication::translate("AdminLogin", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogin", "User Name:", nullptr));
        label_3->setText(QCoreApplication::translate("AdminLogin", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("AdminLogin", "ENSIA Library Management system", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
