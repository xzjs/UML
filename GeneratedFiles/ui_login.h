/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwdlineEdit;
    QPushButton *pushButton_2;
    QLineEdit *userlineEdit;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(357, 222);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(357, 222));
        Login->setMaximumSize(QSize(357, 222));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Login->setFont(font);
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 140, 75, 31));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(42, 41, 80, 19));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(44, 82, 60, 19));
        pwdlineEdit = new QLineEdit(Login);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(130, 80, 191, 26));
        pwdlineEdit->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 140, 75, 31));
        userlineEdit = new QLineEdit(Login);
        userlineEdit->setObjectName(QStringLiteral("userlineEdit"));
        userlineEdit->setGeometry(QRect(128, 41, 193, 26));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(userlineEdit);
        label_2->setBuddy(pwdlineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(userlineEdit, pwdlineEdit);
        QWidget::setTabOrder(pwdlineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Login);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Login, SLOT(close()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        pushButton->setText(QApplication::translate("Login", "\347\231\273\351\231\206", 0));
        label->setText(QApplication::translate("Login", "\345\255\246\345\267\245\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("Login", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
