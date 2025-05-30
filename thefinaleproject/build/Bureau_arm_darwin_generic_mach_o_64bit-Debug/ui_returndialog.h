/********************************************************************************
** Form generated from reading UI file 'returndialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNDIALOG_H
#define UI_RETURNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_returnDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *titleLabel;
    QLabel *AuthorLabel;
    QLabel *yearLabel;
    QLabel *isbnLabel;
    QLabel *returnDateLabel;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QDateEdit *dateEdit;
    QLabel *label;

    void setupUi(QDialog *returnDialog)
    {
        if (returnDialog->objectName().isEmpty())
            returnDialog->setObjectName("returnDialog");
        returnDialog->resize(597, 755);
        returnDialog->setStyleSheet(QString::fromUtf8("QDialog#returnDialog{\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"\n"
"}\n"
"QGroupBox#groupBox{\n"
"	background-color:#7F00FF;\n"
"	border-radius: 30px;\n"
"}\n"
"QPushButton{\n"
"	border-radius: 25px;\n"
"	background-color: black;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton#confirmButton{\n"
"background-color: #1DB500;\n"
"	\n"
"}\n"
"QPushButton#confirmButton:hover{\n"
"background-color:#308420;\n"
"}\n"
"QPushButton#cancelButton{\n"
"	background-color:#FF4C4C;\n"
"}\n"
"QPushButton#cancelButton:hover{\n"
"	bakcground-color: #8C1717;	\n"
"}\n"
"\n"
""));
        groupBox = new QGroupBox(returnDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(90, 140, 381, 501));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 30, 171, 41));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label_2->setFont(font);
        titleLabel = new QLabel(groupBox);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(50, 100, 281, 41));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        titleLabel->setFont(font1);
        AuthorLabel = new QLabel(groupBox);
        AuthorLabel->setObjectName("AuthorLabel");
        AuthorLabel->setGeometry(QRect(50, 150, 281, 51));
        AuthorLabel->setFont(font1);
        yearLabel = new QLabel(groupBox);
        yearLabel->setObjectName("yearLabel");
        yearLabel->setGeometry(QRect(50, 210, 261, 31));
        yearLabel->setFont(font1);
        isbnLabel = new QLabel(groupBox);
        isbnLabel->setObjectName("isbnLabel");
        isbnLabel->setGeometry(QRect(50, 260, 271, 41));
        isbnLabel->setFont(font1);
        returnDateLabel = new QLabel(groupBox);
        returnDateLabel->setObjectName("returnDateLabel");
        returnDateLabel->setGeometry(QRect(50, 310, 141, 41));
        returnDateLabel->setFont(font1);
        confirmButton = new QPushButton(groupBox);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(110, 370, 141, 51));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(110, 430, 141, 51));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(230, 320, 110, 22));
        label = new QLabel(returnDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 511, 71));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        label->setFont(font2);

        retranslateUi(returnDialog);

        QMetaObject::connectSlotsByName(returnDialog);
    } // setupUi

    void retranslateUi(QDialog *returnDialog)
    {
        returnDialog->setWindowTitle(QCoreApplication::translate("returnDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("returnDialog", "Return Book", nullptr));
        titleLabel->setText(QCoreApplication::translate("returnDialog", "Title : ", nullptr));
        AuthorLabel->setText(QCoreApplication::translate("returnDialog", "Author : ", nullptr));
        yearLabel->setText(QCoreApplication::translate("returnDialog", "Year : ", nullptr));
        isbnLabel->setText(QCoreApplication::translate("returnDialog", "ISBN : ", nullptr));
        returnDateLabel->setText(QCoreApplication::translate("returnDialog", "Return Date : ", nullptr));
        confirmButton->setText(QCoreApplication::translate("returnDialog", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("returnDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("returnDialog", "ENSIA Library Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnDialog: public Ui_returnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNDIALOG_H
