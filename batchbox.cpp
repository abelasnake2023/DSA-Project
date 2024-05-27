#include "batchbox.h"



BatchBox::BatchBox() {
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

    // Label Manager Name
    lblDepName = new QLabel(this);
    lblDepName->setMinimumHeight(16);
    lblDepName->setMinimumWidth(56);
    lblDepName->setText("Department:     ");
    lblDepName->setGeometry(10, 75, 56, 16);

    // Text Box name
    txtBoxName = new QLineEdit(this);
    txtBoxName->setMinimumHeight(49);
    txtBoxName->setMinimumWidth(229);
    txtBoxName->setGeometry(71, 8, 229, 49);

    // Text Box Manager name
    txtBoxDepName = new QLineEdit(this);
    txtBoxDepName->setMinimumHeight(49);
    txtBoxDepName->setReadOnly(true);
    txtBoxDepName->setMinimumWidth(229);
    txtBoxDepName->setGeometry(71, 60, 229, 49);


    // Check Box
    cBoxSelect = new QCheckBox(this);
    cBoxSelect->setMinimumHeight(21);
    cBoxSelect->setMinimumWidth(21);
    cBoxSelect->setGeometry(330, 70, 21, 21);
    connect(cBoxSelect, &QCheckBox::clicked, this, &BatchBox::on_checkBoxClicked);

    this->_checkBoxClicked = false;
    this->schTblInfo = nullptr;
    noConstAgain = false;
}

BatchBox::~BatchBox() {
    delete schTblInfo;
}


void BatchBox::on_checkBoxClicked(bool checked) {
    if (checked) {
        this->_checkBoxClicked = true;
        return;
    }
    // the check box is un checked
    this->_checkBoxClicked = false;
}


QString BatchBox::getName() {
    this->name = txtBoxName->text();
    return this->name;
}
QString BatchBox::getDepName() {
    this->depName = txtBoxDepName->text();
    return this->depName;
}
bool BatchBox::checkBoxClicked() {
    return this->_checkBoxClicked;
}
void BatchBox::setCheckBoxClicked(bool value) {
    this->_checkBoxClicked = false;
}


void BatchBox::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}
ScheduleTableInfo* BatchBox::getSchTblInfo() {
    return this->schTblInfo;
}


void BatchBox::setNoConstAgain(bool value) {
    this->noConstAgain = value;
}
bool BatchBox::getNoConstAgain() {
    return this->noConstAgain;
}

void BatchBox::setParentDepBox(DepBox* depBox) {
    this->parentDepBox = depBox;
    QString name = this->parentDepBox->getName();
    this->txtBoxDepName->setText(name);
}
DepBox* BatchBox::getDepBox() {
    return this->parentDepBox;
}


void BatchBox::updateName() {
    this->txtBoxDepName->setText(this->parentDepBox->getName());
}
