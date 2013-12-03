/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *Adminlabel;
    QSplitter *splitter;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->setEnabled(true);
        Admin->resize(470, 288);
        Admin->setMinimumSize(QSize(470, 288));
        Admin->setMaximumSize(QSize(470, 288));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        Admin->setFont(font);
        centralWidget = new QWidget(Admin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 19));
        Adminlabel = new QLabel(centralWidget);
        Adminlabel->setObjectName(QStringLiteral("Adminlabel"));
        Adminlabel->setGeometry(QRect(100, 10, 61, 16));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(70, 40, 331, 211));
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
        Admin->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Admin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Admin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Admin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Admin->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton_3, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton);

        retranslateUi(Admin);
        QObject::connect(pushButton, SIGNAL(clicked()), Admin, SLOT(close()));

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Admin", 0));
        label->setText(QApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230\357\274\232", 0));
        Adminlabel->setText(QApplication::translate("Admin", "TextLabel", 0));
        pushButton_3->setText(QApplication::translate("Admin", "\345\255\246\345\267\245\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("Admin", "\344\271\246\345\210\212\344\277\241\346\201\257", 0));
        pushButton_5->setText(QApplication::translate("Admin", "\344\271\246\345\210\212\345\200\237\351\230\205\344\270\232\345\212\241", 0));
        pushButton_4->setText(QApplication::translate("Admin", "\344\271\246\345\210\212\351\200\276\346\234\237\347\273\223\347\256\227", 0));
        pushButton->setText(QApplication::translate("Admin", "\346\263\250\351\224\200", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
