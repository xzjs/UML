#ifndef CLASSIFY_H
#define CLASSIFY_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTableWidget>
#include <string>
#include <vector>
#include "UserBook.h"
#include "YY.h"
#include "Book.h"
#include <QMessageBox>
#include <QString>
namespace Ui {
class Classify;
}

class Classify : public QDialog
{
    Q_OBJECT

public:
    explicit Classify(QWidget *parent = 0);
    ~Classify();
    void showtab(QString str);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::Classify *ui;
};

#endif // CLASSIFY_H
