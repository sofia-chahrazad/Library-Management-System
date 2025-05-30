# 📚 Library Management System

A simple and efficient Library Management System built with C++ and Qt Framework. This project allows librarians and students to manage book inventories, borrow and return books, and view reports in a user-friendly graphical interface.
 Features
###-------- FOR THE STUDENT -----------######
- 📖 Borrow , return, search ,and report any problem and search by (Author - isbn - year - Tile -availablity or all)
- 📖 borrow: based on the availability of the book and give positive message if the transaction is done
- 📖 return : based on wether or not you have borrowed the book (it searches if the book has been boorrowed from that specefic before)
- 🔦 search : searches for any name that match what you have entered 
- 👤 Manage student accounts and track their borrowing history.
- 🔄 Borrow and return books with real-time status updates.
- 📂 Store and retrieve data from plain text files for easy access and backup.
- 📊 Generate reports on currently borrowed books, overdue items, and library statistics.
- 🧑‍💻 Simple, intuitive GUI using Qt Widgets.


###-------- FOR THE ADMIN (the labririan) -----------######
-  Add , Remove, search  searches by (Author - isbn - year - Tile -availablity or all) and print report 
- ✚ adds new book to the library by providing the necessary information ;
- remove book from the libray throught a intuitive user interface 
- 📂 Store and retrieve data from plain text files for easy access and backup.
- 📊 Generate reports on currently borrowed books, overdue items, and library statistics.
- 🧑‍💻 Simple, intuitive GUI using Qt Widgets.


## 🛠️ Technologies Used

- **C++** — Core logic and object-oriented implementation.
- **Qt** — GUI development using Qt Widgets.
- **Text Files** — Lightweight data persistence (books, users, transactions).

## 📁 Project Structure
📁 Project: thefinaleproject
📄 Project File
	•	thefinaleproject.pro
📂 En-têtes (Header Files)
	•	adddialog.h
	•	admindashboard.h
	•	adminlogin.h
	•	book.h
	•	borrowdialog.h
	•	library.h
	•	mainwindow.h
	•	reportdialog.h
	•	returndialog.h
	•	studentdashboard.h
	•	studentlogin.h
	•	transaction.h
	•	TransactionManager.h
📂 Sources (Source Files)
	•	adddialog.cpp
	•	admindashboard.cpp
	•	adminlogin.cpp
	•	borrowdialog.cpp
	•	library.cpp
	•	main.cpp
	•	mainwindow.cpp
	•	reportdialog.cpp
	•	returndialog.cpp
	•	studentdashboard.cpp
	•	studentlogin.cpp
📂 Formulaires (UI Files)
	•	adddialog.ui
	•	admindashboard.ui
	•	adminlogin.ui
	•	borrowdialog.ui
	•	mainwindow.ui
	•	reportdialog.ui
	•	returndialog.ui
	•	studentdashboard.ui
	•	studentlogin.ui
📂 Ressources (Qt Resource Files)
	•	book.qrc
	•	ressources.qrc
📂 Autres fichiers (Other Files)
	•	books.txt
	•	transactions.txt

 
## 🧪 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/sofia-chahrazad/library-management-system.git
   cd library-management-system
qmake library.pro
make
./library-management-system
 
