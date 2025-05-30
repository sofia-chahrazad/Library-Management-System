#include "studentdashboard.h"
#include "returndialog.h"
#include "ui_studentdashboard.h"
#include"studentlogin.h"
#include"library.h"
#include"QDir"
#include<QString>
#include"borrowdialog.h"
#include"returndialog.h"
#include"reportdialog.h"
#include<QMessageBox>


Library* library = new Library("/Users/mac/Desktop/LIBRARY/books.txt");



StudentDashboard::StudentDashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudentDashboard)
{
    ui->setupUi(this);

    connect(ui->searchButton, &QPushButton::clicked, this, [=]() {
        QString text = ui->searchLineEdit->text();
        QString criteria = ui->searchComboBox->currentText();
        filterBooks(text, criteria);
    });


    ui->bookTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);




    ui->bookTableWidget->setColumnCount(5);
    QStringList headers = {"Title", "Author", "ISBN","Year", "AVAILABLE"};
    ui->bookTableWidget->setHorizontalHeaderLabels(headers);
    loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt");


    ui->bookTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->bookTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


    connect(ui->logoutButton, &QPushButton::clicked, this, [=]() {
        this->close();
        StudentLogin *a = new StudentLogin;
        a->show();
    });

}



void StudentDashboard::handleLogout() {
    this->close();
    StudentLogin *login = new StudentLogin;
    login->show();
}





void StudentDashboard::loadBooksToTable(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file:" << filename;
        return;
    }

    QTextStream in(&file);
    ui->bookTableWidget->setRowCount(0); // clear existing rows
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        Book book = Book::fromString(line);
        if (book.ISBN.isEmpty()) continue; // skip invalid lines

        ui->bookTableWidget->insertRow(row);

        ui->bookTableWidget->setItem(row, 0, new QTableWidgetItem(book.title));
        ui->bookTableWidget->setItem(row, 1, new QTableWidgetItem(book.author));
        ui->bookTableWidget->setItem(row, 2, new QTableWidgetItem(book.ISBN));
        ui->bookTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(book.year)));



        QTableWidgetItem* availabilityItem = new QTableWidgetItem(book.availableCopies > 0 ? "Yes" : "No");
        availabilityItem->setForeground(QBrush(book.availableCopies > 0 ? Qt::green : Qt::red));
        ui->bookTableWidget->setItem(row, 4, availabilityItem);
        ++row;
    }

    file.close();
}



void StudentDashboard::filterBooks(const QString &text, const QString &criteria) {
    int colToSearch = -1;

    if (criteria == "Title") colToSearch = 0;
    else if (criteria == "Author") colToSearch = 1;
    else if (criteria == "ISBN") colToSearch = 2;
    else if (criteria == "Year") colToSearch = 3;
    else if (criteria == "Available") colToSearch = 4;

    for (int row = 0; row < ui->bookTableWidget->rowCount(); ++row) {
        bool match = false;

        if (colToSearch == -1) {
            // Search all columns
            for (int col = 0; col < ui->bookTableWidget->columnCount(); ++col) {
                QTableWidgetItem* item = ui->bookTableWidget->item(row, col);
                if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                    match = true;
                    break;
                }
            }
        } else {
            QTableWidgetItem* item = ui->bookTableWidget->item(row, colToSearch);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
            }
        }

        ui->bookTableWidget->setRowHidden(row, !match);
    }
}

void StudentDashboard::on_borrowButton_clicked(){
    borrowDialog *dialog = new borrowDialog(this);
    int row;

    if(ui->bookTableWidget->currentRow() == -1){
        row = 0;
    }else{
        row = ui->bookTableWidget->currentRow();
    }


    QString title = ui->bookTableWidget->item(row, 0)->text();
    QString author = ui->bookTableWidget->item(row, 1)->text();
    QString isbn = ui->bookTableWidget->item(row,2) ->text();
    QString year = ui->bookTableWidget->item(row,3) ->text();
    dialog->setBookInfo(title, author, year, isbn);

    if (ui->bookTableWidget->item(row, 4)->text() == "Yes") {
        if (dialog->exec() == QDialog::Accepted) {
            loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt"); // reload UI
        }
    } else {
        QMessageBox::warning(this, "Failed", "Book unavailable. Try available books only.");
    }


}

void StudentDashboard::on_reportButton_clicked(){
    reportDialog *dialog = new reportDialog(this);

    dialog->exec();


}


void StudentDashboard::on_returnButton_clicked(){
    returnDialog *dialog = new returnDialog(this);
    int row;

    if(ui->bookTableWidget->currentRow() == -1){
        row = 0;
    }else{
        row = ui->bookTableWidget->currentRow();
    }


    QString title = ui->bookTableWidget->item(row, 0)->text();
    QString author = ui->bookTableWidget->item(row, 1)->text();
    QString isbn = ui->bookTableWidget->item(row,2) ->text();
    QString year = ui->bookTableWidget->item(row,3) ->text();
    dialog->setBookInfo(title, author, year, isbn);
    if (dialog->exec() == QDialog::Accepted) {
        loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt"); // reload UI
    }




};


StudentDashboard::~StudentDashboard()
{
    delete library;
    delete ui;
}
