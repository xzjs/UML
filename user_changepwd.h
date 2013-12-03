#ifndef USER_CHANGEPWD_H
#define USER_CHANGEPWD_H

#include <QDialog>

#include "YY.h"

#include "qmessagebox.h"

namespace Ui {
class User_changepwd;
}

class User_changepwd : public QDialog
{
    Q_OBJECT

public:
    explicit User_changepwd(QWidget *parent = 0);
    ~User_changepwd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::User_changepwd *ui;
};

#endif // USER_CHANGEPWD_H
