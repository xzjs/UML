#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QString>

#include "user.h"
#include "admin.h"

#include "YY.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Login *ui;
     User us;
     Admin adm;
	// static YY yyy;
};

#endif // LOGIN_H
