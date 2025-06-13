/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_app
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *closeButton;

    void setupUi(QDialog *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName("app");
        app->resize(1082, 879);
        app->setStyleSheet(QString::fromUtf8("QDialog#app{\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"\n"
"}"));
        label = new QLabel(app);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 170, 451, 351));
        textBrowser = new QTextBrowser(app);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 60, 581, 651));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        closeButton = new QPushButton(app);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(340, 740, 271, 71));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        closeButton->setFont(font);
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF4C4C;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 34px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color:#8C1717;\n"
"}"));

        retranslateUi(app);

        QMetaObject::connectSlotsByName(app);
    } // setupUi

    void retranslateUi(QDialog *app)
    {
        app->setWindowTitle(QCoreApplication::translate("app", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("app", "TextLabel", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("app", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; font-style:italic; text-decoration: underline;\"> About the App:</span><span style=\" font-size:18pt; font-weight:700;\"><br /></span></h2>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weigh"
                        "t:700;\">Welcome to LibManage!</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Your cozy companion for organizing books, tracking borrowers, and making library life a breeze.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"><br /></span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">This Library Management System was lovingly crafted using </span><span style=\" font-size:18pt; font-weight:700;\">Qt Creator</span><span style=\" font-size:18pt;\"> and written in </span><span style=\" font-size:18pt; font-weight:700;\">C++</span><span style=\" font-size:18pt;\">. Whether you\342\200\231re managing a persona"
                        "l collection or running a full-fledged school library, LibManage helps you:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"><br /></span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> Add, edit, and remove books</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> Register and manage students</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Borrow and return books with a click</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"> View reports on transactions and activity</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\"><br /></span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Built with care and a passion for clean code, this app keeps things </span><span style=\" font-size:18pt; font-weight:700;\">simple, efficient, and user-friendly</span><span style=\" font-size:18pt;\"> \342\200\224 just like a good book catalog should be! </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700; text-decoration: underline;\">created by : RASLAIN Chahrazad Sof"
                        "ia</span></p></body></html>", nullptr));
        closeButton->setText(QCoreApplication::translate("app", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
