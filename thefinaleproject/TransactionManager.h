#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H


#include <QFile>
#include <QTextStream>
#include <QVector>
#include "transaction.h"

class TransactionManager {
private:

public:
    QVector<Transaction> transactions;
    QString filePath;

    TransactionManager(const QString& path) : filePath(path) {
        loadTransactions();
    }

    void loadTransactions() {
        transactions.clear();
        QFile file(filePath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                QString line = in.readLine().trimmed();
                if (!line.isEmpty

                     ()) {
                    transactions.append(Transaction::fromString(line));
                }
            }
            file.close();
        }
    }

    void saveTransactions() {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            for (const Transaction& t : transactions) {
                out << t.toString() << "\n";
            }
            file.close();
        }
    }

    void addTransaction(const Transaction& t) {
        transactions.append(t);
        saveTransactions();
    }

    QVector<Transaction> getAllTransactions() const {
        return transactions;
    }

    bool returnBookByISBN(Transaction tr) {


        for (int i = transactions.size() - 1; i >= 0; --i) {
            const Transaction& t = transactions[i];
            if (t.getStudentID() == tr.getStudentID() && t.getISBN() == tr.getISBN()) {
                if (t.getType() == TransactionType::Borrow) {
                    // Book was borrowed and not yet returned
                    addTransaction(tr);
                    return true;
                } else if (t.getType() == TransactionType::Return) {
                    // Already returned
                    return false;
                }
            }
        }

        // No borrow record found
        return false;
    }
};

#endif // TRANSACTIONMANAGER_H
