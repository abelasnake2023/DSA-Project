#ifndef USERPAGE_H
#define USERPAGE_H

#include "userpage.h"
#include "stackedwidgetmain.h"


class UserPage : public StackedWidgetMain
{
protected:
    QWidget* userPage;

public slots:
    void on_btnSavedScheduleClicked();
    void on_btnCreateScheduleClicked();
    void on_btnBackClicked();

public:
    UserPage(QStackedWidget* sWidgetMain, QWidget* userPage);
    virtual ~UserPage();
};

#endif // USERPAGE_H
