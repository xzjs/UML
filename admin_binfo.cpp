#include "admin_binfo.h"
#include "ui_admin_binfo.h"
#include <QString>
Admin_binfo::Admin_binfo(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Admin_binfo)
{
	ui->setupUi(this);
	this->setWindowTitle("Administrator-BookInformation");
}

Admin_binfo::~Admin_binfo()
{
	delete ui;
}

void Admin_binfo::on_apushButton_clicked()
{
	//添加
	Book yy;
	//yy.ID = ui->userlineEdithao->text().trimmed().toStdString();
	yy.Name = ui->userlineEditming->text().trimmed().toStdString();
	yy.Publish = ui->userlineEditchu->text().trimmed().toStdString();
	yy.Writer = ui->userlineEditzuo->text().trimmed().toStdString();
	yy.BookClass = ui->comboBox->currentText().toStdString();
	if(ui->userlineEdithao->text().trimmed().toStdString() != "")
	{
		ui->textEdit->setText("不用输入书号");
	}
	else
	{
		if( yy.Name !="" && yy.Publish !="" && yy.Writer !="")
		{
			if(Book::AddBook(yy))
			{
				ui->textEdit->setText("添加成功：" + ui->userlineEditming->text().trimmed() + "<br>" + "书号：" +  QString::fromStdString(yy.ID));
			}else{
				ui->textEdit->setText("添加失败");
			}
		}else
		{
			ui->textEdit->setText("请将信息输入完整");
		}
	}
}

void Admin_binfo::on_dpushButton_clicked()
{
	//删除
	if (ui->userlineEdithao->text().trimmed().toStdString() == "")
	{
		ui->textEdit->setText("请输入书号");
	}
	else
	{
		if(Book::DeleteBook(ui->userlineEdithao->text().trimmed().toStdString()))
			ui->textEdit->setText("成功删书:" + ui->userlineEdithao->text().trimmed());   //!!!!!!!!!!!!!!!!!!!!!!!
		else
			ui->textEdit->setText("删书失败");
	}
}

void Admin_binfo::on_spushButton_clicked()
{
	//查找
	if (ui->userlineEdithao->text().trimmed().toStdString() == "")
	{
		ui->textEdit->setText("请输入书号");
	}
	else
	{
		Book yy;
		yy.ID = ui->userlineEdithao->text().trimmed().toStdString();
		if(Book::Select(ui->userlineEdithao->text().trimmed().toStdString(), yy))
			ui->textEdit->setText(tr("书号:") + QString::fromStdString(yy.ID) + "<br>" + tr("书名:") + QString::fromStdString(yy.Name)+"<br>" + tr("作者:") + QString::fromStdString(yy.Writer)+"<br>"+  tr("出版社:") + QString::fromStdString(yy.Publish)+"<br>" + tr("分类:") + QString::fromStdString(yy.BookClass));  //!!!!!!!!!!!!!!!!!!!!!!!!
		else
			ui->textEdit->setText("搜书失败");
	}
}
