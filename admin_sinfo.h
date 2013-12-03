#ifndef ADMIN_SINFO_H
#define ADMIN_SINFO_H

#include <QDialog>

#include "YY.h"
//#include "qradiobutton.h"
namespace Ui {
class Admin_sinfo;
}

class Admin_sinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_sinfo(QWidget *parent = 0);
    ~Admin_sinfo();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();




private:
    Ui::Admin_sinfo *ui;
};

#endif // ADMIN_SINFO_H
