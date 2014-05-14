#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebFrame>
#include <QWebPage>
#include <QWebView>
#include <QDebug>
#include "test.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    test *x=new test;
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->webView->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);

    //connect(ui->webView->page()->mainFrame(),&QWebFrame::javaScriptWindowObjectCleared,
    //        this,&MainWindow::populateJavaScriptWindowObject);
    ui->webView->page()->mainFrame()->addToJavaScriptWindowObject("testC",new test);
    QString file=QDir::currentPath()+"/1.html";
    qDebug()<<file;
    ui->webView->load(QUrl::fromLocalFile(file));

}

void MainWindow::populateJavaScriptWindowObject()
{
    ui->webView->page()->mainFrame()->addToJavaScriptWindowObject("testC",new test);
}

MainWindow::~MainWindow()
{
    delete ui;
}
