#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void startRequest(QUrl url);
    QString getFileMd5(const QString filePath);
    bool copyFile(const QString fromSrc,QString toSrc,bool coverIfExist=false);
    bool copyDir(const QString &fromDir,const QString &toDir,bool coverIfExist=false);
    bool deleteEmptyDir(const QString &dirPath);
    /**
     * @brief deleteDirWithContent
     * @param dirPatn 文件路径，相对 或者绝对
     * @return
     */
    void deleteDirWithContent(const QString &dirPath);
protected:
    void changeEvent(QEvent *);
private slots:
    void on_pushButton_clicked();//按钮单击事件
    void httpFinished();//完成下载后处理
    void httpReadyRead();//接收数据时处理
    void updateDataReadProgress(qint64,qint64);//更新进度条

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *httpManager;
    QNetworkReply *httpReply;
    QUrl url;
    QFile *file;
};

#endif // MAINWINDOW_H
