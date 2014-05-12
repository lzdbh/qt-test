#-------------------------------------------------
#
# Project created by QtCreator 2014-05-07T16:31:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zsPlayer
TEMPLATE = app

include(../QtAV/src/libQtAV.pri)

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

CONFIG(debug,debug|release) {
 unix|win32: LIBS += -L$$OUT_PWD/../QtAV/src/ -lQtAVd
}else{
 unix|win32: LIBS += -L$$OUT_PWD/../QtAV/src/ -lQtAV
}

#unix|win32: LIBS += -L$$OUT_PWD/../QtAV/src/ -lQtAVd

INCLUDEPATH += $$PWD/../QtAV/src
DEPENDPATH += $$PWD/../QtAV/src
