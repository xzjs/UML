/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *label;
    QSplitter *splitter;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QStringLiteral("User"));
        User->resize(470, 288);
        User->setMinimumSize(QSize(470, 288));
        User->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        User->setFont(font);
        label = new QLabel(User);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 19));
        splitter = new QSplitter(User);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(70, 50, 331, 211));
        splitter->setOrientation(Qt::Vertical);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        splitter->addWidget(pushButton_3);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton_5 = new QPushButton(splitter);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        splitter->addWidget(pushButton_5);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        splitter->addWidget(pushButton_4);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        label_2 = new QLabel(User);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 10, 211, 19));

        retranslateUi(User);
        QObject::connect(pushButton, SIGNAL(clicked()), User, SLOT(close()));

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QApplication::translate("User", "Dialog", 0));
        label->setText(QApplication::translate("User", "\345\255\246\345\267\245\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("User", "\350\257\201\344\273\266\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("User", "\345\200\237\351\230\205\344\277\241\346\201\257", 0));
        pushButton_5->setText(QApplication::translate("User", "\351\242\204\347\272\246\344\271\246\345\210\212", 0));
        pushButton_4->setText(QApplication::translate("User", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("User", "\346\263\250\351\224\200", 0));
        label_2->setText(QApplication::translate("User", "\345\255\246\345\267\245\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
