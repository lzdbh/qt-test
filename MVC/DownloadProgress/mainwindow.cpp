#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QCryptographicHash>
#include <QDebug>
#include <quazip/JlCompress.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->httpManager=new QNetworkAccessManager(this);
    ui->progressBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::copyFile(const QString fromSrc, QString toSrc, bool coverIfExist)
{
    toSrc.replace("\\","/");
    if (fromSrc == toSrc){
        return true;
    }
    if (!QFile::exists(fromSrc)){
        return false;
    }

    QFileInfo info(toSrc);
    QDir dir(info.absoluteDir());
    if(!dir.exists()){
        if(!dir.mkdir(dir.absolutePath())){
            qDebug()<<"mk dir"+dir.absolutePath()+" failed!!!";
            return false;
        }
    }


    bool exist = dir.exists(toSrc);

    if (exist&&coverIfExist){
        dir.remove(toSrc);
    }

    if(!QFile::copy(fromSrc, toSrc))
    {
        return false;
    }
    return true;
}

bool MainWindow::copyDir(const QString &fromDir, const QString &toDir, bool coverIfExist){
    QDir sourceDir(fromDir);
    QDir targetDir(toDir);
    if(!targetDir.exists()){    /**< 如果目标目录不存在，则进行创建 */
        if(!targetDir.mkdir(targetDir.absolutePath()))
            return false;
    }

    QFileInfoList fileInfoList = sourceDir.entryInfoList();
    foreach(QFileInfo fileInfo, fileInfoList){
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
            continue;

        if(fileInfo.isDir()){    /**< 当为目录时，递归的进行copy */
            if(!copyDir(fileInfo.filePath(),
                        targetDir.filePath(fileInfo.fileName()),
                        coverIfExist))
                return false;
        }
        else{            /**< 当允许覆盖操作时，将旧文件进行删除操作 */
            if(coverIfExist && targetDir.exists(fileInfo.fileName())){
                targetDir.remove(fileInfo.fileName());
            }

            /// 进行文件copy
            if(!QFile::copy(fileInfo.filePath(),
                            targetDir.filePath(fileInfo.fileName()))){
                return false;
            }
        }
    }
    return true;
}

bool MainWindow::deleteEmptyDir(const QString &dirPath)
{

    QDir dir(dirPath);
    if(!dir.exists()) return true;

    QFileInfoList newFileList = dir.entryInfoList();
    for(QFileInfo fileInfo:newFileList)
    {
        if(fileInfo.fileName() == "." || fileInfo.fileName() == "..")
            continue;
        if(fileInfo.isDir()){
            int childCount =0;
            QDir subDir(fileInfo.filePath());
            childCount = subDir.entryInfoList().count();
            if(childCount>2){
                deleteEmptyDir(fileInfo.filePath());
            }else{
                qDebug()<<"remove "+fileInfo.filePath();
                fileInfo.absoluteDir().rmpath(fileInfo.filePath());
            }
        }
    }
    return true;
}

void MainWindow::deleteDirWithContent(const QString &dirPath){
    QDir dir(dirPath);
    if(!dir.exists()) return;

    int count =0;
    count = dir.entryInfoList().count();

    if(count>2){
        QFileInfoList infos=dir.entryInfoList();

        for(QFileInfo info:infos){
            if(info.isDir()){
                if(info.fileName() == "." || info.fileName() == "..")
                    continue;
                deleteDirWithContent(info.filePath());
            }else{
                dir.remove(info.fileName());
            }
        }
    }
    QDir tmp(dir.absolutePath());
    tmp.rmpath(dirPath);
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
    this->url=ui->lineEdit->text();
    if(url.isEmpty()) url="http://localhost/zlib128.zip";
    QFileInfo fileInfo(url.path());
    QString fileName(fileInfo.fileName());

    if(fileName.isEmpty()) fileName="index.html";

    file=new QFile(fileName);
    if(!file->open(QIODevice::WriteOnly)){
        qDebug()<<"file open error";
        delete file;
        file=0;
        return;
    }
    startRequest(url);
    ui->progressBar->setValue(0);
    ui->progressBar->show();
}
void MainWindow::startRequest(QUrl url)
{
    httpReply=httpManager->get(QNetworkRequest(url));
    connect(httpReply,SIGNAL(finished()),this,SLOT(httpFinished()));
    connect(httpReply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
    connect(httpReply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(updateDataReadProgress(qint64,qint64)));
}
void MainWindow::httpReadyRead()
{
    if(file) file->write(httpReply->readAll());
}
void MainWindow::updateDataReadProgress(qint64 bytesRead, qint64 totalBytes)
{
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}

void MainWindow::httpFinished()
{
    QDir dir;
    QString fileName=file->fileName();
    QString dirName=fileName;
    dirName=dirName.replace(".zip","");
    QString fromPath=dir.currentPath().append("/").append(dirName);
    QString toPath=dir.currentPath().append("/").append("backup");

    qDebug()<<fileName+" is dowanload finished!!!";
    ui->progressBar->hide();
    file->flush();
    file->close();
    httpReply->deleteLater();
    httpReply=0;
    delete file;
    file=0;
    //比较md5
    qDebug()<<getFileMd5(dir.currentPath().append("/").append(fileName)).toUpper();
    //解压
    QStringList fileList= JlCompress::extractDir(fileName,dirName);

    //备份
    for(QString &i:fileList){
        i.replace(dir.currentPath().append("/").append(dirName),"");
        QString fromSrc=dir.currentPath()+i;
        QString toSrc=toPath+i;
        copyFile(fromSrc,toSrc,true);
    }
    //替换
    copyDir(fromPath,dir.currentPath(),true);
    //还原
    for(QString &i:fileList)
    {
        QFile file(dir.currentPath()+i);
        qDebug()<<dir.currentPath()+i;
        file.remove();
    }
    deleteEmptyDir(dir.currentPath());
    copyDir(toPath,dir.currentPath(),true);
    deleteDirWithContent(dir.currentPath().append("/").append(dirName));
    qDebug()<<dir.currentPath().append("/").append(dirName);
    deleteDirWithContent(toPath);
    qDebug()<<toPath;
    dir.remove(dir.currentPath().append("/").append(fileName));
    //完成退出
}



void MainWindow::changeEvent(QEvent *)
{

}
