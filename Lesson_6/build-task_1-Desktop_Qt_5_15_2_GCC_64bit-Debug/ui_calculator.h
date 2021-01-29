/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *firstNum;
    QLabel *label;
    QSpinBox *secondNum;
    QLabel *label_2;
    QSpinBox *Sum;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(404, 185);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 0, 391, 151));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNum = new QSpinBox(widget);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));

        horizontalLayout->addWidget(firstNum);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        horizontalLayout_2->addLayout(horizontalLayout);

        secondNum = new QSpinBox(widget);
        secondNum->setObjectName(QString::fromUtf8("secondNum"));

        horizontalLayout_2->addWidget(secondNum);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        Sum = new QSpinBox(widget);
        Sum->setObjectName(QString::fromUtf8("Sum"));

        horizontalLayout_4->addWidget(Sum);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        splitter->addWidget(widget);
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 404, 21));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        label->setText(QCoreApplication::translate("calculator", "+", nullptr));
        label_2->setText(QCoreApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
