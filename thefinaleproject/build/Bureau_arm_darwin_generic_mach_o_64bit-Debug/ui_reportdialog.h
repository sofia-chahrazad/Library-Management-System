/********************************************************************************
** Form generated from reading UI file 'reportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTDIALOG_H
#define UI_REPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_reportDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTextEdit *reportEdit;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QLabel *label_2;

    void setupUi(QDialog *reportDialog)
    {
        if (reportDialog->objectName().isEmpty())
            reportDialog->setObjectName("reportDialog");
        reportDialog->resize(661, 668);
        QFont font;
        font.setBold(false);
        reportDialog->setFont(font);
        reportDialog->setStyleSheet(QString::fromUtf8("QDialog#reportDialog{\n"
" background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"QGroupBox#groupBox{\n"
"	background-color:#7F00FF;\n"
"	border-radius: 35px;\n"
"}\n"
"QTextEdit#reportEdit{\n"
"	background-color: #cecece;	\n"
"	border-radius: 20px;\n"
"	padding-left: 15px;\n"
"	padding-top: 5px;\n"
"	color: #3a3a3a;\n"
"}\n"
"QPushButton#confirmButton{\n"
"	border-radius: 25px;\n"
"	background-color: #1DB500;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton#confirmButton:hover{\n"
"	background-color:#308420;\n"
"}\n"
"QPushButton#cancelButton{\n"
"	border-radius: 25px;\n"
"	background-color: #FF4C4C;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton#cancelButton:hover{\n"
"	background-color: #8C1717;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        groupBox = new QGroupBox(reportDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 110, 431, 501));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 211, 41));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        label->setFont(font1);
        reportEdit = new QTextEdit(groupBox);
        reportEdit->setObjectName("reportEdit");
        reportEdit->setGeometry(QRect(50, 100, 321, 191));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        reportEdit->setFont(font2);
        confirmButton = new QPushButton(groupBox);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(120, 320, 161, 51));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        confirmButton->setFont(font3);
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(120, 390, 161, 51));
        cancelButton->setFont(font3);
        label_2 = new QLabel(reportDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 30, 511, 51));
        QFont font4;
        font4.setPointSize(30);
        font4.setBold(true);
        label_2->setFont(font4);

        retranslateUi(reportDialog);

        QMetaObject::connectSlotsByName(reportDialog);
    } // setupUi

    void retranslateUi(QDialog *reportDialog)
    {
        reportDialog->setWindowTitle(QCoreApplication::translate("reportDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("reportDialog", "Report Problem", nullptr));
        reportEdit->setPlaceholderText(QCoreApplication::translate("reportDialog", "write here.......", nullptr));
        confirmButton->setText(QCoreApplication::translate("reportDialog", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("reportDialog", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("reportDialog", "ENSIA Library Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportDialog: public Ui_reportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTDIALOG_H
