#include "user.h"
#include "ui_user.h"

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
	this->setWindowTitle("User");

	
}

User::~User()
{
    delete ui;
}

void User::show_ID()
{
	ui->label_2->setText(QString::fromStdString(yyy.ID));
}
void User::on_pushButton_3_clicked()
{
    //证件信息
	//class MyMessageBox : public QMessageBox {
	//protected:
	//	void showEvent(QShowEvent* event) {
	//		setMinimumSize(600,480);
	//	QMessageBox::showEvent(event);
	//	/*setFixedSize(640, 480);*/
	//	}
	//};
	QMessageBox msgbox(this);
	msgbox.setFixedSize(800,300);
	msgbox.setWindowTitle("Infomation");
	msgbox.setText( QString::fromStdString("ID:" + yyy.ID + "<br>" + "Name:" + yyy.Name +"<br>" + "Debt:" + (QString::number(yyy.Cost)).toStdString()));
	msgbox.exec();
	//QMessageBox::information(this, tr("Infomation") ,  QString::fromStdString("ID:" + yyy.ID + "<br>" + "Name:" + yyy.Name +"<br>" + "Debt:" + (QString::number(yyy.Cost)).toStdString()));
}

void User::on_pushButton_2_clicked()
{
    //借阅信息
    history.show();
	history.showtable();
}

void User::on_pushButton_5_clicked()
{
    //预约
    res.show();
}

void User::on_pushButton_4_clicked()
{
    //修改密码
    changepwd.show();
}
