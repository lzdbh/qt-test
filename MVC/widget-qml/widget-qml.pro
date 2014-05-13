#-------------------------------------------------
#
# Project created by QtCreator 2014-05-09T15:50:30
#
#-------------------------------------------------



QT       += core gui qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = widget-qml
TEMPLATE = app

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    main.qml
