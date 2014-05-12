#include <QDebug>
#include <QApplication>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QFile>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QWidget *widget = new QWidget;
    widget->resize(400, 300);

    QVBoxLayout *layout = new QVBoxLayout;
    QMediaPlayer* player = new QMediaPlayer;
    QVideoWidget* vw = new QVideoWidget;

    layout->addWidget(vw);
    widget->setLayout(layout);

    player->setVideoOutput(vw);
    QFile file("http://vjs.zencdn.net/v/oceans.mp4");
    if(!file.open(QIODevice::ReadOnly))
        qDebug() << "Could not open file\n";
    player->setMedia(QUrl("http://proleague.ae/media/movie/Etisalat%20cup%20final%20video%20flv.flv"));
    player->play();
    widget->show();
    qDebug() << player->availableMetaData() << player->currentMedia().canonicalUrl();
    return app.exec();
}
