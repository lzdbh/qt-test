#ifndef PLAYER_H
#define PLAYER_H

#include <vlc/vlc.h>
#include <QWidget>
#include "playercontrols.h"

class QVBoxLayout;
class QPushButton;
class QTimer;
class QFrame;
class QSlider;

#define POSITION_RESOLUTION 10000

class Player : public QWidget
{
    Q_OBJECT


    QSlider *_positionSlider;
    PlayerControls *controls;

    QFrame *_videoWidget;

    QTimer *poller;
    bool _isPlaying;
    libvlc_instance_t *_vlcinstance;
    libvlc_media_player_t *_mp;
    libvlc_media_t *_m;

public:
    Player();
    ~Player();

public slots:
    void playFile(QString file);
    void updateInterface();
    void changeVolume(int newVolume);
    void changePosition(int newPosition);
    void play();
    void pause();
    void stop();
    void setMuted(bool muted);
    void onDoubleClicked();

protected:
    bool eventFilter(QObject *target, QEvent *event);

signals:
    void doubleClicked();

private:
    bool isFullScreen;

};

#endif // PLAYER_H
