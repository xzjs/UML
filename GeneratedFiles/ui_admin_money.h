/********************************************************************************
** Form generated from reading UI file 'admin_money.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MONEY_H
#define UI_ADMIN_MONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_money
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Admin_money)
    {
        if (Admin_money->objectName().isEmpty())
            Admin_money->setObjectName(QStringLiteral("Admin_money"));
        Admin_money->resize(470, 288);
        Admin_money->setMinimumSize(QSize(470, 288));
        Admin_money->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Admin_money->setFont(font);
        textEdit = new QTextEdit(Admin_money);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 50, 311, 191));
        pushButton_3 = new QPushButton(Admin_money);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 250, 75, 31));
        pushButton_4 = new QPushButton(Admin_money);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 250, 75, 31));
        widget = new QWidget(Admin_money);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 10, 350, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Admin_money);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Admin_money, SLOT(close()));

        QMetaObject::connectSlotsByName(Admin_money);
    } // setupUi

    void retranslateUi(QDialog *Admin_money)
    {
        Admin_money->setWindowTitle(QApplication::translate("Admin_money", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("Admin_money", "\345\217\226\346\266\210", 0));
        pushButton_4->setText(QApplication::translate("Admin_money", "\347\273\223\347\256\227", 0));
        label->setText(QApplication::translate("Admin_money", "\346\210\220\345\221\230\357\274\232", 0));
        pushButton_5->setText(QApplication::translate("Admin_money", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin_money: public Ui_Admin_money {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MONEY_H
