#include <QtGui/QGuiApplication>
#include <QQuickItem>
#include "qtquick2applicationviewer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/zsPlayer/main.qml"));
    viewer.showExpanded();

    QObject *player = viewer.rootObject()->findChild<QObject*>("player");
    QString file="http://static.61read.com/videos/2013/11/HuoMaoZiYunYiFu.mp4";
    QMetaObject::invokeMethod(player, "play", Q_ARG(QUrl, QUrl(file)));

    QObject::connect(viewer.rootObject(), SIGNAL(requestFullScreen()), &viewer, SLOT(showFullScreen()));
    QObject::connect(viewer.rootObject(), SIGNAL(requestNormalSize()), &viewer, SLOT(showNormal()));

    return app.exec();
}
