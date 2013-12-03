#include "user_history.h"
#include "ui_user_history.h"



User_History::User_History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_History)
{
    ui->setupUi(this);  
	this->setWindowTitle("User-BorrowInformation");

}

User_History::~User_History()
{
    delete ui;
}

void User_History::showtable()
{
	ui->tableWidget->clear();
	QStringList header;  
	header<<"BookID"<<"BookName"<<"Editor"<<"BorrowTime"<<"ReturnTime";  
	ui->tableWidget->setHorizontalHeaderLabels(header);  

    vector <UserBook> ubh;     //表格显示
    int i;
    i = UserBook::BorrowTab(yyy, ubh);

    for (int j = 0; j < i && j < 12; j++)
    {
        QString qstr;
        Book boo;
        Book::Select(ubh[j].BookID, boo);

        qstr = QString::fromStdString(ubh[j].BookID);
        QTableWidgetItem *tableItem = new QTableWidgetItem(qstr);
        //使文本框居中显示
        //tableItem->setTextAlignment(5);
        ui->tableWidget->setItem(j,0,tableItem);

        qstr = QString::fromStdString(boo.Name);
        ui->tableWidget->setItem(j,1,new QTableWidgetItem(qstr));

        qstr = QString::fromStdString(boo.Writer);
        ui->tableWidget->setItem(j,2,new QTableWidgetItem(qstr));

		qstr = QString::fromStdString(ubh[j].LendDate.Tostring());
        ui->tableWidget->setItem(j,3,new QTableWidgetItem(qstr));

		qstr = QString::fromStdString((ubh[j].LendDate.AddMonth())->Tostring());
        ui->tableWidget->setItem(j,4,new QTableWidgetItem(qstr));
       
    }
}