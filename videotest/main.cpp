#include "mainwindow.h"
#include <QApplication>
#include <QtWebKitWidgets/QWebView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWebView *view = new QWebView();
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    view->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
    view->load(QUrl("http://www.videojs.com"));
    view->setGeometry(50,50, 800, 600);
    view->show();


    return a.exec();
}
