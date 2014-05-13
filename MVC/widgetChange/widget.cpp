#include "widget.h"
#include <QSequentialAnimationGroup>
#include <QHBoxLayout>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent /* = 0 */)
    : QWidget(parent)
{
    setWindowTitle("Widget");
    resize(400, 300);

    animation1 = new QPropertyAnimation(this);
    animation2 = new QPropertyAnimation(this);
    animationGroup = new QSequentialAnimationGroup;

    prevButton = new QPushButton("prev", this);
    nextButton = new QPushButton("next", this);
    QHBoxLayout *subLayout = new QHBoxLayout;
    QVBoxLayout *layout = new QVBoxLayout;
    subLayout->addStretch();
    subLayout->addWidget(prevButton);
    subLayout->addWidget(nextButton);
    subLayout->addStretch();
    layout->addStretch();
    layout->addLayout(subLayout);
    setLayout(layout);

    winSize = size();
    index = 0;
    for(int i=0; i<7; i++)
    {
        frame[i] = new QFrame(this);
        frame[i]->setObjectName("avatar");
        //0.jpg~9.jpg是当前目录下的10张图片
        QString str = QString("QFrame#avatar{border-image:url(%1.jpg)}")
                .arg( QString::number(i+1) );
        frame[i]->setStyleSheet(str);
    }
    prevButton->setEnabled(false);

    animation1->setStartValue( QPoint(winSize.width(), 10) );
    animation1->setEndValue( QPoint(winSize.width(), 10) );
    animation1->setDuration(500);
    animation1->setPropertyName("pos");
    animation2->setStartValue( QPoint(-winSize.width(), 10) );
    animation2->setEndValue( QPoint(winSize.width(), 10) );
    animation2->setDuration(500);
    animation2->setPropertyName("pos");
    animationGroup->addAnimation(animation1);
    animationGroup->addAnimation(animation2);

    index = 0;
    animation1->setTargetObject(frame[index]);
    isChanging = false;
    connect(prevButton, SIGNAL(clicked()), this, SLOT(clickedPrevButton()));
    connect(nextButton, SIGNAL(clicked()), this, SLOT(clickedNextButton()));
    connect(animationGroup, SIGNAL(finished()), this, SLOT(animationFinished()));
}

Widget::~Widget()
{

}

void Widget::resizeEvent(QResizeEvent *event)
{
    winSize = size();
    for(int i=0; i<7; i++)
        frame[i]->setGeometry(-winSize.width(), 10, winSize.width(), winSize.height()-50);
    frame[index]->setGeometry(winSize.width(), 10, winSize.width(), winSize.height()-50);

    animation1->setStartValue( QPoint(0, 10) );
    animation1->setEndValue( QPoint(winSize.width(), 10) );
    animation2->setStartValue( QPoint(-winSize.width(), 10) );
    animation2->setEndValue( QPoint(0, 10) );

}

void Widget::clickedPrevButton()
{
    if(isChanging)
        return;

    animation1->setStartValue( QPoint(winSize.width(), 10) );
    animation1->setEndValue( QPoint(0, 10) );
    animation2->setStartValue( QPoint(-winSize.width()*2, 10) );
    animation2->setEndValue( QPoint(-winSize.width(), 10) );

    nextButton->setEnabled(true);
    isChanging = true;
    setFixedSize(winSize.width(), winSize.height());
    index--;
    animation2->setTargetObject(frame[index]);
    animationGroup->start();
    if(index <= 0)
        prevButton->setEnabled(false);
}


void Widget::clickedNextButton()
{
    if(isChanging)
        return;

    animation1->setStartValue( QPoint(0, 10) );
    animation1->setEndValue( QPoint(winSize.width(), 10) );
    animation2->setStartValue( QPoint(-winSize.width(), 10) );
    animation2->setEndValue( QPoint(0, 10) );

    prevButton->setEnabled(true);
    isChanging = true;
    setFixedSize(winSize.width(), winSize.height());
    index++;
    animation2->setTargetObject(frame[index]);
    animationGroup->start();
    if(index >= 6)
        nextButton->setEnabled(false);
}

void Widget::animationFinished()
{
    isChanging = false;
    setMaximumSize(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
    animation1->setTargetObject(frame[index]);
}
