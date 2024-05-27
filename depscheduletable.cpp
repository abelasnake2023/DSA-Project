#include "depscheduletable.h"



DepScheduleTable::~DepScheduleTable() {
    try {
        delete this->tblDepSch;
        delete this->btnSaveDepTbl;
        delete this->btnRemoveDepCell;
    }
    catch (const std::exception& ex) {
        qDebug() << ex.what() << "\n\n";
        return;
    }
}
DepScheduleTable::DepScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblDepSch,
                                   QPushButton* btnRemoveDepCell, QPushButton* btnSaveDepTbl) {
    this->sWidgetInput = sWidgetInput;
    this->sWidgetMain = sWidgetMain;
    this->tblDepSch = tblDepSch;
    this->btnRemoveDepCell = btnRemoveDepCell;
    this->btnSaveDepTbl = btnSaveDepTbl;

    connect(this->btnRemoveDepCell, &QPushButton::clicked, this, &DepScheduleTable::on_btnRemoveDepCellClicked);
    connect(this->btnSaveDepTbl, &QPushButton::clicked, this, &DepScheduleTable::on_btnSaveDepTblClicked);
}


void DepScheduleTable::on_btnSaveDepTblClicked() {
    this->sWidgetMain->setCurrentIndex(3);
}
void DepScheduleTable::on_btnRemoveDepCellClicked() {
    this->schTblInfo->removePeriodOrSchId(this->tblDepSch);
}


QStackedWidget* DepScheduleTable::getSWidgetMain() {
    return this->sWidgetMain;
}
QStackedWidget* DepScheduleTable::getSWidgetInput() {
    return this->sWidgetInput;
}
QTableWidget* DepScheduleTable::getTblDepSch() {
    return this->tblDepSch;
}
void DepScheduleTable::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}
