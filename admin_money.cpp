#include "admin_money.h"
#include "ui_admin_money.h"

Admin_money::Admin_money(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_money)
{
    ui->setupUi(this);
	this->setWindowTitle("Administrator-PayOff");
}

Admin_money::~Admin_money()
{
    delete ui;
}

void Admin_money::on_pushButton_4_clicked()
{
    //结算
    YY yy;
	yy.ID = ui->lineEdit->text().trimmed().toStdString();
	if (yy.ID == "")
	{
		ui->textEdit->setText("请输入学工号");
	}
	else
	{
	if(YY::ClearCost(yy.ID)){        
		ui->textEdit->setText(tr("逾期欠费:") + QString::number(yy.Cost) + "<br>" + "结算成功");  //!!!!!!!!!!!!!!!!!!!!!!!!
    }else
        ui->textEdit->setText("结算失败");
	}
}

void Admin_money::on_pushButton_3_clicked()
{
    //取消
}

void Admin_money::on_pushButton_5_clicked()
{
    ////查询
    YY yy;
    yy.ID = ui->lineEdit->text().trimmed().toStdString();
	if(YY::Select(yy.ID, yy))
		ui->textEdit->setText(tr("逾期欠费:") + QString::number(yy.Cost));  //!!!!!!!!!!!!!!!!!!!!!!!!
    else
        ui->textEdit->setText("查无此人");
}

