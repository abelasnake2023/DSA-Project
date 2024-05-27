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
#include "batchpage.h"
#include "coursescheduletable.h"
#include "coursepage.h"
#include "sectionpage.h"



class InputPage : public StackedWidgetMain
{
protected:
    QWidget* inputPage;
    QStackedWidget* sWidgetInputPage;
    std::map<std::string, int> pageIndexInputPage;
    CreateSchedulePage* csp;
    DepPage* dp;
    BatchPage* batchPage;
    CoursePage* coursePage;
    SectionPage* sectionPage;


public slots:
    void on_btnBackClicked();

public:
    InputPage(QStackedWidget* sWidgetMain, QWidget* inputPage, QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedulePage,
              QWidget* depPage, DepScheduleTable* depSchTable, QWidget* batchPage, BatchScheduleTable* batchSchTable,
              QWidget* coursePage, CourseScheduleTable* courseSchTbl,
              QWidget* sectionPage, SectionScheduleTable* sectionSchTbl);
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
        QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps);
    void allWidgetInBatchPage(
        QVBoxLayout* batchVLayout, QPushButton* btnAddBatchPage, QPushButton* btnBackBatchPage, QPushButton* btnConstBatchPage,
        QPushButton* btnEditCourse, QPushButton* btnEditSection, QPushButton* btnRemBatchPage
        );
    void allWidgetInCoursePage(
        QVBoxLayout* courseVLayout, QPushButton* btnAddCoursePage, QPushButton* btnBackCoursePage, QPushButton* btnConstCoursePage,
        QPushButton* btnRemCoursePage
        );
    void allWidgetInSectionPage(
        QPushButton* btnAddSectionPage, QPushButton* btnBackSectionPage, QPushButton* btnConstSectionPage,
        QPushButton* btnRemSectionPage, QVBoxLayout* vLayoutSectionBoxAdded,
        QVBoxLayout* vLayoutCourseSectionBox, QPushButton* btnDiscardSecPage
        );


    CreateSchedulePage* getCSP();
    DepPage* getDP();
    BatchPage* getBatchPage();
    CoursePage* getCoursePage();
    SectionPage* getSectionPage();
};


#endif
