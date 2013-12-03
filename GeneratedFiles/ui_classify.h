/********************************************************************************
** Form generated from reading UI file 'classify.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSIFY_H
#define UI_CLASSIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Classify
{
public:
    QFrame *line;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Classify)
    {
        if (Classify->objectName().isEmpty())
            Classify->setObjectName(QStringLiteral("Classify"));
        Classify->resize(628, 534);
        Classify->setMinimumSize(QSize(628, 534));
        Classify->setMaximumSize(QSize(628, 534));
        line = new QFrame(Classify);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 100, 631, 20));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        line->setFont(font);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(Classify);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 120, 591, 401));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(10);
        tableWidget->setFont(font1);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setRowCount(100);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(132);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(21);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setMinimumSectionSize(21);
        layoutWidget = new QWidget(Classify);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 41, 611, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(12);
        pushButton_7->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_12);

        layoutWidget1 = new QWidget(Classify);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 73, 611, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(layoutWidget1);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(layoutWidget1);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(layoutWidget1);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(layoutWidget1);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(layoutWidget1);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(layoutWidget1);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_18);

        layoutWidget2 = new QWidget(Classify);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(9, 9, 611, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font2);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font2);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font2);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font2);

        horizontalLayout->addWidget(pushButton_6);


        retranslateUi(Classify);

        QMetaObject::connectSlotsByName(Classify);
    } // setupUi

    void retranslateUi(QDialog *Classify)
    {
        Classify->setWindowTitle(QApplication::translate("Classify", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Classify", "\344\271\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Classify", "\344\271\246\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Classify", "\344\275\234\350\200\205", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Classify", "\345\207\272\347\211\210\347\244\276", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_7->setText(QApplication::translate("Classify", "\347\224\237\347\211\251", 0));
        pushButton_8->setText(QApplication::translate("Classify", "\345\214\273\350\215\257", 0));
        pushButton_9->setText(QApplication::translate("Classify", "\351\243\237\345\223\201", 0));
        pushButton_10->setText(QApplication::translate("Classify", "\345\206\233\344\272\213", 0));
        pushButton_11->setText(QApplication::translate("Classify", "\345\267\245\344\270\232", 0));
        pushButton_12->setText(QApplication::translate("Classify", "\345\206\234\344\270\232", 0));
        pushButton_13->setText(QApplication::translate("Classify", "\346\263\225\345\276\213", 0));
        pushButton_14->setText(QApplication::translate("Classify", "\345\256\227\346\225\231", 0));
        pushButton_15->setText(QApplication::translate("Classify", "\346\224\277\346\262\273", 0));
        pushButton_16->setText(QApplication::translate("Classify", "\347\273\217\346\265\216", 0));
        pushButton_17->setText(QApplication::translate("Classify", "\346\226\207\345\255\246", 0));
        pushButton_18->setText(QApplication::translate("Classify", "\346\210\217\346\233\262", 0));
        pushButton->setText(QApplication::translate("Classify", "IT", 0));
        pushButton_2->setText(QApplication::translate("Classify", "\346\225\260\345\255\246", 0));
        pushButton_3->setText(QApplication::translate("Classify", "\347\211\251\347\220\206", 0));
        pushButton_4->setText(QApplication::translate("Classify", "\345\214\226\345\255\246", 0));
        pushButton_5->setText(QApplication::translate("Classify", "\345\216\206\345\217\262", 0));
        pushButton_6->setText(QApplication::translate("Classify", "\345\234\260\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class Classify: public Ui_Classify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSIFY_H
