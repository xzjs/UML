/********************************************************************************
** Form generated from reading UI file 'admin_binfo.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_BINFO_H
#define UI_ADMIN_BINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Admin_binfo
{
public:
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *userlineEdithao;
    QPushButton *apushButton;
    QPushButton *spushButton;
    QLineEdit *userlineEditzuo;
    QLineEdit *userlineEditming;
    QLineEdit *userlineEditchu;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *dpushButton;
    QComboBox *comboBox;
    QLabel *label_9;

    void setupUi(QDialog *Admin_binfo)
    {
        if (Admin_binfo->objectName().isEmpty())
            Admin_binfo->setObjectName(QStringLiteral("Admin_binfo"));
        Admin_binfo->resize(470, 288);
        Admin_binfo->setMinimumSize(QSize(470, 288));
        Admin_binfo->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Admin_binfo->setFont(font);
        textEdit = new QTextEdit(Admin_binfo);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 201, 261));
        label_2 = new QLabel(Admin_binfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 30, 51, 19));
        label_5 = new QLabel(Admin_binfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 70, 51, 19));
        userlineEdithao = new QLineEdit(Admin_binfo);
        userlineEdithao->setObjectName(QStringLiteral("userlineEdithao"));
        userlineEdithao->setGeometry(QRect(270, 30, 193, 26));
        apushButton = new QPushButton(Admin_binfo);
        apushButton->setObjectName(QStringLiteral("apushButton"));
        apushButton->setGeometry(QRect(310, 240, 75, 31));
        spushButton = new QPushButton(Admin_binfo);
        spushButton->setObjectName(QStringLiteral("spushButton"));
        spushButton->setGeometry(QRect(230, 240, 75, 31));
        userlineEditzuo = new QLineEdit(Admin_binfo);
        userlineEditzuo->setObjectName(QStringLiteral("userlineEditzuo"));
        userlineEditzuo->setGeometry(QRect(270, 110, 193, 26));
        userlineEditming = new QLineEdit(Admin_binfo);
        userlineEditming->setObjectName(QStringLiteral("userlineEditming"));
        userlineEditming->setGeometry(QRect(270, 70, 193, 26));
        userlineEditchu = new QLineEdit(Admin_binfo);
        userlineEditchu->setObjectName(QStringLiteral("userlineEditchu"));
        userlineEditchu->setGeometry(QRect(270, 150, 193, 26));
        label_6 = new QLabel(Admin_binfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 150, 61, 19));
        label_8 = new QLabel(Admin_binfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 110, 51, 19));
        dpushButton = new QPushButton(Admin_binfo);
        dpushButton->setObjectName(QStringLiteral("dpushButton"));
        dpushButton->setGeometry(QRect(390, 240, 75, 31));
        comboBox = new QComboBox(Admin_binfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 190, 193, 26));
        label_9 = new QLabel(Admin_binfo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 190, 51, 19));
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(userlineEdithao);
        label_5->setBuddy(userlineEditming);
        label_6->setBuddy(userlineEditchu);
        label_8->setBuddy(userlineEditzuo);
        label_9->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(userlineEdithao, userlineEditming);
        QWidget::setTabOrder(userlineEditming, userlineEditzuo);
        QWidget::setTabOrder(userlineEditzuo, userlineEditchu);
        QWidget::setTabOrder(userlineEditchu, spushButton);
        QWidget::setTabOrder(spushButton, apushButton);
        QWidget::setTabOrder(apushButton, dpushButton);
        QWidget::setTabOrder(dpushButton, textEdit);

        retranslateUi(Admin_binfo);

        QMetaObject::connectSlotsByName(Admin_binfo);
    } // setupUi

    void retranslateUi(QDialog *Admin_binfo)
    {
        Admin_binfo->setWindowTitle(QApplication::translate("Admin_binfo", "Dialog", 0));
        label_2->setText(QApplication::translate("Admin_binfo", "\344\271\246\345\217\267\357\274\232", 0));
        label_5->setText(QApplication::translate("Admin_binfo", "BookName\357\274\232", 0));
        apushButton->setText(QApplication::translate("Admin_binfo", "\346\267\273\345\212\240", 0));
        spushButton->setText(QApplication::translate("Admin_binfo", "\346\237\245\346\211\276", 0));
        label_6->setText(QApplication::translate("Admin_binfo", "Publish\357\274\232", 0));
        label_8->setText(QApplication::translate("Admin_binfo", "Editor\357\274\232", 0));
        dpushButton->setText(QApplication::translate("Admin_binfo", "\345\210\240\351\231\244", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Admin_binfo", "\350\256\241\347\256\227\346\234\272", 0)
         << QApplication::translate("Admin_binfo", "\347\211\251\347\220\206", 0)
         << QApplication::translate("Admin_binfo", "\345\256\227\346\225\231", 0)
         << QApplication::translate("Admin_binfo", "\346\224\277\346\262\273", 0)
         << QApplication::translate("Admin_binfo", "\346\263\225\345\276\213", 0)
         << QApplication::translate("Admin_binfo", "\345\216\206\345\217\262", 0)
         << QApplication::translate("Admin_binfo", "\345\234\260\347\220\206", 0)
         << QApplication::translate("Admin_binfo", "\347\224\237\347\211\251", 0)
         << QApplication::translate("Admin_binfo", "\345\267\245\344\270\232", 0)
         << QApplication::translate("Admin_binfo", "\345\206\234\344\270\232", 0)
         << QApplication::translate("Admin_binfo", "\345\214\273\350\215\257", 0)
         << QApplication::translate("Admin_binfo", "\351\243\237\345\223\201", 0)
         << QApplication::translate("Admin_binfo", "\345\206\233\344\272\213", 0)
         << QApplication::translate("Admin_binfo", "\346\225\260\345\255\246", 0)
         << QApplication::translate("Admin_binfo", "\345\214\226\345\255\246", 0)
         << QApplication::translate("Admin_binfo", "\345\260\217\350\257\264", 0)
         << QApplication::translate("Admin_binfo", "\346\210\217\346\233\262", 0)
        );
        label_9->setText(QApplication::translate("Admin_binfo", "\347\247\215\347\261\273\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin_binfo: public Ui_Admin_binfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_BINFO_H
