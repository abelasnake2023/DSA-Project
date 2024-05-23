#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "loginpage.h"
#include "signuppage.h"
#include "inputpage.h"
#include "userpage.h"
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
    SignUpPage* signUpPage;
    UserPage* userPage;
    InputPage* inputPage;


    // private methods
    void structuralDesign();
    void initialOverallWork();
    void eventConnectionLogInPage();
    void eventConnectionSignUpPage();
    void eventConnectionUserPage();
    void eventConnectionInputPage();

public:
    static Ui::Widget *anotherUiPointer;
    Widget(QWidget *parent = nullptr);
    ~Widget();
};


#endif // WIDGET_H
