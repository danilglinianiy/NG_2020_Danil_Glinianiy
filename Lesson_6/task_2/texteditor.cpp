#include "texteditor.h"
#include "ui_texteditor.h"

textEditor::textEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::textEditor)
{
    ui->setupUi(this);

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &textEditor::counter);
    connect(ui->label, &QLabel::windowIconTextChanged, this, &textEditor::counter);
}

textEditor::~textEditor()
{
    delete ui;
}

void textEditor::counter()
{
    char str[1000];
    double word = 0;
    double i = 1;
    QString newLine;
    bool condition1 = false, condition2 = false;

    word = ui->lineEdit->text().toDouble();


    while(str[i] !='\0'){
        condition1 = ((str[i] >= 'A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z'));
        condition2 = !(((str[i+1] >= 'A') && (str[i+1]<='Z')) || ((str[i+1]>='a') && (str[i+1]<='z')) );
        if ((condition1) && (condition2))
            word++;
        i++;
    }

}

