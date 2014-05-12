#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebFrame>
#include <QWebPage>
#include <QWebView>
#include "test.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    test *x=new test;
    ui->webView->page()->mainFrame()->addToJavaScriptWindowObject("testC",new test);

}

MainWindow::~MainWindow()
{
    delete ui;
}
