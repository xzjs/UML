#include <QApplication>
//#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include <QTextCodec> //头文件，使能显示中文
//#include <QPushButton>
//#include <QLabel>
//#include <QLineEdit>
//#include <QSpacerItem>
//#include <QVectorIterator>
//#include <QDialog>
//#include <QDebug>
//#include "classify.h"  //包含文件
#include "login.h"
#include "mainwindow.h"
#include "user.h"
#include "admin.h"
#include "YY.h"
#include "Book.h"
#include "UserBook.h"


YY yyy;//全局变量

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //使能显示中文

	//a.setDefaultCodec( QTextCodec::codecForName("GBK") );

    MainWindow w;
    w.show();
//    Login l;
//    l.show();
    return a.exec();
}
