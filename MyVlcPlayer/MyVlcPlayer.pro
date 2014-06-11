#-------------------------------------------------
#
# Project created by QtCreator 2014-05-22T10:42:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyVlcPlayer
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp \
    playercontrols.cpp

HEADERS  += \
    player.h \
    playercontrols.h

FORMS    += mainwindow.ui

INCLUDEPATH+= sdk/include
LIBS+= -LE:\qt-test\MyVlcPlayer\sdk\lib -llibvlc -llibvlccore
