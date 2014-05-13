#-------------------------------------------------
#
# Project created by QtCreator 2014-04-03T10:24:31
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HtmlImg
TEMPLATE = app


SOURCES += main.cpp \
    httpget.cpp \
    mainwindow.cpp

HEADERS  += \
    httpget.h \
    mainwindow.h

RESOURCES += \
    mainwindow.qrc

FORMS += \
    mainwindow.ui
