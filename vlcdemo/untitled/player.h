#ifndef PLAYER_H
#define PLAYER_H

#include <vlc/vlc.h>

#include <QWidget>

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
    QSlider *_volumeSlider;
    // [20101215 JG]
    // Tested on Linux OpenSuse and VLC 1.2.0. This version of VLC is not completely compatible with previous versions of VLC.
    // [20101201 Ondra Spilka]
    // on Linux/Ubuntu Lucid and VLC >= 1.0 (at least 1.1.5 was tested) XWindow handle have to be passed
    // therefore QX11EmbedContainer have to be used instead of QFrame

    QFrame *_videoWidget;
    // [20101215 JG] If KDE is used like unique desktop environment, only use QFrame *_videoWidget;
    QTimer *poller;
    bool _isPlaying;
    //libvlc_exception_t _vlcexcep; // [20101215 JG] Used for versions prior to VLC 1.2.0.
    libvlc_instance_t *_vlcinstance;
    libvlc_media_player_t *_mp;
    libvlc_media_t *_m;

public:
    Player();
    ~Player();
    //void raise(libvlc_exception_t * ex); // [20101215 JG] Used for versions prior to VLC 1.2.0.

public slots:
    void playFile(QString file);
    void updateInterface();
    void changeVolume(int newVolume);
    void changePosition(int newPosition);

};
#endif // PLAYER_H
