#include "classify.h"
#include "ui_classify.h"
#include <QtCore>
#include <QtGui>
#include <QTextCodec> //头文件，使能显示中文

QTextCodec *codec = QTextCodec::codecForName("GBK");
Classify::Classify(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Classify)
{
	ui->setupUi(this);
	this->setWindowTitle("Book Classify");
	//设置中文编码方式
	
	//QString string = codec->toUnicode(encodedString);

}

Classify::~Classify()
{
	delete ui;
}

void Classify::showtab(QString str)
{
	ui->tableWidget->clear();
	QStringList header;  
	header<<"BookID"<<"BookName"<<"Editor"<<"Publisher";  
	ui->tableWidget->setHorizontalHeaderLabels(header); 
	vector <Book> boo;
	if(Book::GetBookList(str.toStdString(), 2, boo)){
		for (int j = 0; j < boo.size() && j < 100; j++)
		{
			QString qstr;

			qstr = QString::fromStdString(boo[j].ID);
			QTableWidgetItem *tableItem = new QTableWidgetItem(qstr);
			//使文本框居中显示
			//tableItem->setTextAlignment(5);
			ui->tableWidget->setItem(j,0,tableItem);

			qstr = QString::fromStdString(boo[j].Name);
			ui->tableWidget->setItem(j,1,new QTableWidgetItem(qstr));

			qstr = QString::fromStdString(boo[j].Writer);
			ui->tableWidget->setItem(j,2,new QTableWidgetItem(qstr));

			qstr = QString::fromStdString(boo[j].Publish);
			ui->tableWidget->setItem(j,3,new QTableWidgetItem(qstr));
		}
	}else{
		QMessageBox::warning(this,tr("警告:"), tr("No such book!"), QMessageBox::Yes);
	}

}

void Classify::on_pushButton_clicked()
{
	//计算机
	//    vector <Book> boo;
	//    if(Book::GetBookList("计算机", 4, &boo)){
	//        for (int j = 0; j < boo.size() && j < 100; j++)
	//        {
	//            QString qstr;

	//            qstr = tr(boo[j].ID);
	//            QTableWidgetItem *tableItem = new QTableWidgetItem(qstr);
	//            //使文本框居中显示
	//            //tableItem->setTextAlignment(5);
	//            ui.tableWidget->setItem(j,0,tableItem);

	//            qstr = tr(boo[j].Name);
	//            ui.tableWidget->setItem(j,1,new QTableWidgetItem(qstr));

	//            qstr = tr(boo[j].Writer);
	//            ui.tableWidget->setItem(j,2,new QTableWidgetItem(qstr));

	//            qstr = tr(boo[j].Publish);
	//            ui.tableWidget->setItem(j,3,new QTableWidgetItem(qstr));
	//         }
	//     }else{
	//        QMessageBox::warning(this,tr("警告:"), tr("检索“计算机”失败!"), QMessageBox::Yes);
	//          }

	//ui->tableWidget->clear();

	showtab("IT");

}

void Classify::on_pushButton_2_clicked()
{
	//数学
	//ui->tableWidget->clear();
	showtab(tr("数学"));
}

void Classify::on_pushButton_3_clicked()
{
	//物理
	//ui->tableWidget->clear();
	showtab("物理");
}

void Classify::on_pushButton_4_clicked()
{
	//化学
	//ui->tableWidget->clear();
	showtab("化学");
}

void Classify::on_pushButton_5_clicked()
{
	//历史
	//ui->tableWidget->clear();
	showtab("历史");
}

void Classify::on_pushButton_6_clicked()
{
	//地理
	//ui->tableWidget->clear();
	showtab("地理");
}

void Classify::on_pushButton_7_clicked()
{
	//生物
	//ui->tableWidget->clear();
	showtab("生物");
}

void Classify::on_pushButton_8_clicked()
{
	//医药
	//ui->tableWidget->clear();
	showtab("医药");
}

void Classify::on_pushButton_9_clicked()
{
	//食品
	//ui->tableWidget->clear();
	showtab("食品");
}

void Classify::on_pushButton_10_clicked()
{
	//军事
	//ui->tableWidget->clear();
	showtab("军事");
}

void Classify::on_pushButton_11_clicked()
{
	//工业
	//ui->tableWidget->clear();
	showtab("工业");
}

void Classify::on_pushButton_12_clicked()
{
	//农业
	//ui->tableWidget->clear();
	showtab("农业");
}

void Classify::on_pushButton_13_clicked()
{
	//法律
	//ui->tableWidget->clear();
	showtab("法律");
}

void Classify::on_pushButton_14_clicked()
{
	//宗教
	//ui->tableWidget->clear();
	showtab("宗教");
}

void Classify::on_pushButton_15_clicked()
{
	//政治
	//ui->tableWidget->clear();
	showtab("政治");
}

void Classify::on_pushButton_16_clicked()
{
	//经济
	//ui->tableWidget->clear();
	showtab("经济");
}

void Classify::on_pushButton_17_clicked()
{
	//文学
	//ui->tableWidget->clear();
	showtab("文学");
}

void Classify::on_pushButton_18_clicked()
{
	//戏曲
	//ui->tableWidget->clear();
	showtab("戏曲");
}
