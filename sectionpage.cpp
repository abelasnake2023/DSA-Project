#include "sectionpage.h"



QVBoxLayout* SectionPage::staticVLayoutSectionBoxAdded = nullptr;
QVBoxLayout* SectionPage::staticVLayoutCourseSectionBox = nullptr;
BatchBox* SectionPage::parentBatchBox = nullptr;

SectionPage::SectionPage(QStackedWidget* sWidgetInputPage, QWidget* sectionPage, SectionScheduleTable* sectionSchTbl)
    : SectionPage()
{
    this->sectionSchTbl = sectionSchTbl;
    this->sWidgetInputPage = sWidgetInputPage;
    this->sectionPage = sectionPage;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
    this->pageIndexInputPage["batchPage"] = 2;
    this->pageIndexInputPage["coursePage"] = 3;
    this->pageIndexInputPage["schedulePage"] = 4;

    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of CoursePage is nullptr
    // it will be run time error.
}
SectionPage::SectionPage() {

}
SectionPage::~SectionPage() {

}



void SectionPage::setAllItsWidget(
    QPushButton* btnAddSectionPage, QPushButton* btnBackSectionPage, QPushButton* btnConstSectionPage,
    QPushButton* btnRemSectionPage, QVBoxLayout* vLayoutSectionBoxAdded,
    QVBoxLayout* vLayoutCourseSectionBox, QPushButton* btnDiscardSecPage
    ) {
    this->btnAddSectionPage = btnAddSectionPage;
    this->btnBackSectionPage = btnBackSectionPage;
    this->btnConstraintSectionPage = btnConstSectionPage;
    this->btnRemSection = btnRemSectionPage;
    this->vLayoutSectionBoxAdded = vLayoutSectionBoxAdded;
    staticVLayoutSectionBoxAdded = this->vLayoutSectionBoxAdded;
    this->vLayoutCourseSectionBox = vLayoutCourseSectionBox;
    staticVLayoutCourseSectionBox = this->vLayoutCourseSectionBox;
    this->btnDiscardSecPage = btnDiscardSecPage;


    // Event connection for DepPage
    connect(this->btnAddSectionPage, &QPushButton::clicked, this, &SectionPage::on_btnAddSectionPageClicked);
    connect(this->btnBackSectionPage, &QPushButton::clicked, this, &SectionPage::on_btnBackSectionPageClicked);
    connect(this->btnConstraintSectionPage, &QPushButton::clicked, this, &SectionPage::on_btnConstSectionPageClicked);
    connect(this->btnRemSection, &QPushButton::clicked, this, &SectionPage::on_btnRemSectionPageClicked);
    connect(this->btnDiscardSecPage, &QPushButton::clicked, this, &SectionPage::on_btnDiscardSecPage);
}





void SectionPage::on_btnAddSectionPageClicked() {

}
void SectionPage::on_btnBackSectionPageClicked() {

}
void SectionPage::on_btnConstSectionPageClicked() {

}
void SectionPage::on_btnRemSectionPageClicked() {

}
void SectionPage::on_btnDiscardSecPage() {

}


QVBoxLayout* SectionPage::getStaticVLayoutSectionBoxAdded() {
    return staticVLayoutSectionBoxAdded;
}
QVBoxLayout* SectionPage::getStaticVLayoutCourseSectionBox() {
    return staticVLayoutCourseSectionBox;
}
