/********************************************************************************
** Form generated from reading UI file 'user_reserve.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_RESERVE_H
#define UI_USER_RESERVE_H

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

class Ui_User_reserve
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *userlineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *User_reserve)
    {
        if (User_reserve->objectName().isEmpty())
            User_reserve->setObjectName(QStringLiteral("User_reserve"));
        User_reserve->resize(470, 288);
        User_reserve->setMinimumSize(QSize(470, 288));
        User_reserve->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        User_reserve->setFont(font);
        pushButton = new QPushButton(User_reserve);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 170, 75, 31));
        label = new QLabel(User_reserve);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(74, 70, 80, 19));
        userlineEdit = new QLineEdit(User_reserve);
        userlineEdit->setObjectName(QStringLiteral("userlineEdit"));
        userlineEdit->setGeometry(QRect(160, 70, 193, 26));
        pushButton_2 = new QPushButton(User_reserve);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 170, 75, 31));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(userlineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(User_reserve);
        QObject::connect(pushButton_2, SIGNAL(clicked()), User_reserve, SLOT(close()));

        QMetaObject::connectSlotsByName(User_reserve);
    } // setupUi

    void retranslateUi(QDialog *User_reserve)
    {
        User_reserve->setWindowTitle(QApplication::translate("User_reserve", "Dialog", 0));
        pushButton->setText(QApplication::translate("User_reserve", "\351\242\204\347\272\246", 0));
        label->setText(QApplication::translate("User_reserve", "\344\271\246\345\217\267\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("User_reserve", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class User_reserve: public Ui_User_reserve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_RESERVE_H
