/********************************************************************************
** Form generated from reading UI file 'borrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWDIALOG_H
#define UI_BORROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_borrowDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *titleLabel;
    QLabel *authorLabel;
    QLabel *yearLabel;
    QLabel *isbnLabel;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QLabel *label_6;
    QLabel *label_2;

    void setupUi(QDialog *borrowDialog)
    {
        if (borrowDialog->objectName().isEmpty())
            borrowDialog->setObjectName("borrowDialog");
        borrowDialog->resize(505, 669);
        borrowDialog->setStyleSheet(QString::fromUtf8("QDialog#borrowDialog {\n"
"      background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"  }\n"
"  QGroupBox {\n"
"      background-color: #7F00FF;\n"
"      border-radius: 30px;\n"
"  }\n"
"  QPushButton#cancelButton {\n"
"      background-color: #FF4C4C;\n"
"      border: none; \n"
"	 border-radius: 25px;\n"
"	 font-size:22px; \n"
"	 font-weight: bold;\n"
"      color: white; \n"
"  }\n"
"QPushButton#cancelButton:hover {\n"
"	background-color:#8C1717;\n"
"}\n"
"QPushButton#confirmButton {\n"
"	background-color:#1DB500;	\n"
"	border-radius: 25px;\n"
"	font-size: 22px;\n"
"	font-weight: bold;\n"
"	color:white;\n"
"}\n"
"QPushButton#confirmButton:hover {\n"
"	background-color:#308420;\n"
"		\n"
"}"));
        groupBox = new QGroupBox(borrowDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 120, 381, 511));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 191, 31));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(200, 290, 110, 22));
        dateEdit->setReadOnly(true);
        titleLabel = new QLabel(groupBox);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(50, 90, 231, 31));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        titleLabel->setFont(font1);
        authorLabel = new QLabel(groupBox);
        authorLabel->setObjectName("authorLabel");
        authorLabel->setGeometry(QRect(50, 140, 251, 31));
        authorLabel->setFont(font1);
        yearLabel = new QLabel(groupBox);
        yearLabel->setObjectName("yearLabel");
        yearLabel->setGeometry(QRect(50, 190, 201, 31));
        yearLabel->setFont(font1);
        isbnLabel = new QLabel(groupBox);
        isbnLabel->setObjectName("isbnLabel");
        isbnLabel->setGeometry(QRect(50, 240, 251, 31));
        isbnLabel->setFont(font1);
        confirmButton = new QPushButton(groupBox);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(120, 360, 141, 51));
        confirmButton->setStyleSheet(QString::fromUtf8(""));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(120, 420, 141, 51));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 280, 151, 41));
        label_6->setFont(font1);
        label_2 = new QLabel(borrowDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 30, 431, 61));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(true);
        label_2->setFont(font2);

        retranslateUi(borrowDialog);

        QMetaObject::connectSlotsByName(borrowDialog);
    } // setupUi

    void retranslateUi(QDialog *borrowDialog)
    {
        borrowDialog->setWindowTitle(QCoreApplication::translate("borrowDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("borrowDialog", "Borrow Book", nullptr));
        titleLabel->setText(QCoreApplication::translate("borrowDialog", "Title: ", nullptr));
        authorLabel->setText(QCoreApplication::translate("borrowDialog", "Author :", nullptr));
        yearLabel->setText(QCoreApplication::translate("borrowDialog", "Year :", nullptr));
        isbnLabel->setText(QCoreApplication::translate("borrowDialog", "ISBN : ", nullptr));
        confirmButton->setText(QCoreApplication::translate("borrowDialog", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("borrowDialog", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("borrowDialog", "Return Date :", nullptr));
        label_2->setText(QCoreApplication::translate("borrowDialog", "ENSIA Library Mangement System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrowDialog: public Ui_borrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWDIALOG_H
