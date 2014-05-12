#-------------------------------------------------
#
# Project created by QtCreator 2014-04-03T16:51:55
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DownloadProgress
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp

HEADERS  += \
    mainwindow.h

FORMS += \
    mainwindow.ui

LIBS+=-lquazip
