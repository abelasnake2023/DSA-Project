#ifndef DEPSCHEDULETABLE_H
#define DEPSCHEDULETABLE_H


#include <QObject>
#include <QStackedWidget>
#include <QTableWidget>
#include <QPushButton>
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class DepScheduleTable : public QObject
{
    Q_OBJECT

private:
    QStackedWidget* sWidgetMain;
    QStackedWidget* sWidgetInput;
    QTableWidget* tblDepSch;
    QPushButton* btnRemoveDepCell;
    QPushButton* btnSaveDepTbl;

    // Back End
    ScheduleTableInfo* schTblInfo;

private slots:
    void on_btnSaveDepTblClicked();
    void on_btnRemoveDepCellClicked();

public:
    ~DepScheduleTable();
    DepScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblDepSch,
                     QPushButton* btnRemoveDepCell, QPushButton* btnSaveDepTbl);

    QStackedWidget* getSWidgetMain();
    QStackedWidget* getSWidgetInput();
    QTableWidget* getTblDepSch();

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
};


#endif
