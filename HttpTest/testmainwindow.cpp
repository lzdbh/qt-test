#include "testmainwindow.h"
#include "ui_testmainwindow.h"
#include <QNetworkAccessManager>
#include "mainwindow.h"
#include <QDebug>

TestMainWindow::TestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestMainWindow),
    mainW(0)
{
    ui->setupUi(this);
    this->_manager=new QNetworkAccessManager(this);

    //connect(_manager, SIGNAL(finished(QNetworkReply*)),this,SLOT(getResult(QNetworkReply*)));
}

TestMainWindow::~TestMainWindow()
{
    delete ui;
}


void TestMainWindow::getResult(QNetworkReply *reply){
    QString x(reply->readAll());
    qDebug()<<x;
    ui->label->setText(x);
}

void TestMainWindow::getResult()
{
    QNetworkReply *reply=static_cast<QNetworkReply *>(sender());
    QString x(reply->readAll());
    qDebug()<<x<<"---get by sender";
    ui->label->setText(x);
}

void TestMainWindow::setCookie(QNetworkCookieJar *cookieJar){
    _manager->setCookieJar(cookieJar);
    qDebug()<<cookieJar;
}

void TestMainWindow::on_pushButton_clicked(){
//    QNetworkReply *reply = _manager->get(QNetworkRequest(QUrl("http://desktop.61read.com/login/islogin")));
//    connect(reply,SIGNAL(finished()),SLOT(getResult()));
    QNetworkReply *reply = _manager->get(QNetworkRequest(QUrl("http://desktop.61read.com/login")));

    connect(reply,&QNetworkReply::finished,[=](){
        QString x(reply->readAll());        
        ui->label->setText(x);
        this->mainW->setCookieJar(_manager->cookieJar());
        qDebug()<<x<<"---get by sender";
    });
}

void TestMainWindow::on_getLoginName_clicked()
{
    QNetworkReply *reply = _manager->get(QNetworkRequest(QUrl("http://desktop.61read.com/login/islogin")));
}

void TestMainWindow::on_btnLoginOut_clicked()
{
    QNetworkReply *reply = _manager->get(QNetworkRequest(QUrl("http://desktop.61read.com/login/loginout")));

    connect(reply,&QNetworkReply::finished,[=](){
        QString x(reply->readAll());
        qDebug()<<x<<"---get by sender";
        ui->label->setText(x);
    });
}

void TestMainWindow::loginOut()
{
    qDebug()<<"loginOUt!!!!!!!!!!!!!!!!!!!!!";
}

void TestMainWindow::setMain(MainWindow *mainW){
    this->mainW=mainW;
}
