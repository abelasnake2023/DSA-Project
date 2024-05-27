#include "coursepage.h"



QVBoxLayout* CoursePage::staticCourseVLayout = nullptr;
BatchBox* CoursePage::parentBatchBox = nullptr;
CoursePage::CoursePage(QStackedWidget* sWidgetInputPage, QWidget* coursePage, CourseScheduleTable* courseSchTbl)
    : CoursePage()
{
    this->courseSchTbl = courseSchTbl;
    this->sWidgetInputPage = sWidgetInputPage;
    this->coursePage = coursePage;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;
    this->pageIndexInputPage["batchPage"] = 2;
    this->pageIndexInputPage["coursePage"] = 3;
    this->pageIndexInputPage["schedulePage"] = 4;

    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of CoursePage is nullptr
    // it will be run time error.
}
CoursePage::CoursePage() {

}
CoursePage::~CoursePage() {

}



void CoursePage::setAllItsWidget(
    QVBoxLayout* courseVLayout, QPushButton* btnAddCoursePage, QPushButton* btnBackCoursePage, QPushButton* btnConstCoursePage,
    QPushButton* btnRemCoursePage
    ) {
    this->courseVLayout = courseVLayout;
    staticCourseVLayout = this->courseVLayout;
    this->btnAddCoursePage = btnAddCoursePage;
    this->btnBackCoursePage = btnBackCoursePage;
    this->btnConstraintCoursePage = btnConstCoursePage;
    this->btnRemCourse = btnRemCoursePage;


    // Event connection for course Page
    connect(this->btnAddCoursePage, &QPushButton::clicked, this, &CoursePage::on_btnAddCoursePageClicked);
    connect(this->btnBackCoursePage, &QPushButton::clicked, this, &CoursePage::on_btnBackCoursePageClicked);
    connect(this->btnConstraintCoursePage, &QPushButton::clicked, this, &CoursePage::on_btnConstCoursePageClicked);
    connect(this->btnRemCourse, &QPushButton::clicked, this, &CoursePage::on_btnRemCoursePageClicked);
}





void CoursePage::on_btnAddCoursePageClicked() {

}
void CoursePage::on_btnBackCoursePageClicked() {

}
void CoursePage::on_btnConstCoursePageClicked() {

}
void CoursePage::on_btnRemCoursePageClicked() {

}
