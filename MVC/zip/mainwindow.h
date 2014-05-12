#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "quazip/JlCompress.h"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

//class JlCompress;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString getFileMd5(const QString filePath);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
