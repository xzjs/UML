#ifndef ADMIN_MONEY_H
#define ADMIN_MONEY_H

#include <QDialog>

#include "UserBook.h"

namespace Ui {
class Admin_money;
}

class Admin_money : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_money(QWidget *parent = 0);
    ~Admin_money();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

	void on_pushButton_5_clicked();

private:
    Ui::Admin_money *ui;
};

#endif // ADMIN_MONEY_H
