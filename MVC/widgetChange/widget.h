#ifndef WIDGET_H
#define WIDGET_H


#include <QWidget>
#include <QFrame>
#include <QPushButton>
#include <QPropertyAnimation>


class Widget : public QWidget
{
    Q_OBJECT
private:
    QFrame *frame[7];
    QPushButton *prevButton;
    QPushButton *nextButton;
    QPropertyAnimation *animation1;
    QPropertyAnimation *animation2;
    QSequentialAnimationGroup *animationGroup;

    QSize winSize;
    int index;
    bool isChanging;

protected:
    void resizeEvent(QResizeEvent *event);

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void clickedPrevButton();
    void clickedNextButton();
    void animationFinished();
};
#endif // WIDGET_H
