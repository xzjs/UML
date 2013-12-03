/********************************************************************************
** Form generated from reading UI file 'admin_sinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SINFO_H
#define UI_ADMIN_SINFO_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_sinfo
{
public:
    QTextEdit *textEdit;
    QLineEdit *userlineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *userlineEdit_2;
    QLineEdit *userlineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *Admin_sinfo)
    {
        if (Admin_sinfo->objectName().isEmpty())
            Admin_sinfo->setObjectName(QStringLiteral("Admin_sinfo"));
        Admin_sinfo->resize(470, 288);
        Admin_sinfo->setMinimumSize(QSize(470, 288));
        Admin_sinfo->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Admin_sinfo->setFont(font);
        textEdit = new QTextEdit(Admin_sinfo);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 201, 261));
        QFont font1;
        font1.setPointSize(9);
        textEdit->setFont(font1);
        userlineEdit = new QLineEdit(Admin_sinfo);
        userlineEdit->setObjectName(QStringLiteral("userlineEdit"));
        userlineEdit->setGeometry(QRect(270, 40, 193, 26));
        label_2 = new QLabel(Admin_sinfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 40, 61, 19));
        pushButton_2 = new QPushButton(Admin_sinfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 190, 101, 41));
        label_8 = new QLabel(Admin_sinfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 120, 51, 19));
        label_5 = new QLabel(Admin_sinfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 80, 51, 19));
        userlineEdit_2 = new QLineEdit(Admin_sinfo);
        userlineEdit_2->setObjectName(QStringLiteral("userlineEdit_2"));
        userlineEdit_2->setGeometry(QRect(270, 120, 193, 26));
        userlineEdit_3 = new QLineEdit(Admin_sinfo);
        userlineEdit_3->setObjectName(QStringLiteral("userlineEdit_3"));
        userlineEdit_3->setGeometry(QRect(270, 80, 193, 26));
        pushButton = new QPushButton(Admin_sinfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 190, 101, 41));
        pushButton_3 = new QPushButton(Admin_sinfo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 240, 101, 41));
        pushButton_4 = new QPushButton(Admin_sinfo);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 240, 101, 41));
        layoutWidget = new QWidget(Admin_sinfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 160, 201, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(userlineEdit);
        label_8->setBuddy(userlineEdit_2);
        label_5->setBuddy(userlineEdit_3);
#endif // QT_NO_SHORTCUT

        retranslateUi(Admin_sinfo);

        QMetaObject::connectSlotsByName(Admin_sinfo);
    } // setupUi

    void retranslateUi(QDialog *Admin_sinfo)
    {
        Admin_sinfo->setWindowTitle(QApplication::translate("Admin_sinfo", "Dialog", 0));
        label_2->setText(QApplication::translate("Admin_sinfo", "\345\255\246\345\267\245\345\217\267\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("Admin_sinfo", "\346\237\245\346\211\276", 0));
        label_8->setText(QApplication::translate("Admin_sinfo", "\345\257\206\347\240\201", 0));
        label_5->setText(QApplication::translate("Admin_sinfo", "\345\247\223\345\220\215", 0));
        pushButton->setText(QApplication::translate("Admin_sinfo", "\346\267\273\345\212\240", 0));
        pushButton_3->setText(QApplication::translate("Admin_sinfo", "\351\224\200\345\217\267", 0));
        pushButton_4->setText(QApplication::translate("Admin_sinfo", "\346\233\264\346\226\260", 0));
        radioButton->setText(QApplication::translate("Admin_sinfo", "\347\256\241\347\220\206\345\221\230", 0));
        radioButton_2->setText(QApplication::translate("Admin_sinfo", "\345\255\246\345\267\245", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin_sinfo: public Ui_Admin_sinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SINFO_H
