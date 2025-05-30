#ifndef LIBRARY_H
#define LIBRARY_H

#include <QFile>
#include <QTextStream>
#include<QDebug>
#include <QVector>
#include"book.h"
#include <QDir>

class Library
{private:
    QVector<Book> books;
    QString filePath;

public:
    Library(const QString& path) : filePath(path) {
        loadBooks();

    }

    ~Library() {
        saveBooks(); // Save on destruction
    }


    void loadBooks() {
        books.clear();
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                QString line = in.readLine().trimmed();
                if (!line.isEmpty()) {
                    books.append(Book::fromString(line));
                }
            }
            file.close();
        }
    }

    void saveBooks() {
        QFile file(filePath);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug() << "Error: Could not open file for writing:" << filePath;
            return;
        }

        QTextStream out(&file);
        for (const Book &book : books) {
            out << book.toString() << "\n";
        }

        file.close();
        qDebug() << "Books successfully saved to:" << filePath;
    }

    void addBook(const Book& book) {
        books.append(book);
        saveBooks();
    }

    QVector<Book> getAllBooks() const {
        return books;
    }

    Book* findBookByISBN(const QString& id) {
        for (Book& b : books) {
            if (b.ISBN == id) return &b;
        }
        return nullptr;
    }

    bool updateCopiesByISBN(const QString& isbn, int delta) {
        for (Book& book : books) {
            if (book.ISBN == isbn) {
                int newCount = book.availableCopies + delta;
                if (newCount < 0) return false; // prevent negative copies
                book.availableCopies = newCount;
                saveBooks();
                return true;
            }
        }
        return false; // not found
    }

    bool returnBookByISBN(const QString& isbn) {
        for (Book& book : books) {
            if (book.ISBN == isbn) {
                book.availableCopies++;
                saveBooks();
                return true; // Successfully updated
            }
        }
        return false; // Book not found
    }
};

#endif // LIBRARY_H
