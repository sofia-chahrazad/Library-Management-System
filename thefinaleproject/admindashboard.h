#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H
#include"library.h"
#include <QWidget>

namespace Ui {
class adminDashboard;
}

class adminDashboard : public QWidget
{
    Q_OBJECT

public:
    void removeSelectedBook();

    void loadBooksToTable(const QString &filename);

    void filterBooks(const QString &text, const QString &criteria) ;


    explicit adminDashboard(QWidget *parent = nullptr);

    ~adminDashboard();

private slots:
    void on_addButton_clicked();
    void on_reportButton_clicked();

private:
      Library* lib;
    Ui::adminDashboard *ui;
};

#endif // ADMINDASHBOARD_H
