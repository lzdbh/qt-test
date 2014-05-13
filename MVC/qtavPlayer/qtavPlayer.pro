#-------------------------------------------------
#
# Project created by QtCreator 2014-05-08T10:09:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtavPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH+=C:\QtAV\include

CONFIG(debug,debug|release) {
 unix|win32: LIBS += -lQtAVd1
}else{
 unix|win32: LIBS += -lQtAV
}
