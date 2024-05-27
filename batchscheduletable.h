#ifndef BATCHSCHEDULETABLE_H
#define BATCHSCHEDULETABLE_H

#include <QObject>
#include <QStackedWidget>
#include <QTableWidget>
#include <QPushButton>
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class BatchScheduleTable : public QObject
{
    Q_OBJECT

private:
    QStackedWidget* sWidgetMain;
    QStackedWidget* sWidgetInput;
    QTableWidget* tblBatchSch;
    QPushButton* btnRemoveBatchCell;
    QPushButton* btnSaveBatchTbl;

    // Back End
    ScheduleTableInfo* schTblInfo;

private slots:
    void on_btnSaveBatchTblClicked();
    void on_btnRemoveBatchCellClicked();

public:
    ~BatchScheduleTable();
    BatchScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblBatchPage,
                     QPushButton* btnRemoveBatchCell, QPushButton* btnSaveBatchTbl);

    QStackedWidget* getSWidgetMain();
    QStackedWidget* getSWidgetInput();
    QTableWidget* getTblBatchSch();

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
};

#endif
