#include "coursesectionbox.h"


CourseSectionBox::CourseSectionBox() : QFrame()
{
    // Initialize widgets
    txtBoxCourseName = new QLineEdit;
    txtBoxTeacherName = new QLineEdit;
    txtBoxNumOfStudent = new QLineEdit;

    lblCourseName = new QLabel("        Course Name:");
    lblTeacherName = new QLabel("                   Teacher:");
    lblNumOfStudent = new QLabel("Number of Student :");

    vLayoutLeft = new QVBoxLayout;
    vLayoutLeft->addWidget(lblCourseName);
    vLayoutLeft->addWidget(lblTeacherName);
    vLayoutLeft->addWidget(lblNumOfStudent);

    vLayoutRight = new QVBoxLayout;
    vLayoutRight->addWidget(txtBoxCourseName);
    vLayoutRight->addWidget(txtBoxTeacherName);
    vLayoutRight->addWidget(txtBoxNumOfStudent);

    hLayoutInputs = new QHBoxLayout;
    hLayoutInputs->addLayout(vLayoutLeft);
    hLayoutInputs->addLayout(vLayoutRight);

    vLayoutForCheckBox = new QVBoxLayout;
    verticalSpacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    checkBox = new QCheckBox();
    verticalSpacer2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vLayoutForCheckBox->addItem(verticalSpacer1);
    vLayoutForCheckBox->addWidget(checkBox);
    vLayoutForCheckBox->addItem(verticalSpacer2);

    QHBoxLayout* mainLayout = new QHBoxLayout();
    mainLayout->addLayout(hLayoutInputs);
    mainLayout->addLayout(vLayoutForCheckBox);

    this->setLayout(mainLayout);
    this->setMaximumHeight(150);
    this->setMaximumWidth(300);
    this->setFrameShape(QFrame::StyledPanel);
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    this->_checkBoxClicked = false;
    this->schTblInfo = nullptr;
}
