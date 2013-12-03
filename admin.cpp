#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
	this->setWindowTitle("Administrator");
        
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_3_clicked()
{
    //学工信息
    sinfo.show();
}

void Admin::on_pushButton_2_clicked()
{
    //书刊信息
    binfo.show();
}

void Admin::on_pushButton_5_clicked()
{
    //书刊借阅业务
    lb.show();
}

void Admin::on_pushButton_4_clicked()
{
    //逾期结算
    money.show();
}

void Admin::show_id()
{
        ui->Adminlabel->setText(QString::fromStdString(yyy.ID));// 管理员：******
}