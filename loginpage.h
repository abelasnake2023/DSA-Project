#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include "stackedwidgetmain.h"
#include <QStackedWidget>
#include "QLabel"


class LogInPage : public StackedWidgetMain
{
protected:
    QWidget* logInPage;

public slots:
    void on_btnLogInClicked();
    void on_btnSignUpClicked();

public:
    LogInPage(QStackedWidget* sWidgetMain, QWidget* logInPage);
    virtual ~LogInPage();

    void logInIconDesign(QLabel* lblLogInIcon);
};


#endif // LOGINPAGE_H
