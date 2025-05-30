#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "adminlogin.h"
#include"library.h"
#include"adddialog.h"

adminDashboard::adminDashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminDashboard)
{
    ui->setupUi(this);
    connect(ui->logoutButton, &QPushButton::clicked, this, [=]() {
        this->close();
        AdminLogin *a = new AdminLogin;
        a->show();
    });



    connect(ui->searchButton, &QPushButton::clicked, this, [=]() {
        QString text = ui->searchLineEdit->text();
        QString criteria = ui->searchComboBox->currentText();
        filterBooks(text, criteria);
    });

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);;

    ui->tableWidget->setColumnCount(5);
    QStringList headers = {"Title", "Author", "ISBN","Year", "AVAILABLE"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    lib = new Library("/Users/mac/Desktop/LIBRARY/books.txt");
    loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt");


}


void adminDashboard::loadBooksToTable(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open file:" << filename;
        return;
    }

    QTextStream in(&file);
    ui->tableWidget->setRowCount(0); // clear existing rows
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        Book book = Book::fromString(line);
        if (book.ISBN.isEmpty()) continue; // skip invalid lines

        ui->tableWidget->insertRow(row);

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(book.title));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(book.author));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(book.ISBN));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(book.year)));



        QTableWidgetItem* availabilityItem = new QTableWidgetItem(QString::number(book.availableCopies));
        availabilityItem->setForeground(QBrush(book.availableCopies > 0 ? Qt::green : Qt::red));
        ui->tableWidget->setItem(row, 4, availabilityItem);
        row++;
    }

    file.close();
}


void adminDashboard::filterBooks(const QString &text, const QString &criteria) {
    int colToSearch = -1;

    if (criteria == "Title") colToSearch = 0;
    else if (criteria == "Author") colToSearch = 1;
    else if (criteria == "ISBN") colToSearch = 2;
    else if (criteria == "Year") colToSearch = 3;
    else if (criteria == "Available") colToSearch = 4;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        bool match = false;

        if (colToSearch == -1) {
            // Search all columns
            for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
                QTableWidgetItem* item = ui->tableWidget->item(row, col);
                if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                    match = true;
                    break;
                }
            }
        } else {
            QTableWidgetItem* item = ui->tableWidget->item(row, colToSearch);
            if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                match = true;
            }
        }

        ui->tableWidget->setRowHidden(row, !match);
    }
}
void adminDashboard::on_addButton_clicked(){
    addDialog *a = new addDialog(this,lib);


    connect(a, &addDialog::bookAdded, this, [=]() {
        loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt");
    });


    a->exec();

}


adminDashboard::~adminDashboard()
{
    delete ui;
}
