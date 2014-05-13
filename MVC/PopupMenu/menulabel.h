#ifndef MENULABEL_H
#define MENULABEL_H
#include <QMoveEvent>

#include <QLabel>

class MenuLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MenuLabel(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

signals:
    void clicked();
    void rightClicked();
public slots:

private:
    bool pressed;
};

#endif // MENULABEL_H
