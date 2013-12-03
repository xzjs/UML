#ifndef USER_RESERVE_H
#define USER_RESERVE_H

#include <QDialog>
#include "YY.h"
#include "UserBook.h"
#include "Book.h"
#include "qmessagebox.h"

namespace Ui {
class User_reserve;
}

class User_reserve : public QDialog
{
    Q_OBJECT

public:
    explicit User_reserve(QWidget *parent = 0);
    ~User_reserve();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::User_reserve *ui;
};

#endif // USER_RESERVE_H
