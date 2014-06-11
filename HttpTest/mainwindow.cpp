#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    cookieJar(0)
{
    ui->setupUi(this);

    ui->webView->load(QUrl("http://desktop.61read.com/login"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QNetworkCookieJar *MainWindow::getCookieJar() const
{
    return ui->webView->page()->networkAccessManager()->cookieJar();
}
