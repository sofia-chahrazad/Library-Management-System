#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "adminlogin.h"
#include"library.h"
#include"adddialog.h"
#include"removedialog.h"
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextStream>
#include <QDesktopServices>
#include <QUrl>


adminDashboard::adminDashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminDashboard)
{

    ui->setupUi(this);
    connect(ui->removeButton, &QPushButton::clicked, this, &adminDashboard::removeSelectedBook);
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

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

    ui->tableWidget->setColumnCount(5);
    QStringList headers = {"Title", "Author", "ISBN","Year", "AVAILABLE"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    lib = new Library("/Users/mac/Desktop/LIBRARY/books.txt");
    loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt");

    connect(ui->reportButton, &QPushButton::clicked, this, &adminDashboard::on_reportButton_clicked);
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
void adminDashboard::removeSelectedBook() {
    int row = ui->tableWidget->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No selection", "Please select a book to remove.");
        return;
    }

    QString isbn = ui->tableWidget->item(row, 2)->text(); // ISBN is column 2
    Book book = lib->getBookByISBN(isbn); // You need to implement this function in Library

    removeDialog *dialog = new removeDialog(lib, book, this);

    connect(dialog, &removeDialog::bookRemoved, this, [=]() {
        loadBooksToTable("/Users/mac/Desktop/LIBRARY/books.txt");
    });

    dialog->exec();
}

void adminDashboard::on_reportButton_clicked() {
    QString reportsFile = "/Users/mac/Desktop/LIBRARY/reports.txt";
    QFile file(reportsFile);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open reports.txt");
        return;
    }

    QTextStream in(&file);
    QString reportContent = in.readAll();
    file.close();

    QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", "", "PDF Files (*.pdf)");
    if (filePath.isEmpty()) return;
    if (!filePath.endsWith(".pdf", Qt::CaseInsensitive)) filePath += ".pdf";

    QPdfWriter pdfWriter(filePath);
    pdfWriter.setPageSize(QPageSize::A4);
    pdfWriter.setResolution(96);

    QPainter painter(&pdfWriter);
    QFont font("Times", 12);
    painter.setFont(font);

    int margin = 80;
    int x = margin;
    int y = margin;
    int pageWidth = pdfWriter.width() - 2 * margin;
    int pageHeight = pdfWriter.height() - 2 * margin;

    QFontMetrics metrics(font);
    int lineSpacing = metrics.lineSpacing();

    QStringList sections = reportContent.split("--------------------", Qt::SkipEmptyParts);
    for (QString section : sections) {
        section = section.trimmed();
        QStringList lines = section.split('\n');

        for (const QString& line : lines) {
            QString currentLine = line.trimmed();
            QRect textRect(x, y, pageWidth, lineSpacing * 10); // arbitrary height to allow wrapping
            QRect bounding = painter.boundingRect(textRect, Qt::TextWordWrap, currentLine);

            if (y + bounding.height() > pdfWriter.height() - margin) {
                pdfWriter.newPage();
                y = margin;
            }

            painter.drawText(QRect(x, y, pageWidth, bounding.height()), Qt::TextWordWrap, currentLine);
            y += bounding.height() + 5;
        }

        // Add space between sections
        y += lineSpacing * 2;
    }

    painter.end();

    QMessageBox::information(this, "PDF Saved", "Report PDF has been created!");
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}

adminDashboard::~adminDashboard()
{
    delete ui;
}
