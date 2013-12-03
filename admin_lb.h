#ifndef ADMIN_LB_H
#define ADMIN_LB_H

#include <QDialog>
#include "YY.h"
#include "UserBook.h"
#include "Book.h"
#include "qmessagebox.h"
namespace Ui {
class Admin_lb;
}

class Admin_lb : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_lb(QWidget *parent = 0);
    ~Admin_lb();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Admin_lb *ui;
};

#endif // ADMIN_LB_H
