#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class textEditor; }
QT_END_NAMESPACE

class textEditor : public QMainWindow
{
    Q_OBJECT

public:
    textEditor(QWidget *parent = nullptr);
    ~textEditor();

private slots:
    void counter();

private:
    Ui::textEditor *ui;
};
#endif // TEXTEDITOR_H
