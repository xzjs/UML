#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QMessageBox>
#include "user_changepwd.h"
#include "user_history.h"
#include "user_reserve.h"
#include "YY.h"
extern YY yyy;

namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = 0);
    ~User();

	void show_ID();
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::User *ui;
    User_changepwd changepwd;
    User_History history;
    User_reserve res;
};

#endif // USER_H
