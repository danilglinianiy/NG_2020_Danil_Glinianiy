#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->rezult->setReadOnly(true);
    connect(ui->firstNum, &QSpinBox::textChanged, this, &MainWindow::action);
    connect(ui->secondNum, &QSpinBox::textChanged, this, &MainWindow::action);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::action()
{
    ui->rezult->setValue(ui->firstNum->value() + ui->secondNum->value());
}

