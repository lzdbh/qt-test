#include "mainwindow.h"
#include <QApplication>
#include "qtquick2applicationviewer/qtquick2applicationviewer.h"
#include <QUrl>
#include <QLabel>
#include <QWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QLabel *label=new QLabel(&w,Qt::Window);
    label->setWindowFlags(Qt::SplashScreen);
    label->setText("111111");
    label->show();

    QtQuick2ApplicationViewer viewer;
    //viewer.setParent(w.windowHandle());
    viewer.setFlags(Qt::Dialog);
    viewer.setModality(Qt::ApplicationModal);

    viewer.setMainQmlFile(QStringLiteral("main.qml"));
    viewer.showExpanded();


    return a.exec();
}
