#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QPixmap>
#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAvatar();

    connect(avatarLabel,&MenuLabel::clicked,this,&MainWindow::leftClicked);
    connect(avatarLabel,&MenuLabel::rightClicked,this,&MainWindow::rightClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete avatarLabel;
}

void MainWindow::displayAvatar()
{
    avatarLabel=new MenuLabel(this);
    avatarLabel->setObjectName(QStringLiteral("label"));
    avatarLabel->setGeometry(QRect(270, 10, 111, 91));
    avatarLabel->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127)"));

    QImage img;
    img.load("4.jpg");
    img=img.scaled(avatarLabel->width(),avatarLabel->height(),Qt::KeepAspectRatio);
    avatarLabel->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::leftClicked()
{
    qDebug()<<"leftleftleftleftleftleftleftleft";
}
void MainWindow::rightClicked()
{
    QMenu *menu=new QMenu(this);
    menu->addAction(tr("11111111111"));
    menu->addAction(tr("2222222222222"));
    menu->addAction(tr("2222222222222"));
    menu->addSeparator();
    menu->addAction(tr("2222222222222"));

    menu->exec(QCursor::pos());
}
