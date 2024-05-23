#include "DepBox.h"



DepBox::DepBox() {
    // Frame
    this->setFrameShape(QFrame::StyledPanel);
    this->setMinimumHeight(115);
    this->setMinimumWidth(350);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);


    // Label Name
    lblName = new QLabel("     Name:", this);
    lblName->setMinimumHeight(16);
    lblName->setMinimumWidth(50);
    lblName->setGeometry(10, 22, 50, 16);

    // Label Manager Name
    lblManName = new QLabel(this);
    lblManName->setMinimumHeight(16);
    lblManName->setMinimumWidth(50);
    lblManName->setText("Manager:");
    lblManName->setGeometry(10, 75, 50, 16);

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
}

DepBox::~DepBox() {
    delete txtBoxName;
    txtBoxName = nullptr;
    delete txtBoxManName;
    txtBoxManName = nullptr;
    delete lblName;
    lblName = nullptr;
    delete lblManName;
    lblManName = nullptr;
    delete cBoxSelect;
    cBoxSelect = nullptr;
}
