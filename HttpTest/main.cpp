#include "mainwindow.h"
#include "testmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestMainWindow tw;
    tw.show();

    MainWindow w;
    w.show();

    tw.setMain(&w);

    return a.exec();
}
