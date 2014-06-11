#include "player.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QTimer>
#include <QFrame>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>

Player::Player()
: QWidget()
{
    //create a new libvlc instance
    _vlcinstance=libvlc_new(0, NULL);  //tricky calculation of the char space used

    // Create a media player playing environement
    _mp = libvlc_media_player_new (_vlcinstance);
    
    _videoWidget=new QFrame(this);
    _videoWidget->setStyleSheet("background-color: rgb(0, 0, 0);");


    // Note: if you use streaming, there is no ability to use the position slider
    _positionSlider=new QSlider(Qt::Horizontal,this);
    _positionSlider->setMaximum(POSITION_RESOLUTION);

    controls = new PlayerControls(this);
    controls->setVolume(libvlc_audio_get_volume(_mp));
    controls->setMuted(controls->isMuted());
    controls->setState(libvlc_Stopped);
    controls->setMaximumHeight(20);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(_videoWidget);
    layout->addWidget(_positionSlider);
    layout->addWidget(controls);
    layout->setMargin(0);
    setLayout(layout);
    setStyleSheet("border:1px;");

    _isPlaying=false;
    poller=new QTimer(this);


    libvlc_media_player_set_hwnd(_mp, (void *)_videoWidget->winId()); // for vlc 1.0

    connect(controls, SIGNAL(play()), this, SLOT(play()));
    connect(controls, SIGNAL(pause()), this, SLOT(pause()));
    connect(controls, SIGNAL(stop()), this, SLOT(stop()));
    //connect(controls, SIGNAL(next()), playlist, SLOT(next()));
    //connect(controls, SIGNAL(previous()), this, SLOT(previousClicked()));
    connect(controls, SIGNAL(changeVolume(int)), this, SLOT(changeVolume(int)));
    connect(controls, SIGNAL(changeMuting(bool)), this, SLOT(setMuted(bool)));



    //connect the two sliders to the corresponding slots (uses Qt's signal / slots technology)
    connect(poller, SIGNAL(timeout()), this, SLOT(updateInterface()));
    connect(_positionSlider, SIGNAL(sliderMoved(int)), this, SLOT(changePosition(int)));


    connect(this,SIGNAL(doubleClicked()),SLOT(onDoubleClicked()));

    _videoWidget->installEventFilter(this);

    libvlc_video_set_mouse_input(_mp,1);



    isFullScreen=false;

    poller->start(100); //start timer to trigger every 100 ms the updateInterface slot

}

//desctructor
Player::~Player()
{
    /* Stop playing */
    libvlc_media_player_stop (_mp);


    /* Free the media_player */
    libvlc_media_player_release (_mp);

    libvlc_release (_vlcinstance);

}

void Player::playFile(QString file)
{
    /* Create a new LibVLC media descriptor */
    QByteArray ba = file.toLatin1();
    const char *url = ba.data();

    _m = libvlc_media_new_location(_vlcinstance, url);

    libvlc_media_player_set_media (_mp, _m);


    /* Play */
    libvlc_media_player_play (_mp);
    controls->setState(libvlc_Playing);

    _isPlaying=true;
}

void Player::changeVolume(int newVolume)
{

    libvlc_audio_set_volume (_mp,newVolume);

}

void Player::changePosition(int newPosition)
{

    libvlc_media_t *curMedia = libvlc_media_player_get_media (_mp);

    if (curMedia == NULL)
        return;

    float pos=(float)(newPosition)/(float)POSITION_RESOLUTION;
    libvlc_media_player_set_position (_mp, pos);

}

void Player::updateInterface()
{
    if(!_isPlaying)
        return;

    // It's possible that the vlc doesn't play anything
    // so check before
    libvlc_media_t *curMedia = libvlc_media_player_get_media (_mp);

    if (curMedia == NULL)
        return;

    float pos=libvlc_media_player_get_position (_mp);

    int siderPos=(int)(pos*(float)(POSITION_RESOLUTION));
    _positionSlider->setValue(siderPos);

    int volume=libvlc_audio_get_volume (_mp);
    controls->setVolume(volume);
}

void Player::play()
{
     libvlc_media_t *media=libvlc_media_player_get_media(_mp);
     if(media){
         libvlc_media_player_play(_mp);
         controls->setState(libvlc_Playing);
     }
}

void Player::pause()
{
    if (libvlc_media_player_can_pause(_mp)){
        libvlc_media_player_set_pause(_mp, true);
        controls->setState(libvlc_Paused);
    }
}
void Player::stop()
{
    libvlc_media_player_stop(_mp);
    controls->setState(libvlc_Stopped);
}
void Player::setMuted(bool muted)
{
    libvlc_audio_set_mute(_mp,muted);
    controls->setMuted(muted);
}

void Player::onDoubleClicked()
{
    if(isFullScreen)
    {
        qDebug()<<" 222222222222222222222222222222";
        _videoWidget->setParent(this);
        isFullScreen=false;
    }else
    {
        isFullScreen=true;
        //_videoWidget->setParent(NULL);
        _videoWidget->setWindowFlags(_videoWidget->windowFlags() | Qt::Window | Qt::WindowStaysOnTopHint);
        _videoWidget->setWindowState(_videoWidget->windowState() | Qt::WindowFullScreen);
        _videoWidget->show();
    }
}

bool Player::eventFilter(QObject *target, QEvent *event)
{
    if(target==_videoWidget)
    {

        if(event->type()==QEvent::MouseButtonDblClick)
        {
            qDebug()<<"event->type()";
            QMouseEvent *mouseEvent=static_cast<QMouseEvent *>(event);
            if(mouseEvent->button()==Qt::LeftButton)
            {
                emit doubleClicked();
                //return QWidget::eventFilter(target,event); //why?
            }
        }
    }
    return QWidget::eventFilter(target,event);
}
