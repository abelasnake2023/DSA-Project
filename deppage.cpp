#include "deppage.h"




DepPage::DepPage(QStackedWidget* sWidgetInputPage, QWidget* depPage, DepScheduleTable* depSchTable)
    : DepPage()
{
    this->depSchTable = depSchTable;
    this->sWidgetInputPage = sWidgetInputPage;
    this->depPage = depPage;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
    this->pageIndexInputPage["batchPage"] = 2;

    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of DepPage is nullptr
    // it will be run time error.
}
DepPage::DepPage() {
    this->allDepBox = new SingleLinkedList<DepBox*>();
}
DepPage::~DepPage() {
    delete depSchTable;
    delete this->allDepBox;

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
    QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps
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


    // Event connection for DepPage
    connect(this->btnAddDep, &QPushButton::clicked, this, &DepPage::on_btnAdd);
    connect(this->btnDelDep, &QPushButton::clicked, this, &DepPage::on_btnRemove);
    connect(this->btnDepConstraint, &QPushButton::clicked, this, &DepPage::on_btnConstraint);
    connect(this->btnEditDep, &QPushButton::clicked, this, &DepPage::on_btnEdit);
}


void DepPage::on_btnAdd() {
    DepBox* box = new DepBox();
    this->allDepBox->insertAtLast(box);
    vLayoutContDeps->addWidget(box);
}
void DepPage::on_btnRemove() {
    try {
        for(int i = 0; i < this->allDepBox->getSize(); i++) {
            auto box = this->allDepBox->getData(i);
            if(box->checkBoxClicked()) {
                this->allDepBox->deleteAtAnyPosition(i);
                delete box;
                box = nullptr;

                return;
            }
        }
    }
    catch(const std::exception& ex) {
        qDebug() << ex.what() << "\n\n";
        return;
    }
}
void DepPage::on_btnConstraint() {
    bool cont = false;
    // * pass which departement and schedule structure table info
    // all dep box has first the same structure as the schedule structure table info
    // First find the departement clicked:
    DepBox* depBox = nullptr;
    for(int i = 0; i < this->allDepBox->getSize(); i++) {
        depBox = this->allDepBox->getData(i);
        if(depBox->checkBoxClicked()) {
            depBox->setCheckBoxClicked(false);
            cont = true;
            break;
        }
    }

    // Again processed DepBox will be invalid and if no depBox clicked return
    if(!cont) {
        return;
    }
    else if(depBox->getNoConstAgain()) {
        return;
    }

    // if ScheduleTableInfo object was created before for depBox delete it.
    if(depBox->getSchTblInfo() != nullptr) {
        delete depBox->getSchTblInfo();
    }

    // Initialization
    int numOfPeriodPerDay = CreateSchedulePage::getSchTblInfo()->getNumOfPeriodPerDay();
    auto periodStartEnd = new std::string[numOfPeriodPerDay];
    for(int i = 0; i < numOfPeriodPerDay; i++) {
        periodStartEnd[i] = CreateSchedulePage::getSchTblInfo()->getPeriodStartEnd()[i];
    }
    int periodGap = CreateSchedulePage::getSchTblInfo()->getPeriodGap();
    auto removedSchId = CreateSchedulePage::getSchTblInfo()->getRemovedSchId();
    auto removedSchIdAmount = CreateSchedulePage::getSchTblInfo()->getRemovedSchIdAmount();
    auto tbl = this->depSchTable->getTblDepSch();

    // ScheduleTableInfo object creation
    ScheduleTableInfo* schTblInfo = new ScheduleTableInfo(numOfPeriodPerDay, periodGap, periodStartEnd);
    schTblInfo->constructSchTable(this->depSchTable->getTblDepSch());
    schTblInfo->removePeriodOrSchId(tbl, removedSchId, removedSchIdAmount);

    // assign the ScheduleTableInfo object for the DepBox
    depBox->setSchTblInfo(schTblInfo);

    // Set it's border to red so that it's known it is saved:
    depBox->setStyleSheet("QFrame { border: 1px solid red; }");

    // make the depBox now not to be processed again in this stage
    depBox->setNoConstAgain(true);

    // Before changing, set the schTable for the depSchTable
    this->depSchTable->setSchTblInfo(schTblInfo);

    // Know change the page to the table
    this->depSchTable->getSWidgetMain()->setCurrentIndex(5);
}
void DepPage::on_btnEdit() {
    // which DepBox is responsible for the batchPage, set BatchPage DepBox
    // the first clicked DepBox is responsible
    DepBox* depBoxParent;
    bool anyClicked = false;
    try {
        for(int i = 0; i < this->allDepBox->getSize(); i++) {
            depBoxParent = this->allDepBox->getData(i);
            if(depBoxParent->checkBoxClicked()) {
                anyClicked = true;
                break;
            }
        }
    }
    catch(const std::exception& ex) {
        qDebug() << ex.what() << "\n\n";
        return;
    }
    if(!anyClicked) {
        return;
    }

    // set BatchPage DepBox to the clicked DepBox
    BatchPage::setParentDepBox(depBoxParent);


    // add the past added BatchBox to the BatchPage
    auto list = depBoxParent->getAllBatchBox();
    for(int i = 0; i < list->getSize(); i++) {
        BatchPage::getBatchVLayout()->addWidget(list->getData(i));
        list->getData(i)->show();
        // update name of the BatchBox
        list->getData(i)->updateName();
    }

    // Know call the BatchPage
    this->depSchTable->getSWidgetInput()->setCurrentIndex(this->pageIndexInputPage["batchPage"]);
}



void DepPage::on_btnTeachers() {

}
void DepPage::on_btnBatches() {

}
void DepPage::on_btnAdminPolicy() {

}
void DepPage::on_btnGenSchedule() {

}
