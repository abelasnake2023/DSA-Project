#include "inputpage.h"




InputPage::InputPage(QStackedWidget* sWidgetMain, QWidget* inputPage, QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedulePage,
                     QWidget* depPage)
    : StackedWidgetMain(sWidgetMain) {
    this->inputPage = inputPage;
    this->sWidgetInputPage = sWidgetInputPage;

    this->csp = new CreateSchedulePage(sWidgetInputPage, sWidgetCreateSchedulePage);
    this->dp = new DepPage(sWidgetInputPage, depPage);

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
}

InputPage::~InputPage() {
    delete this->inputPage;
    this->inputPage = nullptr;
    delete this->sWidgetInputPage;
    this->sWidgetInputPage = nullptr;
    delete csp;
    this->csp = nullptr;
    delete dp;
    this->dp = nullptr;
}

void InputPage::on_btnBackClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["user_page"]);
}

void InputPage::allWidgetInCreateSchedulePage(
                                              /* scheduleTimeIntervalPage */
                                              QPushButton* btnBackScheduleTimeInterval, QPushButton* btnNextScheduleTimeInterval, QPushButton* btnSetTimeInterval,
                                              QLabel* lblTimeInterval, QLabel* lblTimeIntervalMin, QLineEdit* txtBoxTimeInterval,
                                              QPushButton* btnAddScheduleTimeInterval, QLabel* lblPeriodStartingTime, QTimeEdit* tEditPeriodStartingTime,


                                               /* scheduleTableStructPage */
                                              QPushButton* btnBackScheduleTableStruct, QPushButton* btnRemoveScheduleTableStruct,
                                              QPushButton* btnSaveScheduleTableStruct, QTableWidget* tblScheduleTableStruct, QTableWidget* tblPeriodTimeInterval
                                              ) {

    this->csp->setAllItsWidget(
                               btnBackScheduleTimeInterval, btnNextScheduleTimeInterval, btnSetTimeInterval, lblTimeInterval, lblTimeIntervalMin, txtBoxTimeInterval,
                               btnAddScheduleTimeInterval, lblPeriodStartingTime, tEditPeriodStartingTime, btnBackScheduleTableStruct,
                               btnRemoveScheduleTableStruct, btnSaveScheduleTableStruct, tblScheduleTableStruct, tblPeriodTimeInterval
        );
}

void InputPage::allWidgetInDepPage(
                                   QPushButton* btnAPolicy, QPushButton* btnAddDep, QPushButton* btnBatch, QPushButton* btnDelDep, QPushButton* btnDepConstraint,
                                   QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps,
                                   QPushButton* btnBackDepPage
                                  ) {

    this->dp->setAllItsWidget(btnAPolicy, btnAddDep, btnBatch, btnDelDep, btnDepConstraint, btnEditDep, btnOutputSchedule, btnTeacher, vLayoutContDeps
                              , btnBackDepPage);
}

CreateSchedulePage* InputPage::getCSP() {
    return this->csp;
}

DepPage* InputPage::getDP() {
    return this->dp;
}
