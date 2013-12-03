#include "admin_lb.h"
#include "ui_admin_lb.h"
extern YY yyy;
Admin_lb::Admin_lb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_lb)
{
    ui->setupUi(this);
	this->setWindowTitle("Administrator-LendAndReturn");
}

Admin_lb::~Admin_lb()
{
    delete ui;
}

void Admin_lb::on_pushButton_clicked()
{
    //借书
      int  i;
      YY yy;
      yy.ID = ui->userlineEdit_2->text().trimmed().toStdString();
      YY::Select(yy.ID, yy);

      Book bo;
     if( !Book::Select(ui->userlineEdit->text().trimmed().toStdString(), bo))
	 {
	      QMessageBox::warning(this,tr("警告:"), tr("查无此书，不能借阅"), QMessageBox::Yes);
	 }
	 else
	 {
      i = UserBook::Lend(yy, bo, "1");
      switch (i) {
      case 0:
          QMessageBox::warning(this,tr("提示:"), tr("借阅成功"), QMessageBox::Yes);
          break;
      case 1:
          QMessageBox::warning(this,tr("警告:"), tr("借书达上限，不能再借阅"), QMessageBox::Yes);
          break;
      case 2:
          QMessageBox::warning(this,tr("警告:"), tr("你已欠款，不能借阅"), QMessageBox::Yes);
          break;
      case 3:
          QMessageBox::warning(this,tr("警告:"), tr("用户不存在，不能借阅"), QMessageBox::Yes);
          break;
      case 4:
          QMessageBox::warning(this,tr("警告:"), tr("该书已被借，不能再借阅"), QMessageBox::Yes);
          break;
      case 5:
          QMessageBox::warning(this,tr("警告:"), tr("该书已被预约，不能再借阅"), QMessageBox::Yes);
          break;
      default:
          break;
      }
	 }

}

void Admin_lb::on_pushButton_2_clicked()
{
    //还书
	
        Book bo;
	    
		if( !Book::Select(ui->userlineEdit->text().trimmed().toStdString(), bo))
		{
			QMessageBox::warning(this,tr("警告:"), tr("No such book,input again please"), QMessageBox::Yes);
		}
		else
		{
			
     		   if(UserBook::Back(bo))
			   {
				   if( ui->userlineEdit_2->text().trimmed().toStdString() != "")
          			{
					    ui->userlineEdit_2->clear();
	    	            QMessageBox::warning(this,tr("提示:"), tr("Don't have to input the UserID") + "<br>" + tr("Succeed to return the book"), QMessageBox::Yes);
				    }
				   else
				   {
					   QMessageBox::warning(this,tr("提示:"), tr("Succeed to return the book"), QMessageBox::Yes);
				   }
			   }
		      else
			       QMessageBox::warning(this,tr("警告:"), tr("This book wasn't lent, input again please"), QMessageBox::Yes);
		}
}
