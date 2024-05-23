#ifndef INPUTPAGE_H
#define INPUTPAGE_H


#include "stackedwidgetmain.h"
#include "createschedulepage.h"
#include "deppage.h"
#include <QStackedWidget>
#include <map>
#include <string>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTableWidget>
#include <QTimeEdit>
#include <QVBoxLayout>


class InputPage : public StackedWidgetMain
{
protected:
    QWidget* inputPage;
    QStackedWidget* sWidgetInputPage;
    std::map<std::string, int> pageIndexInputPage;
    CreateSchedulePage* csp;
    DepPage* dp;


public slots:
    void on_btnBackClicked();

public:
    InputPage(QStackedWidget* sWidgetMain, QWidget* inputPage, QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedulePage,
              QWidget* depPage);
    virtual ~InputPage();

    void allWidgetInCreateSchedulePage(
        /* scheduleTimeIntervalPage */
        QPushButton* btnBackScheduleTimeInterval, QPushButton* btnNextScheduleTimeInterval, QPushButton* btnSetTimeInterval,
        QLabel* lblTimeInterval, QLabel* lblTimeIntervalMin, QLineEdit* txtBoxTimeInterval,
        QPushButton* btnAddScheduleTimeInterval, QLabel* lblPeriodStartingTime, QTimeEdit* tEditEditPeriodStartingTime,


        /* scheduleTableStructPage */
        QPushButton* btnBackScheduleTableStruct, QPushButton* btnRemoveScheduleTableStruct,
        QPushButton* btnSaveScheduleTableStruct, QTableWidget* tblScheduleTableStruct, QTableWidget* tblPeriodTimeInterval
        );
    void allWidgetInDepPage(
        QPushButton* btnAPolicy, QPushButton* btnAddDep, QPushButton* btnBatch, QPushButton* btnDelDep, QPushButton* btnDepConstraint,
        QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps,
        QPushButton* btnBackDepPage
        );

    CreateSchedulePage* getCSP();
    DepPage* getDP();
};


#endif
