#ifndef ADMIN_BINFO_H
#define ADMIN_BINFO_H

#include <QDialog>

#include "Book.h"
#include "YY.h"

namespace Ui {
class Admin_binfo;
}

class Admin_binfo : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_binfo(QWidget *parent = 0);
    ~Admin_binfo();

private slots:
    void on_apushButton_clicked();

    void on_spushButton_clicked();

    void on_dpushButton_clicked();

private:
    Ui::Admin_binfo *ui;
};

#endif // ADMIN_BINFO_H
