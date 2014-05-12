#include "mainwindow.h"
#include <QApplication>

#include <QtAV/AVPlayer.h>
#include <QtAV/WidgetRenderer.h>
#include <QtAV/OSDFilter.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QtAV::WidgetRenderer renderer;
    renderer.osdFilter()->setShowType(QtAV::OSD::ShowNone); //default show current time and total time
    renderer.show();
    renderer.setWindowTitle("minimal player--QtAV " + QtAV_Version_String_Long() + " wbsecg1@gmail.com");
    QtAV::AVPlayer player;
    player.setRenderer(&renderer);

    if (argc > 1)
        player.play(a.arguments().last());

    return a.exec();
}
