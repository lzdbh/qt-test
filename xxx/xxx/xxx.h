#ifndef XXX_H
#define XXX_H

#include <QtWidgets/QMainWindow>
#include "ui_xxx.h"

class xxx : public QMainWindow
{
	Q_OBJECT

public:
	xxx(QWidget *parent = 0);
	~xxx();

	public slots:
	void btn_click();

private:
	Ui::xxxClass ui;
};

#endif // XXX_H
