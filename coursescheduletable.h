#ifndef COURSESCHEDULETABLE_H
#define COURSESCHEDULETABLE_H



#include <QObject>
#include <QStackedWidget>
#include <QTableWidget>
#include <QPushButton>
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class CourseScheduleTable : public QObject
{
    Q_OBJECT

private:
    QStackedWidget* sWidgetMain;
    QStackedWidget* sWidgetInput;
    QTableWidget* tblCourseSch;
    QPushButton* btnRemoveCourseCell;
    QPushButton* btnSaveCourseTbl;

    // Back End
    ScheduleTableInfo* schTblInfo;

private slots:
    void on_btnSaveCourseTblClicked();
    void on_btnRemoveCourseCellClicked();

public:
    ~CourseScheduleTable();
    CourseScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblCoursePage,
                       QPushButton* btnRemoveCourseCell, QPushButton* btnSaveCourseTbl);

    QStackedWidget* getSWidgetMain();
    QStackedWidget* getSWidgetInput();
    QTableWidget* getTblCourseSch();

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
};



#endif
