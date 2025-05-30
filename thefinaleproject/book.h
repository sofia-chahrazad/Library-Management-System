#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QList>

class Book
{
public:
    QString ISBN;
    QString title;
    QString author;
    QString genre;
    int year;
    int availableCopies; // NEW: number of available copies

    Book() : year(0), availableCopies(0) {}

    Book(QString id, QString title, QString author, QString genre, int year, int copies)
        : ISBN(id), title(title), author(author), genre(genre), year(year), availableCopies(copies) {}

    QString toString() const {
        return ISBN + "|" + title + "|" + author + "|" + genre + "|" +
               QString::number(year) + "|" + QString::number(availableCopies);
    }

    static Book fromString(const QString& line) {
        QStringList parts = line.split("|");
        if (parts.size() != 6) return Book(); // invalid format
        return Book(parts[0], parts[1], parts[2], parts[3], parts[4].toInt(), parts[5].toInt());
    }

    QString isAvailableText() const {
        return availableCopies > 0 ? "Yes" : "No";
    }

    void borrowCopy() {
        if (availableCopies > 0) availableCopies--;
    }

    void returnCopy() {
        availableCopies++;
    }
};

#endif // BOOK_H
