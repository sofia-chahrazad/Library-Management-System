/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QPushButton *studentButton;
    QPushButton *adminButton;
    QLabel *profileLabel;
    QPushButton *appButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 659);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"\n"
"}\n"
"QGroupBox#groupBox{\n"
"	 border-radius: 80px;\n"
"}\n"
"  QPushButton#adminButton{\n"
"      background-color:red;\n"
"    }\n"
"QLabel#profileLabel{ \n"
"border-radius: 70px;\n"
" border: 2px solid white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -30, 521, 131));
        QFont font;
        font.setPointSize(34);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 450, 231, 51));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(360, 100, 411, 431));
        QFont font1;
        font1.setPointSize(24);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("background-color:#7f00ff;\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 50, 261, 51));
        label_3->setFont(font);
        studentButton = new QPushButton(groupBox);
        studentButton->setObjectName("studentButton");
        studentButton->setGeometry(QRect(70, 160, 251, 71));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        studentButton->setFont(font2);
        studentButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00C2FF;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 34px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2289A9;\n"
"}"));
        adminButton = new QPushButton(groupBox);
        adminButton->setObjectName("adminButton");
        adminButton->setGeometry(QRect(70, 270, 251, 71));
        adminButton->setFont(font2);
        adminButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00C2FF;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 34px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2289A9;\n"
"}"));
        profileLabel = new QLabel(centralwidget);
        profileLabel->setObjectName("profileLabel");
        profileLabel->setGeometry(QRect(210, 430, 141, 141));
        appButton = new QPushButton(centralwidget);
        appButton->setObjectName("appButton");
        appButton->setGeometry(QRect(40, 160, 251, 71));
        QFont font3;
        font3.setPointSize(23);
        font3.setBold(true);
        appButton->setFont(font3);
        appButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32CD32;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 34px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color:#308420;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ensia library managent system", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Created by : RASLAIN \n"
" Sofia Charazad", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "ARE YOU............", nullptr));
        studentButton->setText(QCoreApplication::translate("MainWindow", "A Student", nullptr));
        adminButton->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        profileLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        appButton->setText(QCoreApplication::translate("MainWindow", "about the app", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
