/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *multiplyButton;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *divideButton;
    QLineEdit *lineEdit;
    QPushButton *rezultButton;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_0;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(280, 302);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));
        multiplyButton->setGeometry(QRect(140, 30, 71, 51));
        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setGeometry(QRect(0, 30, 71, 51));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setGeometry(QRect(70, 30, 71, 51));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName(QString::fromUtf8("divideButton"));
        divideButton->setGeometry(QRect(210, 30, 71, 51));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 281, 31));
        rezultButton = new QPushButton(centralwidget);
        rezultButton->setObjectName(QString::fromUtf8("rezultButton"));
        rezultButton->setGeometry(QRect(210, 80, 71, 201));
        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setGeometry(QRect(0, 180, 71, 51));
        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setGeometry(QRect(70, 180, 71, 51));
        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setGeometry(QRect(140, 180, 71, 51));
        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setGeometry(QRect(0, 80, 71, 51));
        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setGeometry(QRect(70, 80, 71, 51));
        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setGeometry(QRect(140, 80, 71, 51));
        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setGeometry(QRect(0, 130, 71, 51));
        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setGeometry(QRect(70, 130, 71, 51));
        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setGeometry(QRect(140, 130, 71, 51));
        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setGeometry(QRect(0, 230, 211, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 280, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        multiplyButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        rezultButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
