/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminDashboard
{
public:
    QLabel *label;
    QLineEdit *searchLineEdit;
    QComboBox *searchComboBox;
    QPushButton *searchButton;
    QPushButton *logoutButton;
    QTableWidget *tableWidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *reportButton;

    void setupUi(QWidget *adminDashboard)
    {
        if (adminDashboard->objectName().isEmpty())
            adminDashboard->setObjectName("adminDashboard");
        adminDashboard->resize(850, 629);
        adminDashboard->setStyleSheet(QString::fromUtf8("QWidget#adminDashboard{\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"QPushButton#addButton{\n"
"border-radius: 25px;	\n"
"	background-color: grey;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	background-color:#1DB500;\n"
"}\n"
"QPushButton#addButton:hover{\n"
"	background-color:#308420;\n"
"}\n"
"\n"
"\n"
"QPushButton#removeButton{\n"
"border-radius: 25px;	\n"
"	background-color: grey;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	background-color:#FF4C4C;\n"
"	color: white;\n"
"}\n"
"QPushButton#removeButton:hover{\n"
"	background-color:#8C1717;\n"
"}\n"
"QPushButton#reportButton{\n"
"border-radius: 25px;	\n"
"	background-color: grey;\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	background-color:#00C2FF;\n"
"	color: white;\n"
"}\n"
"QPushButton#reportButton:hover{\n"
"	background-color:#2289A9;\n"
"}\n"
"QPushButton#logoutButton{\n"
"	border-radius:25px;\n"
"}\n"
"QPushButton#logoutButton:hover{\n"
"	backgro"
                        "und-color:#FF4C4C;\n"
"}\n"
"QPushButton#searchButton{\n"
"	border-radius: 25px;	\n"
"	font-size: 18px;\n"
"	font-weight: bold;\n"
"	background-color:#a3a3a3;\n"
"}\n"
"QPushButton#searchButton:hover{\n"
"	background-color:#1DB500;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color: #a3a3a3;\n"
"	border-radius: 25px;\n"
"	font-size: 18px;\n"
"	color: black;\n"
"}\n"
"QTableWidget#tableWidget {\n"
"    border: 1px solid #a3a3a3;\n"
"    background: #cecece; \n"
"	border-radius: 30px;\n"
"	color: black\n"
"}\n"
""));
        label = new QLabel(adminDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 511, 51));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        searchLineEdit = new QLineEdit(adminDashboard);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(120, 90, 331, 51));
        searchComboBox = new QComboBox(adminDashboard);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName("searchComboBox");
        searchComboBox->setGeometry(QRect(460, 100, 103, 32));
        searchButton = new QPushButton(adminDashboard);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(570, 90, 51, 51));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(40, 40));
        logoutButton = new QPushButton(adminDashboard);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(770, 20, 51, 51));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        logoutButton->setIcon(icon1);
        logoutButton->setIconSize(QSize(45, 42));
        tableWidget = new QTableWidget(adminDashboard);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 200, 651, 261));
        addButton = new QPushButton(adminDashboard);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(110, 500, 161, 51));
        removeButton = new QPushButton(adminDashboard);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(320, 500, 161, 51));
        reportButton = new QPushButton(adminDashboard);
        reportButton->setObjectName("reportButton");
        reportButton->setGeometry(QRect(530, 500, 161, 51));

        retranslateUi(adminDashboard);

        QMetaObject::connectSlotsByName(adminDashboard);
    } // setupUi

    void retranslateUi(QWidget *adminDashboard)
    {
        adminDashboard->setWindowTitle(QCoreApplication::translate("adminDashboard", "Form", nullptr));
        label->setText(QCoreApplication::translate("adminDashboard", "ENSIA Library Management System", nullptr));
        searchComboBox->setItemText(0, QCoreApplication::translate("adminDashboard", "All", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("adminDashboard", "Title", nullptr));
        searchComboBox->setItemText(2, QCoreApplication::translate("adminDashboard", "Author", nullptr));
        searchComboBox->setItemText(3, QCoreApplication::translate("adminDashboard", "ISBN", nullptr));

        searchButton->setText(QString());
        logoutButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("adminDashboard", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("adminDashboard", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("adminDashboard", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("adminDashboard", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("adminDashboard", "availabity", nullptr));
        addButton->setText(QCoreApplication::translate("adminDashboard", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("adminDashboard", "Remove", nullptr));
        reportButton->setText(QCoreApplication::translate("adminDashboard", "Print Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminDashboard: public Ui_adminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
