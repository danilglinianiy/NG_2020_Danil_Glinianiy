/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *firstNum;
    QLabel *label;
    QSpinBox *secondNum;
    QLabel *label_2;
    QSpinBox *Sum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(206, 93);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 186, 34));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        firstNum = new QSpinBox(layoutWidget);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));

        horizontalLayout->addWidget(firstNum);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        horizontalLayout_2->addLayout(horizontalLayout);

        secondNum = new QSpinBox(layoutWidget);
        secondNum->setObjectName(QString::fromUtf8("secondNum"));

        horizontalLayout_2->addWidget(secondNum);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        Sum = new QSpinBox(layoutWidget);
        Sum->setObjectName(QString::fromUtf8("Sum"));

        horizontalLayout_4->addWidget(Sum);

        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 206, 22));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", nullptr));
        label->setText(QApplication::translate("calculator", "+", nullptr));
        label_2->setText(QApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
