#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCryptographicHash>
#include <QDebug>
#include <QDir>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getFileMd5(const QString filePath)
{
    qDebug()<<filePath;
    QCryptographicHash hash(QCryptographicHash::Md5);
    QFile in(filePath);

    if(!in.exists())
        qDebug()<<" file not exists!!!!";

    if (in.open(QIODevice::ReadOnly)) {
        char buf[2048];
        int bytesRead;
        qint64 overallBytesRead = 0;

        while ((bytesRead = in.read(buf, 2048)) > 0) {
            overallBytesRead += bytesRead;
            hash.addData(buf, bytesRead);
        }

        in.close();
        qDebug() << "overall bytes read:" << overallBytesRead;
        qDebug() << hash.result().toHex();
        return hash.result().toHex();
    }
    else {
        qDebug() << "Failed to open device!";
    }
    return "";
}

void MainWindow::on_pushButton_clicked()
{
    JlCompress::extractDir("zlib128.zip");
    QDir dir;
    QTime time;
    time.start();
    qDebug()<<getFileMd5(dir.currentPath()+"/qt-opensource-windows-x86-msvc2012_64-5.2.1.exe").toUpper();
    double end=time.elapsed();
    qDebug()<<end/1000;
}
