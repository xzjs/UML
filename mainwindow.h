#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>// 用于状态栏
#include <QTableWidget>

#include <QtCore>
#include <QtGui>
#include <string>
#include <vector>
#include "UserBook.h"
#include "YY.h"
#include "Book.h"
#include "qmessagebox.h"
#include "login.h"
#include "classify.h"
#include <QTextCodec> //头文件，使能显示中文
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	void showtable(QString searchtype, string str);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    Login log/* = new Login()*/;

    Classify cla/* = new Classify()*/;

    //状态栏
    QLabel *first_statusLabel;
    QLabel *second_statusLabel;
    void init_statusBar();//初始化状态栏
};

#endif // MAINWINDOW_H
