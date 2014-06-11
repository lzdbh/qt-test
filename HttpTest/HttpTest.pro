#-------------------------------------------------
#
# Project created by QtCreator 2014-05-29T15:47:49
#
#-------------------------------------------------

QT       += core gui webkitwidgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HttpTest
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    testmainwindow.cpp

HEADERS  += mainwindow.h \
    testmainwindow.h

FORMS    += mainwindow.ui \
    testmainwindow.ui
