#include "DepBox.h"
#include "batchbox.h"



DepBox::DepBox() {
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
    lblManName = new QLabel(this);
    lblManName->setMinimumHeight(16);
    lblManName->setMinimumWidth(56);
    lblManName->setText("Manager:     ");
    lblManName->setGeometry(10, 75, 56, 16);

    // Text Box name
    txtBoxName = new QLineEdit(this);
    txtBoxName->setMinimumHeight(49);
    txtBoxName->setMinimumWidth(229);
    txtBoxName->setGeometry(71, 8, 229, 49);

    // Text Box Manager name
    txtBoxManName = new QLineEdit(this);
    txtBoxManName->setMinimumHeight(49);
    txtBoxManName->setMinimumWidth(229);
    txtBoxManName->setGeometry(71, 60, 229, 49);


    // Check Box
    cBoxSelect = new QCheckBox(this);
    cBoxSelect->setMinimumHeight(21);
    cBoxSelect->setMinimumWidth(21);
    cBoxSelect->setGeometry(330, 70, 21, 21);
    connect(cBoxSelect, &QCheckBox::clicked, this, &DepBox::on_checkBoxClicked);

    this->_checkBoxClicked = false;
    this->schTblInfo = nullptr;
    noConstAgain = false;

    this->allBatchBox = new SingleLinkedList<BatchBox*>();
}

DepBox::~DepBox() {
    // Delete all BatchBox that depend on this Dep Box
    delAllBatchBox();
    delete this->allBatchBox;
    delete schTblInfo;
}

void DepBox::delAllBatchBox() {
    for(int i = 0; i < this->allBatchBox->getSize(); i++) {
        BatchBox* batchBox = this->allBatchBox->getData(i);
        if (batchBox) {
            delete batchBox;
        }
    }
}


void DepBox::on_checkBoxClicked(bool checked) {
    if (checked) {
        this->_checkBoxClicked = true;
        return;
    }
    // the check box is un checked
    this->_checkBoxClicked = false;
}


QString DepBox::getName() {
    this->name = txtBoxName->text();
    return this->name;
}
QString DepBox::getManName() {
    this->manName = txtBoxManName->text();
    return this->manName;
}
bool DepBox::checkBoxClicked() {
    return this->_checkBoxClicked;
}
void DepBox::setCheckBoxClicked(bool value) {
    this->_checkBoxClicked = false;
}


void DepBox::setSchTblInfo(ScheduleTableInfo* schTblInfo) {
    this->schTblInfo = schTblInfo;
}
ScheduleTableInfo* DepBox::getSchTblInfo() {
    return this->schTblInfo;
}


void DepBox::setNoConstAgain(bool value) {
    this->noConstAgain = value;
}
bool DepBox::getNoConstAgain() {
    return this->noConstAgain;
}



SingleLinkedList<BatchBox*>* DepBox::getAllBatchBox() {
    return this->allBatchBox;
}
void DepBox::addBatchBox(BatchBox* batchBox) {
    this->allBatchBox->insertAtLast(batchBox);
}
