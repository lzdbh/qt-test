#include "mainwindow.h"
#include <QApplication>
#include <QLayout>
#include <QPushButton>

#include <QtAV/AVPlayer.h>
#include <QtAV/WidgetRenderer.h>
#include <QtAV/OSDFilter.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QtAV::WidgetRenderer renderer;
    renderer.osdFilter()->setShowType(QtAV::OSD::ShowNone); //default show current time and total time

    renderer.setWindowTitle("minimal player--QtAV " + QtAV_Version_String_Long() + " wbsecg1@gmail.com");
    QtAV::AVPlayer player;
    player.setRenderer(&renderer);


    renderer.hide();
    Qt::WindowFlags flags = renderer.windowFlags();
    flags |= Qt::WindowStaysOnTopHint;
    renderer.setWindowFlags(flags);
    renderer.show();






    //if (argc > 1)
        player.play("http://static.61read.com/videos/2013/11/HuoMaoZiYunYiFu.mp4");

    return a.exec();
}
