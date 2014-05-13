# Add more folders to ship with the application, here
folder_01.source = qml/zsPlayer
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =plugins




# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()


INCLUDEPATH+=C:\QtAV\include

#CONFIG(debug,debug|release) {
# unix|win32: LIBS += -lQtAVd1
#}else{
# unix|win32: LIBS += -lQtAV
#}

OTHER_FILES += \
    qml/zsPlayer/utils.js \
    qml/zsPlayer/Button.qml \
    qml/zsPlayer/ControlPanel.qml \
    qml/zsPlayer/ProgressBar.qml \
    qml/zsPlayer/Slider.qml

RESOURCES += \
    res.qrc
