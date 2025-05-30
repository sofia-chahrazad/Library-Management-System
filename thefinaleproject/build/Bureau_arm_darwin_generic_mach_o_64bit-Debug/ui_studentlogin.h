/********************************************************************************
** Form generated from reading UI file 'studentlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGIN_H
#define UI_STUDENTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentLogin
{
public:
    QGroupBox *groupBox;
    QLineEdit *fullnamelineEdit;
    QLineEdit *studentnumberlineEdit;
    QLabel *label;
    QPushButton *loginButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *StudentLogin)
    {
        if (StudentLogin->objectName().isEmpty())
            StudentLogin->setObjectName("StudentLogin");
        StudentLogin->resize(833, 613);
        StudentLogin->setStyleSheet(QString::fromUtf8("QDialog#StudentLogin {\n"
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
"}"));
        groupBox = new QGroupBox(StudentLogin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 100, 521, 371));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        fullnamelineEdit = new QLineEdit(groupBox);
        fullnamelineEdit->setObjectName("fullnamelineEdit");
        fullnamelineEdit->setGeometry(QRect(60, 120, 391, 51));
        QFont font;
        font.setBold(false);
        fullnamelineEdit->setFont(font);
        studentnumberlineEdit = new QLineEdit(groupBox);
        studentnumberlineEdit->setObjectName("studentnumberlineEdit");
        studentnumberlineEdit->setGeometry(QRect(60, 220, 391, 51));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 321, 51));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        label->setFont(font1);
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(200, 300, 121, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 90, 111, 31));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        label_2->setFont(font3);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 190, 181, 31));
        label_3->setFont(font3);
        label_4 = new QLabel(StudentLogin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 30, 511, 41));
        QFont font4;
        font4.setPointSize(30);
        font4.setBold(true);
        label_4->setFont(font4);

        retranslateUi(StudentLogin);

        QMetaObject::connectSlotsByName(StudentLogin);
    } // setupUi

    void retranslateUi(QDialog *StudentLogin)
    {
        StudentLogin->setWindowTitle(QCoreApplication::translate("StudentLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        fullnamelineEdit->setPlaceholderText(QCoreApplication::translate("StudentLogin", "student", nullptr));
        studentnumberlineEdit->setText(QString());
        studentnumberlineEdit->setPlaceholderText(QCoreApplication::translate("StudentLogin", "1234", nullptr));
        label->setText(QCoreApplication::translate("StudentLogin", "LOGIN AS A STUDENT", nullptr));
        loginButton->setText(QCoreApplication::translate("StudentLogin", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("StudentLogin", "Full Name : ", nullptr));
        label_3->setText(QCoreApplication::translate("StudentLogin", "Student Number :", nullptr));
        label_4->setText(QCoreApplication::translate("StudentLogin", "ENSIA Library Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentLogin: public Ui_StudentLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGIN_H
