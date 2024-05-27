#include "coursescheduletable.h"



CourseScheduleTable::~CourseScheduleTable() {

}
CourseScheduleTable::CourseScheduleTable(QStackedWidget* sWidgetMain, QStackedWidget* sWidgetInput, QTableWidget* tblCourseSch,
                                       QPushButton* btnRemoveCourseCell, QPushButton* btnSaveCourseTbl) {
    this->sWidgetInput = sWidgetInput;
    this->sWidgetMain = sWidgetMain;
    this->tblCourseSch = tblCourseSch;
    this->btnRemoveCourseCell = btnRemoveCourseCell;
    this->btnSaveCourseTbl = btnSaveCourseTbl;

    connect(this->btnRemoveCourseCell, &QPushButton::clicked, this, &CourseScheduleTable::on_btnRemoveCourseCellClicked);
    connect(this->btnSaveCourseTbl, &QPushButton::clicked, this, &CourseScheduleTable::on_btnSaveCourseTblClicked);
}


void CourseScheduleTable::on_btnSaveCourseTblClicked() {
    this->sWidgetMain->setCurrentIndex(3);
}
void CourseScheduleTable::on_btnRemoveCourseCellClicked() {
    this->schTblInfo->removePeriodOrSchId(this->tblCourseSch);
}


QStackedWidget* CourseScheduleTable::getSWidgetMain() {
    return this->sWidgetMain;
}
QStackedWidget* CourseScheduleTable::getSWidgetInput() {
    return this->sWidgetInput;
}
QTableWidget* CourseScheduleTable::getTblCourseSch() {
    return this->tblCourseSch;
}
void CourseScheduleTable::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}
