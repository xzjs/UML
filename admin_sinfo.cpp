#include "admin_sinfo.h"
#include "ui_admin_sinfo.h"

Admin_sinfo::Admin_sinfo(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Admin_sinfo)
{
	ui->setupUi(this);
	this->setWindowTitle("Administrator-UserInformation");
}

Admin_sinfo::~Admin_sinfo()
{
	delete ui;
}


void Admin_sinfo::on_pushButton_2_clicked()
{
	//查找
	YY yy;
	yy.ID = ui->userlineEdit->text().trimmed().toStdString();
	if(YY::Select(yy.ID, yy))
	{
		if(yy.Type == "1")
			ui->textEdit->setText(tr("Admin:") +  QString::fromStdString(yy.ID) +"<br>"+ tr("Name:") +  QString::fromStdString(yy.Name));  //!!!!!!!!!!!!!!!!!!!!!!!!
		else			
			ui->textEdit->setText(tr("学工:") +  QString::fromStdString(yy.ID) +"<br>"+ tr("姓名:") +  QString::fromStdString(yy.Name));  //!!!!!!!!!!!!!!!!!!!!!!!!
	}
	else
		ui->textEdit->setText("查无此人");
}

void Admin_sinfo::on_pushButton_clicked()
{
	//添加 学工type0  管理员1
	YY yy;
	yy.ID = ui->userlineEdit->text().trimmed().toStdString();
	yy.Name = ui->userlineEdit_3->text().trimmed().toStdString();
	yy.Pwd = ui->userlineEdit_2->text().trimmed().toStdString();
	if(ui->radioButton_2->isChecked())  
		yy.Type = "0";
	else
		yy.Type = "1";
	if(yy.ID != "" && yy.Name != "" && yy.Pwd != "")
	{
		if(YY::AddUser(yy))
		{
			if(ui->radioButton_2->isChecked())
				ui->textEdit->setText("添加学工完成:" + ui->userlineEdit->text().trimmed());
			else
				ui->textEdit->setText("已添加管理员:" + ui->userlineEdit->text().trimmed());
		}else{
			ui->textEdit->setText("existing");
		}
	}
	else
	{
		ui->textEdit->setText("请将信息填写完整");
	}
}

void Admin_sinfo::on_pushButton_3_clicked()
{
	//delete
	if(YY::DeleteUser(ui->userlineEdit->text().trimmed().toStdString()))
	{
		ui->textEdit->setText("DeleteSuccess" + ui->userlineEdit->text().trimmed());
	}
	else
	{
		ui->textEdit->setText("No such person,input again please");
	}
}

void Admin_sinfo::on_pushButton_4_clicked()
{
	//更新 成员信息
	YY yy;
	yy.ID = ui->userlineEdit->text().trimmed().toStdString();
	yy.Name = ui->userlineEdit_3->text().trimmed().toStdString();
	yy.Pwd = ui->userlineEdit_2->text().trimmed().toStdString();
	if(ui->radioButton_2->isChecked())
		yy.Type = "0";
	else
		yy.Type = "1";
	if(yy.ID != "" && yy.Name != "" && yy.Pwd != "")
	{
		if(YY::XGXX(yy))
		{
			if(ui->radioButton_2->isChecked())
				ui->textEdit->setText("更新学工信息成功:" + ui->userlineEdit->text().trimmed());
			else
				ui->textEdit->setText("更新管理员信息成功:" + ui->userlineEdit->text().trimmed());
		}else{
			ui->textEdit->setText("No such person,input again please");
		}
	}
	else
	{
		ui->textEdit->setText("请将信息填写完整");
	}
	/*if(YY::XGXX(yy))
	{
		{if(ui->radioButton_2->isChecked())
			ui->textEdit->setText("更新学工信息成功:" + ui->userlineEdit->text().trimmed());
		else
			ui->textEdit->setText("更新管理员信息成功:" + ui->userlineEdit->text().trimmed());
		}
	}else{
		ui->textEdit->setText("操作失败");
	}*/

}
