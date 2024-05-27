#include "inputpage.h"




InputPage::InputPage(QStackedWidget* sWidgetMain, QWidget* inputPage, QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedulePage,
                     QWidget* depPage, DepScheduleTable* depSchTable, QWidget* batchPage, BatchScheduleTable* batchSchTable,
                     QWidget* coursePage, CourseScheduleTable* courseSchTbl,
                     QWidget* sectionPage, SectionScheduleTable* sectionSchTbl)
    : StackedWidgetMain(sWidgetMain) {
    this->inputPage = inputPage;
    this->sWidgetInputPage = sWidgetInputPage;

    this->csp = new CreateSchedulePage(sWidgetInputPage, sWidgetCreateSchedulePage);
    this->dp = new DepPage(sWidgetInputPage, depPage, depSchTable);
    this->batchPage = new BatchPage(sWidgetInputPage, batchPage, batchSchTable);
    this->coursePage = new CoursePage(sWidgetInputPage, coursePage, courseSchTbl);
    this->sectionPage = new SectionPage(sWidgetInputPage, sectionPage, sectionSchTbl);

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
    this->pageIndexInputPage["batchPage"] = 2;
    this->pageIndexInputPage["coursePage"] = 3;
    this->pageIndexInputPage["sectionPage"] = 4;
}

InputPage::~InputPage() {
    delete this->coursePage;
    delete this->sectionPage;
    delete this->batchPage;
    this->batchPage = nullptr;
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
                                   QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps
                                   ) {
    this->dp->setAllItsWidget(btnAPolicy, btnAddDep, btnBatch, btnDelDep, btnDepConstraint, btnEditDep, btnOutputSchedule, btnTeacher, vLayoutContDeps);
}

void InputPage::allWidgetInBatchPage(
    QVBoxLayout* batchVLayout, QPushButton* btnAddBatchPage, QPushButton* btnBackBatchPage, QPushButton* btnConstBatchPage,
    QPushButton* btnEditCourse, QPushButton* btnEditSection, QPushButton* btnRemBatchPage
    ) {
    this->batchPage->setAllItsWidget(batchVLayout, btnAddBatchPage, btnBackBatchPage, btnConstBatchPage, btnEditCourse, btnEditSection, btnRemBatchPage);
}

void InputPage::allWidgetInCoursePage(
    QVBoxLayout* courseVLayout, QPushButton* btnAddCoursePage, QPushButton* btnBackCoursePage, QPushButton* btnConstCoursePage,
    QPushButton* btnRemCoursePage
    ) {
    this->coursePage->setAllItsWidget(courseVLayout, btnAddCoursePage, btnBackCoursePage, btnConstCoursePage, btnRemCoursePage);
}

void InputPage::allWidgetInSectionPage(
    QPushButton* btnAddSectionPage, QPushButton* btnBackSectionPage, QPushButton* btnConstSectionPage,
    QPushButton* btnRemSectionPage, QVBoxLayout* vLayoutSectionBoxAdded,
    QVBoxLayout* vLayoutCourseSectionBox, QPushButton* btnDiscardSecPage
    ) {
    this->sectionPage->setAllItsWidget(btnAddSectionPage, btnBackSectionPage,
                                       btnConstSectionPage, btnRemSectionPage,
                                       vLayoutSectionBoxAdded, vLayoutCourseSectionBox,
                                       btnDiscardSecPage);
}


CreateSchedulePage* InputPage::getCSP() {
    return this->csp;
}
DepPage* InputPage::getDP() {
    return this->dp;
}
BatchPage* InputPage::getBatchPage() {
    return this->batchPage;
}
CoursePage* InputPage::getCoursePage() {
    return this->coursePage;
}
SectionPage* InputPage::getSectionPage() {
    return this->sectionPage;
}
