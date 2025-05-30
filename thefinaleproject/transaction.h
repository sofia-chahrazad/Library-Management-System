#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QString>
#include <QDate>

enum class TransactionType {
    Borrow,
    Return
};

class Transaction {
public:
    QString studentId;
    QString bookId;
    QDate dateBorrowed;
    QDate dateReturned;
    TransactionType type;

    Transaction(QString sid, QString bid, QDate borrowed, QDate returned, TransactionType t)
        : studentId(sid), bookId(bid), dateBorrowed(borrowed), dateReturned(returned), type(t) {}

    QString toString() const {
        QString typeStr = (type == TransactionType::Borrow) ? "Borrow" : "Return";
        return studentId + "|" + bookId + "|" +
               dateBorrowed.toString("yyyy-MM-dd") + "|" +
               dateReturned.toString("yyyy-MM-dd") + "|" +
               typeStr;
    }

    static Transaction fromString(const QString& line) {
        QStringList parts = line.split("|");
        TransactionType t = (parts[4] == "Borrow") ? TransactionType::Borrow : TransactionType::Return;
        return Transaction(parts[0], parts[1],
                           QDate::fromString(parts[2], "yyyy-MM-dd"),
                           QDate::fromString(parts[3], "yyyy-MM-dd"),
                           t);
    }

    QString getStudentID() const { return studentId; }
    QString getISBN() const { return bookId; }
    QDate getBorrowDate() const { return dateBorrowed; }
    QDate getReturnDate() const { return dateReturned; }
    TransactionType getType() const { return type; }
};

#endif // TRANSACTION_H
