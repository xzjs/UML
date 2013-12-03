/********************************************************************************
** Form generated from reading UI file 'admin_lb.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LB_H
#define UI_ADMIN_LB_H

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

class Ui_Admin_lb
{
public:
    QPushButton *pushButton_2;
    QLineEdit *userlineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *userlineEdit_2;
    QLabel *label_2;

    void setupUi(QDialog *Admin_lb)
    {
        if (Admin_lb->objectName().isEmpty())
            Admin_lb->setObjectName(QStringLiteral("Admin_lb"));
        Admin_lb->resize(470, 288);
        Admin_lb->setMinimumSize(QSize(470, 288));
        Admin_lb->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Admin_lb->setFont(font);
        pushButton_2 = new QPushButton(Admin_lb);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 170, 75, 31));
        userlineEdit = new QLineEdit(Admin_lb);
        userlineEdit->setObjectName(QStringLiteral("userlineEdit"));
        userlineEdit->setGeometry(QRect(146, 50, 193, 26));
        label = new QLabel(Admin_lb);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 80, 19));
        pushButton = new QPushButton(Admin_lb);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 75, 31));
        userlineEdit_2 = new QLineEdit(Admin_lb);
        userlineEdit_2->setObjectName(QStringLiteral("userlineEdit_2"));
        userlineEdit_2->setGeometry(QRect(146, 100, 193, 26));
        label_2 = new QLabel(Admin_lb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 80, 19));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(userlineEdit);
        label_2->setBuddy(userlineEdit_2);
#endif // QT_NO_SHORTCUT

        retranslateUi(Admin_lb);

        QMetaObject::connectSlotsByName(Admin_lb);
    } // setupUi

    void retranslateUi(QDialog *Admin_lb)
    {
        Admin_lb->setWindowTitle(QApplication::translate("Admin_lb", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("Admin_lb", "\350\277\230\344\271\246", 0));
        label->setText(QApplication::translate("Admin_lb", "\344\271\246\345\217\267\357\274\232", 0));
        pushButton->setText(QApplication::translate("Admin_lb", "\345\200\237\344\271\246", 0));
        label_2->setText(QApplication::translate("Admin_lb", "\345\255\246\345\267\245\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin_lb: public Ui_Admin_lb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LB_H
