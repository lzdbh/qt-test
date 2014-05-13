TEMPLATE = app
QT += opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TRANSLATIONS = res/player_zh_CN.ts


INCLUDEPATH+=C:\QtAV\include

CONFIG(debug,debug|release) {
 unix|win32: LIBS += -lQtAVd1
}else{
 unix|win32: LIBS += -lQtAV
}

SOURCES += main.cpp \
    MainWindow.cpp \
    Button.cpp \
    ClickableMenu.cpp \
    StatisticsView.cpp \
    Slider.cpp \
    TVView.cpp \
    EventFilter.cpp \
    config/Config.cpp \
    config/ConfigDialog.cpp \
    config/ConfigPageBase.cpp \
    config/CaptureConfigPage.cpp \
    config/VideoEQConfigPage.cpp \
    config/DecoderConfigPage.cpp \
    playlist/PlayListModel.cpp \
    playlist/PlayListItem.cpp \
    playlist/PlayListDelegate.cpp \
    playlist/PlayList.cpp

HEADERS += \
    MainWindow.h \
    Button.h \
    ClickableMenu.h \
    StatisticsView.h \
    Slider.h \
    TVView.h \
    EventFilter.h \
    config/Config.h \
    config/ConfigDialog.h \
    config/ConfigPageBase.h \
    config/CaptureConfigPage.h \
    config/VideoEQConfigPage.h \
    config/DecoderConfigPage.h \
    playlist/PlayListModel.h \
    playlist/PlayListItem.h \
    playlist/PlayListDelegate.h \
    playlist/PlayList.h

RESOURCES += \
    res/player.qrc \
    theme.qrc
