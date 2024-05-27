#ifndef SECTIONSCHEDULETABLE_H
#define SECTIONSCHEDULETABLE_H



#include <QObject>
#include <QStackedWidget>
#include <QTableWidget>
#include <QPushButton>
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class SectionScheduleTable : public QObject
{
    Q_OBJECT

private:
    QStackedWidget* sWidgetMain;
    QStackedWidget* sWidgetInput;
    QTableWidget* tblSectionSch;
    QPushButton* btnRemoveSectionCell;
    QPushButton* btnSaveSectionTbl;

    // Back End
    ScheduleTableInfo* schTblInfo;

private slots:
    void on_btnSaveSectionTblClicked();
    void on_btnRemoveSectionCellClicked();

public:
    ~SectionScheduleTable();
    SectionScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblSectionPage,
                        QPushButton* btnRemoveSectionCell, QPushButton* btnSaveSectionTbl);

    QStackedWidget* getSWidgetMain();
    QStackedWidget* getSWidgetInput();
    QTableWidget* getTblSectionSch();

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
};



#endif
