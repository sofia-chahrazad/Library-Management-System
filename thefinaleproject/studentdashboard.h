#ifndef STUDENTDASHBOARD_H
#define STUDENTDASHBOARD_H

#include "TransactionManager.h"
#include <QWidget>

namespace Ui {
class StudentDashboard;
}

class StudentDashboard : public QWidget
{
    Q_OBJECT

public:
    void handleLogout() ;
    void loadBooksToTable(const QString &filename);

    explicit StudentDashboard(QWidget *parent = nullptr);
    ~StudentDashboard();


private slots:
    void filterBooks(const QString &text,const QString &criteria);
    void on_borrowButton_clicked();
    void on_returnButton_clicked();
    void on_reportButton_clicked();

private:
    Ui::StudentDashboard *ui;
    TransactionManager *tm;
};

#endif // STUDENTDASHBOARD_H
