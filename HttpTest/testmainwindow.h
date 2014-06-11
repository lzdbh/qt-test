#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QMainWindow>
#include <QNetworkReply>
#include "mainwindow.h"
#include <QNetworkCookieJar>

namespace Ui {
class TestMainWindow;
}

class TestMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestMainWindow(QWidget *parent = 0);
    ~TestMainWindow();
    void setCookie(QNetworkCookieJar *cookieJar);
    void setMain(MainWindow *mainW);

private slots:
    void on_pushButton_clicked();
    void getResult(QNetworkReply *reply);

    void getResult();

    void on_getLoginName_clicked();

    void on_btnLoginOut_clicked();

    void loginOut();



private:
    Ui::TestMainWindow *ui;
    QNetworkAccessManager *_manager;
    //QNetworkReply *reply;
    QNetworkCookieJar *cookieJar;
    MainWindow *mainW;
};

#endif // TESTMAINWINDOW_H
