#include "user_reserve.h"
#include "ui_user_reserve.h"

extern YY yyy;
User_reserve::User_reserve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_reserve)
{
    ui->setupUi(this);
	this->setWindowTitle("User-Reserve");
}

User_reserve::~User_reserve()
{
    delete ui;
}

void User_reserve::on_pushButton_clicked()
{
    //预约
    int i;
    YY yy;
    yy.ID = yyy.ID;
    YY::Select(yy.ID, yy);

    Book bo;
	if( !Book::Select(ui->userlineEdit->text().trimmed().toStdString(), bo))
	{
		QMessageBox::warning(this,tr("警告:"), tr("查无此书，不能预阅"), QMessageBox::Yes);
	}else
	{
    i = UserBook::Lend(yy,bo,"0");
    switch (i) {
    case 0:
        QMessageBox::warning(this,tr("提示:"), tr("预约成功"), QMessageBox::Yes);
        break;
    case 1:
        QMessageBox::warning(this,tr("警告:"), tr("借书达上限，不能再预阅"), QMessageBox::Yes);
        break;
    case 2:
        QMessageBox::warning(this,tr("警告:"), tr("你已欠款，不能预阅"), QMessageBox::Yes);
        break;
    case 3:
        QMessageBox::warning(this,tr("警告:"), tr("用户不存在，不能预阅"), QMessageBox::Yes);
        break;
    case 4:
        QMessageBox::warning(this,tr("警告:"), tr("该书已被借，不能再预阅"), QMessageBox::Yes);
        break;
    case 5:
        QMessageBox::warning(this,tr("警告:"), tr("该书已被预约，不能再预阅"), QMessageBox::Yes);
        break;
    default:
        break;
    }
	}
}

void User_reserve::on_pushButton_2_clicked()
{
    //取消
}
