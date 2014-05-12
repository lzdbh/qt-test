#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menulabel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MenuLabel *avatarLabel;

public slots:
    void leftClicked();
    void rightClicked();
private:
    Ui::MainWindow *ui;
    void displayAvatar();
};

#endif // MAINWINDOW_H
