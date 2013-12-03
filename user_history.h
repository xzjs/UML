#ifndef USER_HISTORY_H
#define USER_HISTORY_H

//  用户借阅信息

#include <QDialog>
#include <QTableWidget>
#include <QtGui>
#include <QtCore>
#include <string>
#include <vector>
#include "UserBook.h"
#include "YY.h"
#include "Book.h"
extern YY yyy;

namespace Ui {
class User_History;
}

class User_History : public QDialog
{
    Q_OBJECT

public:
    explicit User_History(QWidget *parent = 0);
    ~User_History();
	void showtable();
private:
    Ui::User_History *ui;
};

#endif // USER_HISTORY_H
