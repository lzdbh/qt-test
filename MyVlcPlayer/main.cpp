#include "player.h"
#include <QUrl>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Player p;
    p.resize(640,480);
    p.playFile("http://static.61read.com/videos/2013/11/HuoMaoZiYunYiFu.mp4"); // Replace with what you want to play
    p.show();

    return a.exec();
}
