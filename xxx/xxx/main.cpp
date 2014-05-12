#include "xxx.h"
#include "UiTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	xxx w;
	w.show();
	
	UiTest t;
	t.show();
	return a.exec();
}
