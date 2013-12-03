#ifndef QTTESTBED_H
#define QTTESTBED_H

#include <QtWidgets/QMainWindow>
#include "ui_qttestbed.h"

class QtTestBed : public QMainWindow
{
	Q_OBJECT

public:
	QtTestBed(QWidget *parent = 0);
	~QtTestBed();

private:
	Ui::QtTestBedClass ui;
};

#endif // QTTESTBED_H
