#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkCookieJar>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QNetworkCookieJar *getCookieJar() const;
    void setCookieJar(QNetworkCookieJar *cookieJar);
private:
    Ui::MainWindow *ui;
    QNetworkCookieJar *cookieJar;

};

#endif // MAINWINDOW_H
