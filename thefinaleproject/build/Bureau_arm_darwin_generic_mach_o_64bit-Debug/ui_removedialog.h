/********************************************************************************
** Form generated from reading UI file 'removedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDIALOG_H
#define UI_REMOVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_removeDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QLabel *titlelabel;
    QLabel *yearlabel;
    QLabel *authorlabel;

    void setupUi(QDialog *removeDialog)
    {
        if (removeDialog->objectName().isEmpty())
            removeDialog->setObjectName("removeDialog");
        removeDialog->resize(546, 654);
        removeDialog->setStyleSheet(QString::fromUtf8("QDialog#removeDialog {\n"
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
        groupBox = new QGroupBox(removeDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 60, 411, 531));
        confirmButton = new QPushButton(groupBox);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(60, 320, 291, 61));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(60, 400, 291, 61));
        titlelabel = new QLabel(groupBox);
        titlelabel->setObjectName("titlelabel");
        titlelabel->setGeometry(QRect(70, 80, 301, 51));
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        titlelabel->setFont(font);
        yearlabel = new QLabel(groupBox);
        yearlabel->setObjectName("yearlabel");
        yearlabel->setGeometry(QRect(70, 140, 291, 51));
        yearlabel->setFont(font);
        authorlabel = new QLabel(groupBox);
        authorlabel->setObjectName("authorlabel");
        authorlabel->setGeometry(QRect(70, 200, 291, 51));
        authorlabel->setFont(font);

        retranslateUi(removeDialog);

        QMetaObject::connectSlotsByName(removeDialog);
    } // setupUi

    void retranslateUi(QDialog *removeDialog)
    {
        removeDialog->setWindowTitle(QCoreApplication::translate("removeDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        confirmButton->setText(QCoreApplication::translate("removeDialog", "confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("removeDialog", "cancel", nullptr));
        titlelabel->setText(QString());
        yearlabel->setText(QString());
        authorlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class removeDialog: public Ui_removeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDIALOG_H
