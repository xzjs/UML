#include "user_changepwd.h"
#include "ui_user_changepwd.h"

extern YY yyy;
User_changepwd::User_changepwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_changepwd)
{
    ui->setupUi(this);
	this->setWindowTitle("User-ChangePassword");
}

User_changepwd::~User_changepwd()
{
    delete ui;
}

void User_changepwd::on_pushButton_clicked()
{
    //确认 修改密码
      YY yy;
      yy.ID = yyy.ID;
      YY::Select(yy.ID, yy);
	  string pwd=ui->oldlineEdit->text().toStdString();
	  MD5 md5(pwd);
	  pwd=md5.md5();
	  if(ui->oldlineEdit->text().toStdString() == "" || ui->newlineEdit->text().toStdString() =="" || ui->againlineEdit->text().toStdString() == "")
	  {
		  QMessageBox::warning(this,tr("警告:"), tr("密码不能为空\n"), QMessageBox::Yes);
	  }
	  else
	  {
	  if(yy.Pwd ==pwd  && ui->newlineEdit->text().toStdString() == ui->againlineEdit->text().toStdString() ){
          yy.Pwd = ui->newlineEdit->text().toStdString();
          if(YY::XGXX(yy))
                  QMessageBox::warning(this,tr("提示:"), tr("修改密码成功"), QMessageBox::Yes);
          else
                  QMessageBox::warning(this,tr("警告:"), tr("修改密码失败"), QMessageBox::Yes);
      }else{
          QMessageBox::warning(this,tr("警告:"), tr("原密码错误或新密码两次输入不一致\n"), QMessageBox::Yes);
      }
	  }
    
}

void User_changepwd::on_pushButton_2_clicked()
{
    //取消
}
