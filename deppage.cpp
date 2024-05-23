#include "deppage.h"



DepPage::DepPage(QStackedWidget* sWidgetInputPage, QWidget* depPage)
{
    this->sWidgetInputPage = sWidgetInputPage;
    this->depPage = depPage;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;

    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of DepPage is nullptr
    // it will be run time error.
}

DepPage::~DepPage() {
    delete this->depPage;
    this->depPage = nullptr;

    delete this->btnAPolicy;
    delete this->btnAddDep;
    delete this->btnBatch;
    delete this->btnDelDep;
    delete this->btnDepConstraint;
    delete this->btnEditDep;
    delete this->btnOutputSchedule;
    delete this->btnTeacher;
    delete this->vLayoutContDeps;

    this->btnAPolicy = nullptr;
    this->btnAddDep = nullptr;
    this->btnBatch = nullptr;
    this->btnDelDep = nullptr;
    this->btnDepConstraint = nullptr;
    this->btnEditDep = nullptr;
    this->btnOutputSchedule = nullptr;
    this->btnTeacher = nullptr;
    this->vLayoutContDeps = nullptr;
}


void DepPage::setAllItsWidget(
    QPushButton* btnAPolicy, QPushButton* btnAddDep, QPushButton* btnBatch, QPushButton* btnDelDep, QPushButton* btnDepConstraint,
    QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps, QPushButton* btnBackDepPage
    ) {

    this->btnAPolicy = btnAPolicy;
    this->btnAddDep = btnAddDep;
    this->btnBatch = btnBatch;
    this->btnDelDep = btnDelDep;
    this->btnDepConstraint = btnDepConstraint;
    this->btnEditDep = btnEditDep;
    this->btnOutputSchedule = btnOutputSchedule;
    this->btnTeacher = btnTeacher;
    this->vLayoutContDeps = vLayoutContDeps;
    this->btnBackDepPage = btnBackDepPage;


    // Event connection for DepPage
    connect(this->btnBackDepPage, &QPushButton::clicked, this, &DepPage::on_btnBack);
}


void DepPage::on_btnAdd() {

}

void DepPage::on_btnConstraint() {

}

void DepPage::on_btnRemove() {

}

void DepPage::on_btnEdit() {

}

void DepPage::on_btnTeachers() {

}

void DepPage::on_btnBatches() {

}

void DepPage::on_btnAdminPolicy() {

}

void DepPage::on_btnGenSchedule() {

}

void DepPage::on_btnBack() {
    this->sWidgetInputPage->setCurrentIndex(this->pageIndexInputPage["createSchedulePage"]);
}
