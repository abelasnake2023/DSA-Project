#include "batchscheduletable.h"


BatchScheduleTable::~BatchScheduleTable() {

}
BatchScheduleTable::BatchScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblBatchSch,
                                   QPushButton* btnRemoveBatchCell, QPushButton* btnSaveBatchTbl) {
    this->sWidgetInput = sWidgetInput;
    this->sWidgetMain = sWidgetMain;
    this->tblBatchSch = tblBatchSch;
    this->btnRemoveBatchCell = btnRemoveBatchCell;
    this->btnSaveBatchTbl = btnSaveBatchTbl;

    connect(this->btnRemoveBatchCell, &QPushButton::clicked, this, &BatchScheduleTable::on_btnRemoveBatchCellClicked);
    connect(this->btnSaveBatchTbl, &QPushButton::clicked, this, &BatchScheduleTable::on_btnSaveBatchTblClicked);
}


void BatchScheduleTable::on_btnSaveBatchTblClicked() {
    this->sWidgetMain->setCurrentIndex(3);
}
void BatchScheduleTable::on_btnRemoveBatchCellClicked() {
    this->schTblInfo->removePeriodOrSchId(this->tblBatchSch);
}


QStackedWidget* BatchScheduleTable::getSWidgetMain() {
    return this->sWidgetMain;
}
QStackedWidget* BatchScheduleTable::getSWidgetInput() {
    return this->sWidgetInput;
}
QTableWidget* BatchScheduleTable::getTblBatchSch() {
    return this->tblBatchSch;
}
void BatchScheduleTable::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}
