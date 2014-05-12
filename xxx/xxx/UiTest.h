#pragma once
#include <QMainWindow>
#include "ui_untitled.h"
class UiTest :
	public QMainWindow
{
	Q_OBJECT
public:
	UiTest(QWidget *parent = 0);
	~UiTest();
private:
	Ui::MainWindow ui;
};

