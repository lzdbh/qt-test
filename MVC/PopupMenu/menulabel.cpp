#include "menulabel.h"


MenuLabel::MenuLabel(QWidget *parent) :
    QLabel(parent)
{
    this->pressed=false;
}

void MenuLabel::mousePressEvent(QMouseEvent *event)
{
    this->pressed=true;
}
void MenuLabel::mouseReleaseEvent(QMouseEvent *event)
{
    if(this->pressed){
        if(event->button()==Qt::LeftButton)
            emit clicked();
        if(event->button()==Qt::RightButton)
            emit rightClicked();
        pressed=false;
    }
}
