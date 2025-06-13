QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QT += printsupport

SOURCES += \
    adddialog.cpp \
    admindashboard.cpp \
    adminlogin.cpp \
    app.cpp \
    borrowdialog.cpp \
    library.cpp\
    main.cpp \
    mainwindow.cpp \
    removedialog.cpp \
    reportdialog.cpp \
    returndialog.cpp \
    studentdashboard.cpp \
    studentlogin.cpp

HEADERS += \
    TransactionManager.h \
    adddialog.h \
    admindashboard.h \
    adminlogin.h \
    app.h \
    book.h \
    borrowdialog.h \
    library.h\
    mainwindow.h \
    removedialog.h \
    reportdialog.h \
    returndialog.h \
    studentdashboard.h \
    studentlogin.h \
    transaction.h

FORMS += \
    adddialog.ui \
    admindashboard.ui \
    adminlogin.ui \
    app.ui \
    borrowdialog.ui \
    mainwindow.ui \
    removedialog.ui \
    reportdialog.ui \
    returndialog.ui \
    studentdashboard.ui \
    studentlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    book.qrc \
    ressources.qrc
DISTFILES += books.txt \
    ../../books.txt \
    ../../transactions.txt \
    ../books.txt \
    ../reports.txt \
    ../transactions.txt
