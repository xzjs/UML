/********************************************************************************
** Form generated from reading UI file 'user_changepwd.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_CHANGEPWD_H
#define UI_USER_CHANGEPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_User_changepwd
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *againlineEdit;
    QLineEdit *newlineEdit;
    QLineEdit *oldlineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *User_changepwd)
    {
        if (User_changepwd->objectName().isEmpty())
            User_changepwd->setObjectName(QStringLiteral("User_changepwd"));
        User_changepwd->resize(470, 288);
        User_changepwd->setMinimumSize(QSize(470, 288));
        User_changepwd->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        User_changepwd->setFont(font);
        label = new QLabel(User_changepwd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 71, 21));
        label_2 = new QLabel(User_changepwd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(51, 131, 120, 19));
        label_3 = new QLabel(User_changepwd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 80, 71, 21));
        againlineEdit = new QLineEdit(User_changepwd);
        againlineEdit->setObjectName(QStringLiteral("againlineEdit"));
        againlineEdit->setGeometry(QRect(180, 130, 201, 25));
        newlineEdit = new QLineEdit(User_changepwd);
        newlineEdit->setObjectName(QStringLiteral("newlineEdit"));
        newlineEdit->setGeometry(QRect(180, 80, 201, 26));
        oldlineEdit = new QLineEdit(User_changepwd);
        oldlineEdit->setObjectName(QStringLiteral("oldlineEdit"));
        oldlineEdit->setGeometry(QRect(180, 30, 201, 26));
        pushButton = new QPushButton(User_changepwd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 200, 75, 31));
        pushButton_2 = new QPushButton(User_changepwd);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 200, 75, 31));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(oldlineEdit);
        label_2->setBuddy(againlineEdit);
        label_3->setBuddy(newlineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(User_changepwd);
        QObject::connect(pushButton_2, SIGNAL(clicked()), User_changepwd, SLOT(close()));

        QMetaObject::connectSlotsByName(User_changepwd);
    } // setupUi

    void retranslateUi(QDialog *User_changepwd)
    {
        User_changepwd->setWindowTitle(QApplication::translate("User_changepwd", "Dialog", 0));
        label->setText(QApplication::translate("User_changepwd", "\346\227\247\345\257\206\347\240\201\357\274\232", 0));
        label_2->setText(QApplication::translate("User_changepwd", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("User_changepwd", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        pushButton->setText(QApplication::translate("User_changepwd", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("User_changepwd", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class User_changepwd: public Ui_User_changepwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_CHANGEPWD_H
