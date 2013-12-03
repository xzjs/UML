#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec> //头文件，使能显示中文

//#include <QtCore>
//#include <QtGui>
//#include "ui_classify.h"  //包含文件
//#include "ui_login.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	init_statusBar();
	QTextCodec *codec = QTextCodec::codecForLocale();
    QTextCodec::setCodecForLocale(codec);
}

void MainWindow::init_statusBar()
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
	//使能显示中文

	QStatusBar* bar = ui->statusBar;//获取状态栏
	first_statusLabel = new QLabel;
	first_statusLabel->setMinimumSize(150,20);
	first_statusLabel->setFrameShape(QFrame::WinPanel);
	first_statusLabel->setFrameShadow(QFrame::Sunken);
	second_statusLabel = new QLabel;
	second_statusLabel->setMinimumSize(150,20);
	second_statusLabel->setFrameShape(QFrame::WinPanel);
	second_statusLabel->setFrameShadow(QFrame::Sunken);

	bar->addWidget(first_statusLabel);
	bar->addWidget(second_statusLabel);
	first_statusLabel->setText(tr("欢迎使用图书管理系统"));
	second_statusLabel->setText(tr("Copyright Reserved! The 7th!"));
}
MainWindow::~MainWindow()
{
	delete ui;

}


void MainWindow::showtable(QString searchtype, string str)
{
	ui->tableWidget->clear();
	QStringList header;  
	header<<"BookID"<<"BookName"<<"Editor"<<"Publisher";  
	ui->tableWidget->setHorizontalHeaderLabels(header); 
	int i;
	vector <Book> boo;

	if(searchtype == tr("BookName"))  i = 1;
	if(searchtype == tr("Index"))  i = 0;
	if(searchtype == tr("Editor"))  i = 2;
	if(searchtype == tr("Publish"))  i = 3;
	if(Book::GetBookList(str, i, boo))
	{
		for (int j = 0; j < boo.size() && j < 20; j++)
		{
			QString qstr;

			qstr = QString::fromStdString(boo[j].ID);
			QTableWidgetItem *tableItem = new QTableWidgetItem(qstr);
			//使文本框居中显示
			//tableItem->setTextAlignment(5);
			ui->tableWidget->setItem(j,0,tableItem);

			qstr = QString::fromStdString(boo[j].Name);
			ui->tableWidget->setItem(j,1,new QTableWidgetItem(qstr));

			qstr = QString::fromStdString(boo[j].Writer);
			ui->tableWidget->setItem(j,2,new QTableWidgetItem(qstr));

			qstr = QString::fromStdString(boo[j].Publish);
			ui->tableWidget->setItem(j,3,new QTableWidgetItem(qstr));
		}
	}
	else
	{
		QMessageBox::warning(this,tr("警告:"), tr("No such book!"), QMessageBox::Yes);
	}

}

void MainWindow::on_pushButton_clicked()
{
	//  分类导航
	cla.show();
}

void MainWindow::on_pushButton_2_clicked()
{
	//登陆
	log.show();
}

void MainWindow::on_pushButton_3_clicked()
{
	//查找  （搜书）
	QString searchtype;
	string str;
	searchtype= ui->comboBox->currentText();
	str = ui->lineEdit->text().toStdString();
	showtable(searchtype, str);

}

