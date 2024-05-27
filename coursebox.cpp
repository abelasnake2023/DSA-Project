#include "coursebox.h"


CourseBox::~CourseBox() {

}
CourseBox::CourseBox() {
    // Frame
    this->setFrameShape(QFrame::StyledPanel);
    this->setMinimumHeight(115);
    this->setMinimumWidth(350);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);


    // Label Name
    lblName = new QLabel("     Name:     ", this);
    lblName->setMinimumHeight(16);
    lblName->setMinimumWidth(56);
    lblName->setGeometry(10, 22, 56, 16);

    // Label Course type Name
    lblCourseType = new QLabel(this);
    lblCourseType->setMinimumHeight(16);
    lblCourseType->setMinimumWidth(56);
    lblCourseType->setText("Course Type:     ");
    lblCourseType->setGeometry(10, 75, 56, 16);

    // Label credit hour Name
    lblCreditHour = new QLabel(this);
    lblCreditHour->setMinimumHeight(16);
    lblCreditHour->setMinimumWidth(56);
    lblCreditHour->setText("Credit Hour:     ");
    lblCreditHour->setGeometry(10, 75 + 53, 56, 16);

    // Text Box name
    txtBoxName = new QLineEdit(this);
    txtBoxName->setMinimumHeight(49);
    txtBoxName->setMinimumWidth(229);
    txtBoxName->setGeometry(71, 8, 229, 49);

    // Text Box course type name
    txtBoxCourseType = new QLineEdit(this);
    txtBoxCourseType->setMinimumHeight(49);
    txtBoxCourseType->setMinimumWidth(229);
    txtBoxCourseType->setGeometry(71, 60, 229, 49);

    // Text Box credit Hour
    txtBoxCreditHour = new QLineEdit(this);
    txtBoxCreditHour->setMinimumHeight(49);
    txtBoxCreditHour->setMinimumWidth(229);
    txtBoxCreditHour->setGeometry(71, 60 + 52, 229, 49);

    // Check Box
    cBoxSelect = new QCheckBox(this);
    cBoxSelect->setMinimumHeight(21);
    cBoxSelect->setMinimumWidth(21);
    cBoxSelect->setGeometry(330, 70, 21, 21);
    connect(cBoxSelect, &QCheckBox::clicked, this, &CourseBox::on_checkBoxClicked);

    this->_checkBoxClicked = false;
    this->schTblInfo = nullptr;
}


void CourseBox::on_checkBoxClicked() {

}

QString CourseBox::getName() {

}
QString CourseBox::getCourseType() {

}
int CourseBox::getCreditHour() {

}

void CourseBox::setSchTblInfo(ScheduleTableInfo* schTblInfo) {

}
ScheduleTableInfo* CourseBox::getSchTblInfo() {

}

void CourseBox::setParentBatchBox(BatchBox* batchBox) {

}
BatchBox* CourseBox::getBatchBox() {

}

void CourseBox::updateName() {

}
