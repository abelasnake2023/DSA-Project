#include "batchpage.h"


QVBoxLayout* BatchPage::staticBatchVLayout = nullptr;
DepBox* BatchPage::parentDepBox = nullptr;
BatchPage::BatchPage(QStackedWidget* sWidgetInputPage, QWidget* batchPage, BatchScheduleTable* batchSchTbl)
    : BatchPage()
{
    this->batchSchTbl = batchSchTbl;
    this->sWidgetInputPage = sWidgetInputPage;
    this->batchPage = batchPage;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
    this->pageIndexInputPage["batchPage"] = 2;

    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of BatchPage is nullptr
    // it will be run time error.
}
BatchPage::BatchPage() {

}
BatchPage::~BatchPage() {

}



void BatchPage::setAllItsWidget(
     QVBoxLayout* batchVLayout, QPushButton* btnAddBatchPage, QPushButton* btnBackBatchPage, QPushButton* btnConstBatchPage,
     QPushButton* btnEditCourse, QPushButton* btnEditSection, QPushButton* btnRemBatchPage
    ) {
    this->batchVLayout = batchVLayout;
    staticBatchVLayout = this->batchVLayout;
    this->btnAddBatchPage = btnAddBatchPage;
    this->btnBackBatchPage = btnBackBatchPage;
    this->btnConstBatchPage = btnConstBatchPage;
    this->btnEditCourse = btnEditCourse;
    this->btnEditSection = btnEditSection;
    this->btnRemBatchPage = btnRemBatchPage;


    // Event connection for DepPage
    connect(this->btnAddBatchPage, &QPushButton::clicked, this, &BatchPage::on_btnAddBatchPageClicked);
    connect(this->btnBackBatchPage, &QPushButton::clicked, this, &BatchPage::on_btnBackBatchPageClicked);
    connect(this->btnConstBatchPage, &QPushButton::clicked, this, &BatchPage::on_btnConstBatchPageClicked);
    connect(this->btnEditCourse, &QPushButton::clicked, this, &BatchPage::on_btnEditCoursePageClicked);
    connect(this->btnEditSection, &QPushButton::clicked, this, &BatchPage::on_btnEditSectionPageClicked);
    connect(this->btnRemBatchPage, &QPushButton::clicked, this, &BatchPage::on_btnRemBatchPageClicked);
}





void BatchPage::on_btnAddBatchPageClicked() {
    auto depBox = getParentDepBox();
    auto batchBox = new BatchBox();
    batchBox->setParentDepBox(depBox);
    depBox->addBatchBox(batchBox);

    this->batchVLayout->addWidget(batchBox);
}
void BatchPage::on_btnBackBatchPageClicked() {
    // don't delete but remove added BatchBox in the BatchPage
    for(int i = 0; i < this->parentDepBox->getAllBatchBox()->getSize(); i++) {
        this->parentDepBox->getAllBatchBox()->getData(i)->hide();
    }

    this->sWidgetInputPage->setCurrentIndex(this->pageIndexInputPage["depPage"]);
}
void BatchPage::on_btnConstBatchPageClicked() {

}
void BatchPage::on_btnEditCoursePageClicked() {

}
void BatchPage::on_btnEditSectionPageClicked() {

}
void BatchPage::on_btnRemBatchPageClicked() {

}



QVBoxLayout* BatchPage::getBatchVLayout() {
    return staticBatchVLayout;
}
void BatchPage::setParentDepBox(DepBox* depBox) {
    parentDepBox = depBox;
}
DepBox* BatchPage::getParentDepBox() {
    return parentDepBox;
}
