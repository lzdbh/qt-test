#include "mainwindow.h"
#include <QApplication>
#include <QtCore/QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

	MainWindow w;
	w.show();
	return a.exec();
}
