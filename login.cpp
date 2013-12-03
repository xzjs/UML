#include "login.h"
#include "ui_login.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
//#include <QPushButton>
//#include <QLineEdit>
//#include <QLabel>

//#include <QDialog>

extern YY yyy;

Login::Login(QWidget *parent) :QDialog(parent),ui(new Ui::Login)
{
	ui->setupUi(this);
	this->setWindowTitle("Login");
}

Login::~Login()
{
	delete ui;
}



void Login::on_pushButton_2_clicked()
{
	//取消
}

void Login::on_pushButton_clicked()
{
	//登陆
	YY stu ;
	stu.ID = ui->userlineEdit->text().trimmed().toStdString();
	stu.Pwd = ui->pwdlineEdit->text().toStdString();
	if(YY::DL(stu)){

		yyy.ID = ui->userlineEdit->text().toStdString();
		yyy.Pwd = ui->pwdlineEdit->text().toStdString();
		yyy.Name=stu.Name;
		yyy.Cost = stu.Cost;
		if(stu.Type == "0"){
			us.show();
			us.show_ID();
			accept();
		}else{
			
			adm.show();
			adm.show_id();
			accept();
		}
	}else{
		QMessageBox::warning(this,tr("警告"), tr("学工号或密码输入错误"), QMessageBox::Yes);
		ui->pwdlineEdit->clear(); //清空密码
		ui->pwdlineEdit->setFocus(); //将光标转到学工号输入
	}

	
}
