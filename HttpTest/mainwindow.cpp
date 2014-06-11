#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    cookieJar(0)
{
    ui->setupUi(this);
    QDir dir;
    qDebug()<< dir.currentPath();

    ui->webView->load(QUrl::fromLocalFile(dir.currentPath()+"/main.html"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

QNetworkCookieJar *MainWindow::getCookieJar() const
{
    return ui->webView->page()->networkAccessManager()->cookieJar();
}


void MainWindow::setCookieJar(QNetworkCookieJar *cookieJar){
    ui->webView->page()->networkAccessManager()->setCookieJar(cookieJar);
    qDebug()<<cookieJar;
}
