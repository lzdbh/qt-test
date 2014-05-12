#-------------------------------------------------
#
# Project created by QtCreator 2014-03-13T09:59:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

LIBS += -L'C:\Qt\vlc\sdk\lib'
LIBS += -llibvlc

INCLUDEPATH += C:\Qt\vlc\sdk\include


SOURCES += main.cpp \
    player.cpp

HEADERS  += \
    player.h
