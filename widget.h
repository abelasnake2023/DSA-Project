#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "loginpage.h"
#include <QApplication>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

private:
    Ui::Widget *ui;
    LogInPage* logInPage;

    // private methods
    void structuralDesign();
    void eventConnectionLogInPage();

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
