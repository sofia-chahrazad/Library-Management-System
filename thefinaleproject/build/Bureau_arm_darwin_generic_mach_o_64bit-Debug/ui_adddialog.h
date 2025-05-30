/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *titleLabel;
    QLabel *AuthorLabel;
    QLabel *isbnLabel;
    QLabel *yearLabel;
    QLabel *label_7;
    QSpinBox *copiesSpinBox;
    QLineEdit *titleLineEdit;
    QLineEdit *isbnLineEdit;
    QLineEdit *authorLineEdit;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QSpinBox *yearSpinBox;
    QLabel *label;

    void setupUi(QDialog *addDialog)
    {
        if (addDialog->objectName().isEmpty())
            addDialog->setObjectName("addDialog");
        addDialog->resize(562, 679);
        addDialog->setStyleSheet(QString::fromUtf8("QDialog#addDialog{\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"QGroupBox{\n"
"background-color: #7F00FF;\n"
"border-radius: 40px;\n"
"}\n"
"QPushButton{\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"	color : white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"\n"
"}QPushButton#confirmButton{\n"
"	background-color: #1DB500;\n"
"}QPushButton#confirmButton:hover{\n"
"\n"
"	backgrount-color: #308420;\n"
"}\n"
"QPushButton#cancelButton{\n"
"	background-color: #FF4C4C;\n"
"}\n"
"QPushButton#cancelButton:hover{\n"
"	background-color:#8C1717;\n"
"}\n"
"QLineEdit{\n"
"	border-radius: 20px;\n"
"	padding-left: 5px;\n"
"	color: #3a3a3a;\n"
"	\n"
"}\n"
""));
        groupBox = new QGroupBox(addDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 100, 431, 531));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 30, 161, 31));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label_2->setFont(font);
        titleLabel = new QLabel(groupBox);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(30, 110, 131, 31));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        titleLabel->setFont(font1);
        AuthorLabel = new QLabel(groupBox);
        AuthorLabel->setObjectName("AuthorLabel");
        AuthorLabel->setGeometry(QRect(30, 160, 121, 31));
        AuthorLabel->setFont(font1);
        isbnLabel = new QLabel(groupBox);
        isbnLabel->setObjectName("isbnLabel");
        isbnLabel->setGeometry(QRect(30, 250, 71, 51));
        isbnLabel->setFont(font1);
        yearLabel = new QLabel(groupBox);
        yearLabel->setObjectName("yearLabel");
        yearLabel->setGeometry(QRect(30, 210, 131, 31));
        yearLabel->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 310, 181, 41));
        label_7->setFont(font1);
        copiesSpinBox = new QSpinBox(groupBox);
        copiesSpinBox->setObjectName("copiesSpinBox");
        copiesSpinBox->setGeometry(QRect(220, 310, 161, 31));
        copiesSpinBox->setMinimum(1);
        copiesSpinBox->setMaximum(1000);
        titleLineEdit = new QLineEdit(groupBox);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(100, 100, 271, 41));
        isbnLineEdit = new QLineEdit(groupBox);
        isbnLineEdit->setObjectName("isbnLineEdit");
        isbnLineEdit->setGeometry(QRect(100, 250, 271, 41));
        authorLineEdit = new QLineEdit(groupBox);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(120, 150, 251, 41));
        confirmButton = new QPushButton(groupBox);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(110, 370, 201, 51));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(110, 440, 201, 51));
        yearSpinBox = new QSpinBox(groupBox);
        yearSpinBox->setObjectName("yearSpinBox");
        yearSpinBox->setGeometry(QRect(100, 210, 161, 31));
        yearSpinBox->setMinimum(1500);
        yearSpinBox->setMaximum(2025);
        label = new QLabel(addDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 481, 51));
        label->setFont(font);

        retranslateUi(addDialog);

        QMetaObject::connectSlotsByName(addDialog);
    } // setupUi

    void retranslateUi(QDialog *addDialog)
    {
        addDialog->setWindowTitle(QCoreApplication::translate("addDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("addDialog", "Add a Book", nullptr));
        titleLabel->setText(QCoreApplication::translate("addDialog", "Title : ", nullptr));
        AuthorLabel->setText(QCoreApplication::translate("addDialog", "Author : ", nullptr));
        isbnLabel->setText(QCoreApplication::translate("addDialog", "ISBN : ", nullptr));
        yearLabel->setText(QCoreApplication::translate("addDialog", "Year : ", nullptr));
        label_7->setText(QCoreApplication::translate("addDialog", "Copies Number:", nullptr));
        copiesSpinBox->setSuffix(QCoreApplication::translate("addDialog", " copy", nullptr));
        confirmButton->setText(QCoreApplication::translate("addDialog", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("addDialog", "Cancel", nullptr));
        yearSpinBox->setSuffix(QString());
        label->setText(QCoreApplication::translate("addDialog", "ENSIA Library Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDialog: public Ui_addDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
