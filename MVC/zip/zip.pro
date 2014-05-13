#-------------------------------------------------
#
# Project created by QtCreator 2014-04-03T22:33:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zip
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp

HEADERS  += \
    mainwindow.h

FORMS += \
    mainwindow.ui

LIBS+=-lquazip
#INCLUDEPATH+=e:\qt-test\MVC\zip\quazip\include\

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/C:/Qt/Qt.msvc32.5.2.1/5.2.1/msvc2012/lib/ -lquazip
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/C:/Qt/Qt.msvc32.5.2.1/5.2.1/msvc2012/lib/ -lquazip
#else:unix: LIBS += -L$$PWD/C:/Qt/Qt.msvc32.5.2.1/5.2.1/msvc2012/lib/ -lquazip

#INCLUDEPATH += $$PWD/C:/Qt/Qt.msvc32.5.2.1/5.2.1/msvc2012/include
#DEPENDPATH += $$PWD/C:/Qt/Qt.msvc32.5.2.1/5.2.1/msvc2012/include
