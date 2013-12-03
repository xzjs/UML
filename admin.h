#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>

#include "admin_binfo.h"
#include "admin_lb.h"
#include "admin_money.h"
#include "admin_sinfo.h"
#include "YY.h"

extern YY yyy;

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = 0);
    ~Admin();
        void show_id();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

        

private:
    Ui::Admin *ui;
    Admin_binfo binfo;
    Admin_lb lb;
    Admin_money money;
    Admin_sinfo sinfo;
};

#endif // ADMIN_H