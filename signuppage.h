#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include "stackedwidgetmain.h"

class SignUpPage : public StackedWidgetMain
{
protected:
    QWidget* signUpPage;

public slots:
    void on_btnCreateAccountClicked();
    void on_btnBackClicked();

public:
    SignUpPage(QStackedWidget* sWidgetMain, QWidget* signUpPage);
    virtual ~SignUpPage();
};

#endif // SIGNUPPAGE_H
