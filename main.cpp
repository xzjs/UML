#include <QApplication>
//#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include <QTextCodec> //ͷ�ļ���ʹ����ʾ����
//#include <QPushButton>
//#include <QLabel>
//#include <QLineEdit>
//#include <QSpacerItem>
//#include <QVectorIterator>
//#include <QDialog>
//#include <QDebug>
//#include "classify.h"  //�����ļ�
#include "login.h"
#include "mainwindow.h"
#include "user.h"
#include "admin.h"
#include "YY.h"
#include "Book.h"
#include "UserBook.h"


YY yyy;//ȫ�ֱ���

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //ʹ����ʾ����

	//a.setDefaultCodec( QTextCodec::codecForName("GBK") );

    MainWindow w;
    w.show();
//    Login l;
//    l.show();
    return a.exec();
}
