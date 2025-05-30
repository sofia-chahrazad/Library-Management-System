/********************************************************************************
** Form generated from reading UI file 'studentdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDASHBOARD_H
#define UI_STUDENTDASHBOARD_H

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

class Ui_StudentDashboard
{
public:
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QTableWidget *bookTableWidget;
    QPushButton *borrowButton;
    QPushButton *returnButton;
    QPushButton *reportButton;
    QPushButton *logoutButton;
    QComboBox *searchComboBox;
    QLabel *label;

    void setupUi(QWidget *StudentDashboard)
    {
        if (StudentDashboard->objectName().isEmpty())
            StudentDashboard->setObjectName("StudentDashboard");
        StudentDashboard->resize(929, 562);
        StudentDashboard->setStyleSheet(QString::fromUtf8("QWidget#StudentDashboard{\n"
" background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #320453, stop:1 #802CBD);\n"
"}\n"
"\n"
"\n"
"QLineEdit#searchLineEdit {\n"
"    border-radius: 25px;\n"
"    background-color: #cecece;\n"
"    color: #3d3d3d;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: #cecece;\n"
"    border-radius: 15px;\n"
"	color: black;\n"
"\n"
"}\n"
"\n"
"QPushButton#borrowButton {\n"
"    background-color: #3DBBFF;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton#borrowButton:hover{\n"
"background-color: #2289A9;\n"
"}\n"
"QPushButton#returnButton {\n"
"    background-color: #32CD32;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton#returnButton:hover{\n"
" background-color: #308420;\n"
"}\n"
"QPushButton#reportButton {\n"
"    background-color: #FF6347;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton#reportButton:hover{\n"
""
                        "	background-color:#8C1717;\n"
"}\n"
"QPushButton#logoutButton {\n"
"    border: none;\n"
"    background: transparent;\n"
"	border-radius: 25px;\n"
"	padding-left:2px;\n"
"	padding-top:2px;\n"
"}\n"
"QPushButton#logoutButton:hover{\n"
"	background-color:#FF6347;\n"
"}"));
        searchLineEdit = new QLineEdit(StudentDashboard);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(210, 90, 351, 51));
        searchButton = new QPushButton(StudentDashboard);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(690, 90, 51, 51));
        searchButton->setStyleSheet(QString::fromUtf8(" QPushButton#searchButton {\n"
"     \n"
"       border: 4px solid #cecece;\n"
"       \n"
"       padding-left: 4px;\n"
"       min-width: 36px;\n"
"       min-height: 36px;\n"
"	  color: black;\n"
"	  border-radius: 25px;\n"
"	  background-color: #3d3d3d\n"
"    }\n"
"QPushButton#searchButton:hover{\n"
"	  background-color:#1DB500;\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(36, 36));
        bookTableWidget = new QTableWidget(StudentDashboard);
        if (bookTableWidget->columnCount() < 5)
            bookTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bookTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bookTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bookTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bookTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        bookTableWidget->setObjectName("bookTableWidget");
        bookTableWidget->setGeometry(QRect(170, 200, 631, 251));
        borrowButton = new QPushButton(StudentDashboard);
        borrowButton->setObjectName("borrowButton");
        borrowButton->setGeometry(QRect(190, 480, 161, 41));
        returnButton = new QPushButton(StudentDashboard);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(400, 481, 161, 41));
        reportButton = new QPushButton(StudentDashboard);
        reportButton->setObjectName("reportButton");
        reportButton->setGeometry(QRect(610, 480, 161, 41));
        reportButton->setStyleSheet(QString::fromUtf8(""));
        logoutButton = new QPushButton(StudentDashboard);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(860, 10, 51, 51));
        logoutButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        logoutButton->setIcon(icon1);
        logoutButton->setIconSize(QSize(45, 45));
        searchComboBox = new QComboBox(StudentDashboard);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName("searchComboBox");
        searchComboBox->setGeometry(QRect(570, 90, 103, 51));
        label = new QLabel(StudentDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 571, 51));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(StudentDashboard);

        QMetaObject::connectSlotsByName(StudentDashboard);
    } // setupUi

    void retranslateUi(QWidget *StudentDashboard)
    {
        StudentDashboard->setWindowTitle(QCoreApplication::translate("StudentDashboard", "Form", nullptr));
        searchButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = bookTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StudentDashboard", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StudentDashboard", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("StudentDashboard", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bookTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("StudentDashboard", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bookTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("StudentDashboard", "Available", nullptr));
        borrowButton->setText(QCoreApplication::translate("StudentDashboard", "Borrow", nullptr));
        returnButton->setText(QCoreApplication::translate("StudentDashboard", "Return", nullptr));
        reportButton->setText(QCoreApplication::translate("StudentDashboard", "Report", nullptr));
        logoutButton->setText(QString());
        searchComboBox->setItemText(0, QCoreApplication::translate("StudentDashboard", "All", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("StudentDashboard", "Title", nullptr));
        searchComboBox->setItemText(2, QCoreApplication::translate("StudentDashboard", "ISBN", nullptr));
        searchComboBox->setItemText(3, QCoreApplication::translate("StudentDashboard", "Author", nullptr));
        searchComboBox->setItemText(4, QCoreApplication::translate("StudentDashboard", "Year", nullptr));
        searchComboBox->setItemText(5, QCoreApplication::translate("StudentDashboard", "Available", nullptr));

        label->setText(QCoreApplication::translate("StudentDashboard", "ENSIA Library Management System ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDashboard: public Ui_StudentDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDASHBOARD_H
