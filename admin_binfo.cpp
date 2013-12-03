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
		ui->textEdit->setText("Don't have to input the BookID");
	}
	else
	{
		if( yy.Name !="" && yy.Publish !="" && yy.Writer !="")
		{
			if(Book::AddBook(yy))
			{
				ui->textEdit->setText("Addition success:" + ui->userlineEditming->text().trimmed() + "<br>" + "BookID:" +  QString::fromStdString(yy.ID));
			}else{
				ui->textEdit->setText("Addition failed");
			}
		}else
		{
			ui->textEdit->setText("Input all of the information please");
		}
	}
}

void Admin_binfo::on_dpushButton_clicked()
{
	//删除
	if (ui->userlineEdithao->text().trimmed().toStdString() == "")
	{
		ui->textEdit->setText("please input the BookID");
	}
	else
	{
		if(Book::DeleteBook(ui->userlineEdithao->text().trimmed().toStdString()))
			ui->textEdit->setText("Succeed to delete the Book:" + ui->userlineEdithao->text().trimmed());   //!!!!!!!!!!!!!!!!!!!!!!!
		else
			ui->textEdit->setText("Failed to delete the Book");
	}
}

void Admin_binfo::on_spushButton_clicked()
{
	//查找
	if (ui->userlineEdithao->text().trimmed().toStdString() == "")
	{
		ui->textEdit->setText("please input the BookID");
	}
	else
	{
		Book yy;
		yy.ID = ui->userlineEdithao->text().trimmed().toStdString();
		if(Book::Select(ui->userlineEdithao->text().trimmed().toStdString(), yy))
			ui->textEdit->setText(tr("BookID:") + QString::fromStdString(yy.ID) + "<br>" + tr("BookName:") + QString::fromStdString(yy.Name)+"<br>" + tr("Editor:") + QString::fromStdString(yy.Writer)+"<br>"+  tr("Publisher:") + QString::fromStdString(yy.Publish)+"<br>" + tr("BookItem:") + QString::fromStdString(yy.BookClass));  //!!!!!!!!!!!!!!!!!!!!!!!!
		else
			ui->textEdit->setText("Failed to search the Book");
	}
}
