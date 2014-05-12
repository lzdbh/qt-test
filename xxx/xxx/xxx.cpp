#include "xxx.h"
#include <qlineedit.h>
#include "..\xxlib\xxlib.h"

xxx::xxx(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked,this,&xxx::btn_click);
}

xxx::~xxx()
{

}

void xxx::btn_click(){
	xxlib xlib;
	QString xx = xlib.getXX("ooo");
	ui.lineEdit->setText(xx);
}
