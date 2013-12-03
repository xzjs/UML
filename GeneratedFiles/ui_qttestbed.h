/********************************************************************************
** Form generated from reading UI file 'qttestbed.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTESTBED_H
#define UI_QTTESTBED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestBedClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTestBedClass)
    {
        if (QtTestBedClass->objectName().isEmpty())
            QtTestBedClass->setObjectName(QStringLiteral("QtTestBedClass"));
        QtTestBedClass->resize(600, 400);
        menuBar = new QMenuBar(QtTestBedClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtTestBedClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTestBedClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTestBedClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtTestBedClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtTestBedClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtTestBedClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTestBedClass->setStatusBar(statusBar);

        retranslateUi(QtTestBedClass);

        QMetaObject::connectSlotsByName(QtTestBedClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtTestBedClass)
    {
        QtTestBedClass->setWindowTitle(QApplication::translate("QtTestBedClass", "QtTestBed", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTestBedClass: public Ui_QtTestBedClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTESTBED_H
