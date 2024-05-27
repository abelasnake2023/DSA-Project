#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "loginpage.h"
#include "signuppage.h"
#include "inputpage.h"
#include "userpage.h"
#include "depscheduletable.h"
#include "batchscheduletable.h"
#include "coursescheduletable.h"
#include "sectionscheduletable.h"
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
    static DepScheduleTable* depSchTable;
    static BatchScheduleTable* batchSchTable;
    static CourseScheduleTable* courseSchTable;
    static SectionScheduleTable* sectionSchTable;


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


    static DepScheduleTable* getDepSchTable();
    static BatchScheduleTable* getBatchSchTable();
    static CourseScheduleTable* getCourseSchTable();
    static SectionScheduleTable* getScheduleTable();
};


#endif
