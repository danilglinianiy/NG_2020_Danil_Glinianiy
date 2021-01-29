/********************************************************************************
** Form generated from reading UI file 'texteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textEditor
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *textEditor)
    {
        if (textEditor->objectName().isEmpty())
            textEditor->setObjectName(QString::fromUtf8("textEditor"));
        textEditor->resize(800, 600);
        centralwidget = new QWidget(textEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 271, 121));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 160, 58, 16));
        textEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(textEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        textEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(textEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        textEditor->setStatusBar(statusbar);

        retranslateUi(textEditor);

        QMetaObject::connectSlotsByName(textEditor);
    } // setupUi

    void retranslateUi(QMainWindow *textEditor)
    {
        textEditor->setWindowTitle(QCoreApplication::translate("textEditor", "textEditor", nullptr));
        label->setText(QCoreApplication::translate("textEditor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textEditor: public Ui_textEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
