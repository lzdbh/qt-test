#include <QApplication>
#include "player.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Player p;
	p.resize(640, 480);
	p.playFile("#��д��Ҫ�����ļ�·��#");
	p.show();

	return a.exec();
}
