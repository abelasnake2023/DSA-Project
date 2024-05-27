#include "widget.h"
#include "./ui_widget.h"
#include <QPalette>
#include "loginpage.h"
#include <QDir>
#include "coursesectionbox.h"


BatchScheduleTable* Widget::batchSchTable = nullptr;
DepScheduleTable* Widget::depSchTable = nullptr;
CourseScheduleTable* Widget::courseSchTable = nullptr;
SectionScheduleTable* Widget::sectionSchTable = nullptr;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    anotherUiPointer = ui;

    // Main widget
    this->structuralDesign();
    this->initialOverallWork();

    // Main StackedWidget, first page(Login Page)
    this->logInPage = new LogInPage(ui->sWidgetMain, ui->loginPage);
    this->logInPage->logInIconDesign(ui->lblLogInIcon);
    this->eventConnectionLogInPage();

    // Main StackedWidget, SignUp page
    this->signUpPage = new SignUpPage(ui->sWidgetMain, ui->signUpPage);
    this->eventConnectionSignUpPage();

    // Main StackedWidget, User page
    this->userPage = new UserPage(ui->sWidgetMain, ui->userPage);
    this->eventConnectionUserPage();

    // Dep Page Schedule Table
    depSchTable = new DepScheduleTable(ui->sWidgetMain, ui->sWidgetInput, ui->tblDepSch, ui->btnRemoveDepCell, ui->btnSaveDepTbl);

    // Batch Page Schedule Table
    batchSchTable = new BatchScheduleTable(ui->sWidgetMain, ui->sWidgetInput, ui->tblBatchSch, ui->btnRemBatchSchTbl, ui->btnSaveBatchSchTbl);

    // Course Page Schedule Table
    courseSchTable = new CourseScheduleTable(ui->sWidgetMain, ui->sWidgetInput, ui->tblCourseSch, ui->btnRemoveCourseTbl, ui->btnSaveCourseTbl);

    // Section Page Schedule Table
    sectionSchTable = new SectionScheduleTable(ui->sWidgetMain, ui->sWidgetInput, ui->tblSectionSch, ui->btnRemSectionPage, ui->btnSaveSectionTbl);

    // Main StackedWidget, InputPage
    this->inputPage = new InputPage(ui->sWidgetMain, ui->inputPage, ui->sWidgetInput,
                                    ui->sWidgetCreateSchedule, ui->depPage, depSchTable,
                                    ui->batchPage, batchSchTable,
                                    ui->createSchedulePage, courseSchTable,
                                    ui->sectionPage, sectionSchTable);
    this->eventConnectionInputPage();
    this->inputPage->allWidgetInCreateSchedulePage(
        ui->btnBackScheduleTimeInterval, ui->btnNextScheduleTimeInterval, ui->btnSetTimeInterval, ui->lblTimeInterval, ui->lblTimeIntervalMin,
        ui->txtBoxTimeInterval, ui->btnAddScheduleTimeInterval, ui->lblPeriodStartingTime, ui->tEditPeriodStartingTime, ui->btnBackScheduleTableStruct,
        ui->btnRemoveScheduleTableStruct, ui->btnSaveScheduleTableStruct, ui->tblScheduleTableStruct, ui->tblPeriodTimeInterval
        );
    this->inputPage->allWidgetInDepPage(
        ui->btnAPolicy, ui->btnAddDep, ui->btnBatch, ui->btnDelDep, ui->btnDepConstraint, ui->btnEditDep, ui->btnOutputSchedule, ui->btnTeacher,
        ui->vLayoutContDeps
        );
    this->inputPage->allWidgetInBatchPage(
        ui->vLayoutContBatch, ui->btnAddBatchPage, ui->btnBackBatchPage, ui->btnConstBatchPage, ui->btnEditCourse, ui->btnEditSection, ui->btnRemBatchPage
        );
    this->inputPage->allWidgetInCoursePage(
        ui->vLayoutContCourse, ui->btnAddCourse, ui->btnBackCoursePage, ui->btnConstraintCoursePage,
        ui->btnRemCourse
        );
    this->inputPage->allWidgetInSectionPage(
        ui->btnAddSection, ui->btnBackSectionPage, ui->btnConstraintSectionPage,
        ui->btnRemSectionPage, ui->vLayoutSectionBoxAdded, ui->vLayoutCourseSectionBox,
        ui->btnDiscardSecPage
        );
}
Ui::Widget *Widget::anotherUiPointer = nullptr;
Widget::~Widget()
{
    delete this->ui;
    this->ui = nullptr;
    delete this->logInPage;
    this->logInPage = nullptr;
    delete this->signUpPage;
    this->signUpPage = nullptr;
    delete this->userPage;
    this->userPage = nullptr;
    delete this->inputPage;
    this->inputPage = nullptr;
    delete anotherUiPointer;
    anotherUiPointer = nullptr;
    delete depSchTable;
}

void Widget::structuralDesign() {
    this->layout()->setContentsMargins(0, 0, 0, 0); //padding to 0 on all side.
}

void Widget::initialOverallWork() {
    // Disabling on Input page
    // disable adding period and other
    ui->btnAddScheduleTimeInterval->setEnabled(false);
    ui->btnNextScheduleTimeInterval->setEnabled(false);
    ui->tblPeriodTimeInterval->setEditTriggers(QAbstractItemView::NoEditTriggers); // Set the edit triggers to disable editing
    ui->tblScheduleTableStruct->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tblDepSch->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void Widget::eventConnectionLogInPage() {
    // Button LogIn Connection
    connect(ui->btnLogIn, &QPushButton::clicked, this->logInPage, &LogInPage::on_btnLogInClicked);

    // Button SignUp Connection
    connect(ui->btnSignUp, &QPushButton::clicked, this->logInPage, &LogInPage::on_btnSignUpClicked);

    // Button Exit Connection
    connect(ui->btnExit, &QPushButton::clicked, [this]() {
        this->close(); // close is inherited member
    });
}

void Widget::eventConnectionSignUpPage() {
    // Button Create Account Clicked
    connect(ui->btnCreateAccount, &QPushButton::clicked, this->signUpPage, &SignUpPage::on_btnCreateAccountClicked);

    // Button Back Clicked
    connect(ui->btnBackSignUpPage, &QPushButton::clicked, this->signUpPage, &SignUpPage::on_btnBackClicked);
}

void Widget::eventConnectionUserPage() {
    // Button Saved Schedule Clicked
    connect(ui->btnSavedSchedule, &QPushButton::clicked, this->userPage, &UserPage::on_btnSavedScheduleClicked);

    // Button Create Schedule Clicked
    connect(ui->btnCreateSchedule, &QPushButton::clicked, this->userPage, &UserPage::on_btnCreateScheduleClicked);

    // Button Back Clicked
    connect(ui->btnUPageBack, &QPushButton::clicked, this->userPage, &UserPage::on_btnBackClicked);
}

void Widget::eventConnectionInputPage() {
    // Button Back
    connect(ui->btnBackScheduleTimeInterval, &QPushButton::clicked, this->inputPage, &InputPage::on_btnBackClicked);
    // Button Exit Connection
    connect(ui->btnExitDepPage, &QPushButton::clicked, [this]() {
        this->close(); // close is inherited member
    });
}


DepScheduleTable* Widget::getDepSchTable() {
    return depSchTable;
}
