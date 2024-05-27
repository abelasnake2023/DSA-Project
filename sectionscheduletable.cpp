#include "sectionscheduletable.h"




SectionScheduleTable::~SectionScheduleTable() {

}
SectionScheduleTable::SectionScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblSectionSch,
                                         QPushButton* btnRemoveSectionCell, QPushButton* btnSaveSectionTbl) {
    this->sWidgetInput = sWidgetInput;
    this->sWidgetMain = sWidgetMain;
    this->tblSectionSch = tblSectionSch;
    this->btnRemoveSectionCell = btnRemoveSectionCell;
    this->btnSaveSectionTbl = btnSaveSectionTbl;

    connect(this->btnRemoveSectionCell, &QPushButton::clicked, this, &SectionScheduleTable::on_btnRemoveSectionCellClicked);
    connect(this->btnSaveSectionTbl, &QPushButton::clicked, this, &SectionScheduleTable::on_btnSaveSectionTblClicked);
}


void SectionScheduleTable::on_btnSaveSectionTblClicked() {
    this->sWidgetMain->setCurrentIndex(3);
}
void SectionScheduleTable::on_btnRemoveSectionCellClicked() {
    this->schTblInfo->removePeriodOrSchId(this->tblSectionSch);
}


QStackedWidget* SectionScheduleTable::getSWidgetMain() {
    return this->sWidgetMain;
}
QStackedWidget* SectionScheduleTable::getSWidgetInput() {
    return this->sWidgetInput;
}
QTableWidget* SectionScheduleTable::getTblSectionSch() {
    return this->tblSectionSch;
}
void SectionScheduleTable::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}

