/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *sWidgetMain;
    QWidget *loginPage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *vSpacer1LogInPage;
    QWidget *widget1LogInPage;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *hSpacer1LogInPage;
    QWidget *widgetLogInWidgetFrame;
    QPushButton *btnExit;
    QPushButton *btnLogIn;
    QLineEdit *txtBoxPassword;
    QLineEdit *txtBoxUName;
    QPushButton *btnSignUp;
    QLabel *lblLogInIcon;
    QSpacerItem *hSpacer2LogInPage;
    QSpacerItem *vSpacer2LogInPage;
    QWidget *signUpPage;
    QVBoxLayout *verticalLayout_9;
    QWidget *widgetSignUpPage1;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QWidget *widgetSignUpPage2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetSignUpPage3;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *lblUserNameSignUpPage;
    QLabel *lblPasswordSignUpPage;
    QLabel *lblCPasswordSignUpPage;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *txtBoxUsernameSignUpPage;
    QLineEdit *txtBoxPasswordSignUpPage;
    QLineEdit *txtBoxCPasswordSignUpPage;
    QPushButton *btnCreateAccount;
    QPushButton *btnBackSignUpPage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *userPage;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_5;
    QWidget *widgetUPage1;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widgetUPage2;
    QVBoxLayout *verticalLayout_14;
    QPushButton *btnSavedSchedule;
    QPushButton *btnCreateSchedule;
    QPushButton *btnUPageBack;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QWidget *inputPage;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *sWidgetInput;
    QWidget *createSchedulePage;
    QHBoxLayout *horizontalLayout_5;
    QStackedWidget *sWidgetCreateSchedule;
    QWidget *scheduleTimeInterval;
    QHBoxLayout *horizontalLayout_9;
    QTableWidget *tblPeriodTimeInterval;
    QWidget *widgetControlScheduleStruc;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblTimeInterval;
    QLineEdit *txtBoxTimeInterval;
    QLabel *lblTimeIntervalMin;
    QPushButton *btnSetTimeInterval;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblPeriodStartingTime;
    QTimeEdit *tEditPeriodStartingTime;
    QPushButton *btnAddScheduleTimeInterval;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnNextScheduleTimeInterval;
    QPushButton *btnBackScheduleTimeInterval;
    QWidget *scheduleTableStruct;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tblScheduleTableStruct;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnBackScheduleTableStruct;
    QPushButton *btnSaveScheduleTableStruct;
    QPushButton *btnRemoveScheduleTableStruct;
    QWidget *depPage;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *contDeps;
    QWidget *contDepsWidgets;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *vLayoutContDeps;
    QWidget *widgetInputPageDepEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAddDep;
    QPushButton *btnDepConstraint;
    QPushButton *btnDelDep;
    QPushButton *btnEditDep;
    QSpacerItem *vSpacerInputPageMainEdit;
    QPushButton *btnTeacher;
    QPushButton *btnBatch;
    QPushButton *btnAPolicy;
    QPushButton *btnOutputSchedule;
    QPushButton *btnExitDepPage;
    QWidget *batchPage;
    QHBoxLayout *horizontalLayout_17;
    QScrollArea *contBatch;
    QWidget *contDepsWidgets_2;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *vLayoutContBatch;
    QWidget *widgetCompBatchPage;
    QVBoxLayout *verticalLayout_21;
    QPushButton *btnAddBatchPage;
    QPushButton *btnRemBatchPage;
    QPushButton *btnConstBatchPage;
    QSpacerItem *verticalSpacer_7;
    QPushButton *btnEditSection;
    QPushButton *btnEditCourse;
    QPushButton *btnBackBatchPage;
    QWidget *coursePage;
    QHBoxLayout *horizontalLayout_18;
    QScrollArea *contCourseBox;
    QWidget *widgetCoursePage;
    QVBoxLayout *verticalLayout_23;
    QVBoxLayout *vLayoutContCourse;
    QWidget *widgetCompCourse;
    QVBoxLayout *verticalLayout_22;
    QPushButton *btnAddCourse;
    QPushButton *btnRemCourse;
    QPushButton *btnConstraintCoursePage;
    QPushButton *btnBackCoursePage;
    QSpacerItem *verticalSpacer_8;
    QWidget *sectionPage;
    QHBoxLayout *horizontalLayout_19;
    QScrollArea *contSectionBox;
    QWidget *widgetSectionPage;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *btnAddSection;
    QPushButton *btnRemSectionPage;
    QWidget *widgetSectionBoxes;
    QVBoxLayout *verticalLayout_31;
    QScrollArea *scrollAreaSectionPage1;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_32;
    QVBoxLayout *vLayoutSectionBoxAdded;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *btnConstraintSectionPage;
    QPushButton *btnBackSectionPage;
    QWidget *widgetCompSection;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *vLayoutCourseSectionBox_main;
    QScrollArea *scrollAreaSectionPage2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *vLayoutCourseSectionBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_25;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_27;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_28;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_10;
    QPushButton *btnDiscardSecPage;
    QWidget *outputPage;
    QLabel *label_4;
    QWidget *depSchTable;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_16;
    QTableWidget *tblDepSch;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnSaveDepTbl;
    QPushButton *btnRemoveDepCell;
    QWidget *batchSchTblPage;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QTableWidget *tblBatchSch;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *btnSaveBatchSchTbl;
    QPushButton *btnRemBatchSchTbl;
    QWidget *courseSchTblPage;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_19;
    QTableWidget *tblCourseSch;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *btnSaveCourseTbl;
    QPushButton *btnRemoveCourseTbl;
    QWidget *sectionSchTblPage;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout_26;
    QTableWidget *tblSectionSch;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *btnSaveSectionTbl;
    QPushButton *btnRemoveSectionTbl;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(945, 543);
        Widget->setMinimumSize(QSize(450, 450));
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        sWidgetMain = new QStackedWidget(Widget);
        sWidgetMain->setObjectName("sWidgetMain");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sWidgetMain->sizePolicy().hasHeightForWidth());
        sWidgetMain->setSizePolicy(sizePolicy);
        sWidgetMain->setMinimumSize(QSize(0, 400));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayout = new QVBoxLayout(loginPage);
        verticalLayout->setObjectName("verticalLayout");
        vSpacer1LogInPage = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(vSpacer1LogInPage);

        widget1LogInPage = new QWidget(loginPage);
        widget1LogInPage->setObjectName("widget1LogInPage");
        horizontalLayout_2 = new QHBoxLayout(widget1LogInPage);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        hSpacer1LogInPage = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(hSpacer1LogInPage);

        widgetLogInWidgetFrame = new QWidget(widget1LogInPage);
        widgetLogInWidgetFrame->setObjectName("widgetLogInWidgetFrame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetLogInWidgetFrame->sizePolicy().hasHeightForWidth());
        widgetLogInWidgetFrame->setSizePolicy(sizePolicy1);
        widgetLogInWidgetFrame->setMinimumSize(QSize(400, 400));
        btnExit = new QPushButton(widgetLogInWidgetFrame);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(210, 350, 141, 42));
        btnLogIn = new QPushButton(widgetLogInWidgetFrame);
        btnLogIn->setObjectName("btnLogIn");
        btnLogIn->setGeometry(QRect(280, 280, 71, 42));
        txtBoxPassword = new QLineEdit(widgetLogInWidgetFrame);
        txtBoxPassword->setObjectName("txtBoxPassword");
        txtBoxPassword->setGeometry(QRect(30, 210, 321, 41));
        txtBoxPassword->setEchoMode(QLineEdit::Password);
        txtBoxPassword->setReadOnly(false);
        txtBoxUName = new QLineEdit(widgetLogInWidgetFrame);
        txtBoxUName->setObjectName("txtBoxUName");
        txtBoxUName->setGeometry(QRect(30, 170, 321, 42));
        btnSignUp = new QPushButton(widgetLogInWidgetFrame);
        btnSignUp->setObjectName("btnSignUp");
        btnSignUp->setGeometry(QRect(130, 280, 141, 42));
        lblLogInIcon = new QLabel(widgetLogInWidgetFrame);
        lblLogInIcon->setObjectName("lblLogInIcon");
        lblLogInIcon->setGeometry(QRect(120, 0, 141, 121));

        horizontalLayout_2->addWidget(widgetLogInWidgetFrame);

        hSpacer2LogInPage = new QSpacerItem(50, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(hSpacer2LogInPage);


        verticalLayout->addWidget(widget1LogInPage);

        vSpacer2LogInPage = new QSpacerItem(10, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(vSpacer2LogInPage);

        sWidgetMain->addWidget(loginPage);
        signUpPage = new QWidget();
        signUpPage->setObjectName("signUpPage");
        verticalLayout_9 = new QVBoxLayout(signUpPage);
        verticalLayout_9->setObjectName("verticalLayout_9");
        widgetSignUpPage1 = new QWidget(signUpPage);
        widgetSignUpPage1->setObjectName("widgetSignUpPage1");
        verticalLayout_10 = new QVBoxLayout(widgetSignUpPage1);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer_3 = new QSpacerItem(20, 167, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        widgetSignUpPage2 = new QWidget(widgetSignUpPage1);
        widgetSignUpPage2->setObjectName("widgetSignUpPage2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetSignUpPage2->sizePolicy().hasHeightForWidth());
        widgetSignUpPage2->setSizePolicy(sizePolicy2);
        widgetSignUpPage2->setMinimumSize(QSize(0, 300));
        horizontalLayout_12 = new QHBoxLayout(widgetSignUpPage2);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer = new QSpacerItem(222, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        widgetSignUpPage3 = new QWidget(widgetSignUpPage2);
        widgetSignUpPage3->setObjectName("widgetSignUpPage3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetSignUpPage3->sizePolicy().hasHeightForWidth());
        widgetSignUpPage3->setSizePolicy(sizePolicy3);
        verticalLayout_13 = new QVBoxLayout(widgetSignUpPage3);
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        lblUserNameSignUpPage = new QLabel(widgetSignUpPage3);
        lblUserNameSignUpPage->setObjectName("lblUserNameSignUpPage");

        verticalLayout_12->addWidget(lblUserNameSignUpPage);

        lblPasswordSignUpPage = new QLabel(widgetSignUpPage3);
        lblPasswordSignUpPage->setObjectName("lblPasswordSignUpPage");

        verticalLayout_12->addWidget(lblPasswordSignUpPage);

        lblCPasswordSignUpPage = new QLabel(widgetSignUpPage3);
        lblCPasswordSignUpPage->setObjectName("lblCPasswordSignUpPage");
        lblCPasswordSignUpPage->setMaximumSize(QSize(400, 16777215));

        verticalLayout_12->addWidget(lblCPasswordSignUpPage);


        horizontalLayout_11->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        txtBoxUsernameSignUpPage = new QLineEdit(widgetSignUpPage3);
        txtBoxUsernameSignUpPage->setObjectName("txtBoxUsernameSignUpPage");

        verticalLayout_11->addWidget(txtBoxUsernameSignUpPage);

        txtBoxPasswordSignUpPage = new QLineEdit(widgetSignUpPage3);
        txtBoxPasswordSignUpPage->setObjectName("txtBoxPasswordSignUpPage");
        txtBoxPasswordSignUpPage->setEchoMode(QLineEdit::Password);

        verticalLayout_11->addWidget(txtBoxPasswordSignUpPage);

        txtBoxCPasswordSignUpPage = new QLineEdit(widgetSignUpPage3);
        txtBoxCPasswordSignUpPage->setObjectName("txtBoxCPasswordSignUpPage");
        txtBoxCPasswordSignUpPage->setEchoMode(QLineEdit::Password);

        verticalLayout_11->addWidget(txtBoxCPasswordSignUpPage);


        horizontalLayout_11->addLayout(verticalLayout_11);


        verticalLayout_13->addLayout(horizontalLayout_11);

        btnCreateAccount = new QPushButton(widgetSignUpPage3);
        btnCreateAccount->setObjectName("btnCreateAccount");

        verticalLayout_13->addWidget(btnCreateAccount);

        btnBackSignUpPage = new QPushButton(widgetSignUpPage3);
        btnBackSignUpPage->setObjectName("btnBackSignUpPage");

        verticalLayout_13->addWidget(btnBackSignUpPage);


        horizontalLayout_12->addWidget(widgetSignUpPage3);

        horizontalSpacer_2 = new QSpacerItem(222, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);
        horizontalLayout_12->setStretch(2, 1);

        verticalLayout_10->addWidget(widgetSignUpPage2);

        verticalSpacer_4 = new QSpacerItem(20, 166, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        verticalLayout_9->addWidget(widgetSignUpPage1);

        sWidgetMain->addWidget(signUpPage);
        userPage = new QWidget();
        userPage->setObjectName("userPage");
        verticalLayout_15 = new QVBoxLayout(userPage);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalSpacer_5 = new QSpacerItem(20, 216, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_5);

        widgetUPage1 = new QWidget(userPage);
        widgetUPage1->setObjectName("widgetUPage1");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widgetUPage1->sizePolicy().hasHeightForWidth());
        widgetUPage1->setSizePolicy(sizePolicy4);
        widgetUPage1->setMinimumSize(QSize(0, 150));
        horizontalLayout_13 = new QHBoxLayout(widgetUPage1);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_3 = new QSpacerItem(227, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        widgetUPage2 = new QWidget(widgetUPage1);
        widgetUPage2->setObjectName("widgetUPage2");
        verticalLayout_14 = new QVBoxLayout(widgetUPage2);
        verticalLayout_14->setObjectName("verticalLayout_14");
        btnSavedSchedule = new QPushButton(widgetUPage2);
        btnSavedSchedule->setObjectName("btnSavedSchedule");

        verticalLayout_14->addWidget(btnSavedSchedule);

        btnCreateSchedule = new QPushButton(widgetUPage2);
        btnCreateSchedule->setObjectName("btnCreateSchedule");

        verticalLayout_14->addWidget(btnCreateSchedule);

        btnUPageBack = new QPushButton(widgetUPage2);
        btnUPageBack->setObjectName("btnUPageBack");

        verticalLayout_14->addWidget(btnUPageBack);


        horizontalLayout_13->addWidget(widgetUPage2);

        horizontalSpacer_4 = new QSpacerItem(227, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 2);
        horizontalLayout_13->setStretch(2, 1);

        verticalLayout_15->addWidget(widgetUPage1);

        verticalSpacer_6 = new QSpacerItem(20, 216, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_6);

        sWidgetMain->addWidget(userPage);
        inputPage = new QWidget();
        inputPage->setObjectName("inputPage");
        horizontalLayout_3 = new QHBoxLayout(inputPage);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sWidgetInput = new QStackedWidget(inputPage);
        sWidgetInput->setObjectName("sWidgetInput");
        createSchedulePage = new QWidget();
        createSchedulePage->setObjectName("createSchedulePage");
        horizontalLayout_5 = new QHBoxLayout(createSchedulePage);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        sWidgetCreateSchedule = new QStackedWidget(createSchedulePage);
        sWidgetCreateSchedule->setObjectName("sWidgetCreateSchedule");
        scheduleTimeInterval = new QWidget();
        scheduleTimeInterval->setObjectName("scheduleTimeInterval");
        horizontalLayout_9 = new QHBoxLayout(scheduleTimeInterval);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        tblPeriodTimeInterval = new QTableWidget(scheduleTimeInterval);
        if (tblPeriodTimeInterval->columnCount() < 2)
            tblPeriodTimeInterval->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tblPeriodTimeInterval->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignTrailing|Qt::AlignVCenter);
        tblPeriodTimeInterval->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tblPeriodTimeInterval->setObjectName("tblPeriodTimeInterval");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(3);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tblPeriodTimeInterval->sizePolicy().hasHeightForWidth());
        tblPeriodTimeInterval->setSizePolicy(sizePolicy5);
        tblPeriodTimeInterval->setMinimumSize(QSize(2, 0));
        tblPeriodTimeInterval->setMaximumSize(QSize(620, 16777215));

        horizontalLayout_9->addWidget(tblPeriodTimeInterval);

        widgetControlScheduleStruc = new QWidget(scheduleTimeInterval);
        widgetControlScheduleStruc->setObjectName("widgetControlScheduleStruc");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widgetControlScheduleStruc->sizePolicy().hasHeightForWidth());
        widgetControlScheduleStruc->setSizePolicy(sizePolicy6);
        verticalLayout_5 = new QVBoxLayout(widgetControlScheduleStruc);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblTimeInterval = new QLabel(widgetControlScheduleStruc);
        lblTimeInterval->setObjectName("lblTimeInterval");

        horizontalLayout_6->addWidget(lblTimeInterval);

        txtBoxTimeInterval = new QLineEdit(widgetControlScheduleStruc);
        txtBoxTimeInterval->setObjectName("txtBoxTimeInterval");

        horizontalLayout_6->addWidget(txtBoxTimeInterval);

        lblTimeIntervalMin = new QLabel(widgetControlScheduleStruc);
        lblTimeIntervalMin->setObjectName("lblTimeIntervalMin");

        horizontalLayout_6->addWidget(lblTimeIntervalMin);


        verticalLayout_3->addLayout(horizontalLayout_6);

        btnSetTimeInterval = new QPushButton(widgetControlScheduleStruc);
        btnSetTimeInterval->setObjectName("btnSetTimeInterval");

        verticalLayout_3->addWidget(btnSetTimeInterval);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 211, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblPeriodStartingTime = new QLabel(widgetControlScheduleStruc);
        lblPeriodStartingTime->setObjectName("lblPeriodStartingTime");

        horizontalLayout_7->addWidget(lblPeriodStartingTime);

        tEditPeriodStartingTime = new QTimeEdit(widgetControlScheduleStruc);
        tEditPeriodStartingTime->setObjectName("tEditPeriodStartingTime");
        tEditPeriodStartingTime->setMinimumSize(QSize(140, 0));

        horizontalLayout_7->addWidget(tEditPeriodStartingTime);


        verticalLayout_4->addLayout(horizontalLayout_7);

        btnAddScheduleTimeInterval = new QPushButton(widgetControlScheduleStruc);
        btnAddScheduleTimeInterval->setObjectName("btnAddScheduleTimeInterval");

        verticalLayout_4->addWidget(btnAddScheduleTimeInterval);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 211, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        btnNextScheduleTimeInterval = new QPushButton(widgetControlScheduleStruc);
        btnNextScheduleTimeInterval->setObjectName("btnNextScheduleTimeInterval");

        horizontalLayout_8->addWidget(btnNextScheduleTimeInterval);

        btnBackScheduleTimeInterval = new QPushButton(widgetControlScheduleStruc);
        btnBackScheduleTimeInterval->setObjectName("btnBackScheduleTimeInterval");

        horizontalLayout_8->addWidget(btnBackScheduleTimeInterval);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(widgetControlScheduleStruc);

        sWidgetCreateSchedule->addWidget(scheduleTimeInterval);
        scheduleTableStruct = new QWidget();
        scheduleTableStruct->setObjectName("scheduleTableStruct");
        verticalLayout_8 = new QVBoxLayout(scheduleTableStruct);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        tblScheduleTableStruct = new QTableWidget(scheduleTableStruct);
        if (tblScheduleTableStruct->columnCount() < 9)
            tblScheduleTableStruct->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tblScheduleTableStruct->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        tblScheduleTableStruct->setObjectName("tblScheduleTableStruct");

        verticalLayout_7->addWidget(tblScheduleTableStruct);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        btnBackScheduleTableStruct = new QPushButton(scheduleTableStruct);
        btnBackScheduleTableStruct->setObjectName("btnBackScheduleTableStruct");

        horizontalLayout_10->addWidget(btnBackScheduleTableStruct);

        btnSaveScheduleTableStruct = new QPushButton(scheduleTableStruct);
        btnSaveScheduleTableStruct->setObjectName("btnSaveScheduleTableStruct");

        horizontalLayout_10->addWidget(btnSaveScheduleTableStruct);

        btnRemoveScheduleTableStruct = new QPushButton(scheduleTableStruct);
        btnRemoveScheduleTableStruct->setObjectName("btnRemoveScheduleTableStruct");

        horizontalLayout_10->addWidget(btnRemoveScheduleTableStruct);


        verticalLayout_7->addLayout(horizontalLayout_10);


        verticalLayout_8->addLayout(verticalLayout_7);

        sWidgetCreateSchedule->addWidget(scheduleTableStruct);

        horizontalLayout_5->addWidget(sWidgetCreateSchedule);

        sWidgetInput->addWidget(createSchedulePage);
        depPage = new QWidget();
        depPage->setObjectName("depPage");
        horizontalLayout_4 = new QHBoxLayout(depPage);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        contDeps = new QScrollArea(depPage);
        contDeps->setObjectName("contDeps");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy7.setHorizontalStretch(2);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(contDeps->sizePolicy().hasHeightForWidth());
        contDeps->setSizePolicy(sizePolicy7);
        contDeps->setWidgetResizable(true);
        contDepsWidgets = new QWidget();
        contDepsWidgets->setObjectName("contDepsWidgets");
        contDepsWidgets->setGeometry(QRect(0, 0, 588, 487));
        verticalLayout_6 = new QVBoxLayout(contDepsWidgets);
        verticalLayout_6->setObjectName("verticalLayout_6");
        vLayoutContDeps = new QVBoxLayout();
        vLayoutContDeps->setObjectName("vLayoutContDeps");

        verticalLayout_6->addLayout(vLayoutContDeps);

        contDeps->setWidget(contDepsWidgets);

        horizontalLayout_4->addWidget(contDeps);

        widgetInputPageDepEdit = new QWidget(depPage);
        widgetInputPageDepEdit->setObjectName("widgetInputPageDepEdit");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(widgetInputPageDepEdit->sizePolicy().hasHeightForWidth());
        widgetInputPageDepEdit->setSizePolicy(sizePolicy8);
        verticalLayout_2 = new QVBoxLayout(widgetInputPageDepEdit);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, -1);
        btnAddDep = new QPushButton(widgetInputPageDepEdit);
        btnAddDep->setObjectName("btnAddDep");

        verticalLayout_2->addWidget(btnAddDep);

        btnDepConstraint = new QPushButton(widgetInputPageDepEdit);
        btnDepConstraint->setObjectName("btnDepConstraint");

        verticalLayout_2->addWidget(btnDepConstraint);

        btnDelDep = new QPushButton(widgetInputPageDepEdit);
        btnDelDep->setObjectName("btnDelDep");

        verticalLayout_2->addWidget(btnDelDep);

        btnEditDep = new QPushButton(widgetInputPageDepEdit);
        btnEditDep->setObjectName("btnEditDep");

        verticalLayout_2->addWidget(btnEditDep);

        vSpacerInputPageMainEdit = new QSpacerItem(20, 497, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(vSpacerInputPageMainEdit);

        btnTeacher = new QPushButton(widgetInputPageDepEdit);
        btnTeacher->setObjectName("btnTeacher");

        verticalLayout_2->addWidget(btnTeacher);

        btnBatch = new QPushButton(widgetInputPageDepEdit);
        btnBatch->setObjectName("btnBatch");

        verticalLayout_2->addWidget(btnBatch);

        btnAPolicy = new QPushButton(widgetInputPageDepEdit);
        btnAPolicy->setObjectName("btnAPolicy");

        verticalLayout_2->addWidget(btnAPolicy);

        btnOutputSchedule = new QPushButton(widgetInputPageDepEdit);
        btnOutputSchedule->setObjectName("btnOutputSchedule");

        verticalLayout_2->addWidget(btnOutputSchedule);

        btnExitDepPage = new QPushButton(widgetInputPageDepEdit);
        btnExitDepPage->setObjectName("btnExitDepPage");

        verticalLayout_2->addWidget(btnExitDepPage);


        horizontalLayout_4->addWidget(widgetInputPageDepEdit);

        sWidgetInput->addWidget(depPage);
        batchPage = new QWidget();
        batchPage->setObjectName("batchPage");
        horizontalLayout_17 = new QHBoxLayout(batchPage);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        contBatch = new QScrollArea(batchPage);
        contBatch->setObjectName("contBatch");
        sizePolicy7.setHeightForWidth(contBatch->sizePolicy().hasHeightForWidth());
        contBatch->setSizePolicy(sizePolicy7);
        contBatch->setWidgetResizable(true);
        contDepsWidgets_2 = new QWidget();
        contDepsWidgets_2->setObjectName("contDepsWidgets_2");
        contDepsWidgets_2->setGeometry(QRect(0, 0, 588, 487));
        verticalLayout_20 = new QVBoxLayout(contDepsWidgets_2);
        verticalLayout_20->setObjectName("verticalLayout_20");
        vLayoutContBatch = new QVBoxLayout();
        vLayoutContBatch->setObjectName("vLayoutContBatch");

        verticalLayout_20->addLayout(vLayoutContBatch);

        contBatch->setWidget(contDepsWidgets_2);

        horizontalLayout_17->addWidget(contBatch);

        widgetCompBatchPage = new QWidget(batchPage);
        widgetCompBatchPage->setObjectName("widgetCompBatchPage");
        sizePolicy8.setHeightForWidth(widgetCompBatchPage->sizePolicy().hasHeightForWidth());
        widgetCompBatchPage->setSizePolicy(sizePolicy8);
        widgetCompBatchPage->setMinimumSize(QSize(0, 0));
        verticalLayout_21 = new QVBoxLayout(widgetCompBatchPage);
        verticalLayout_21->setObjectName("verticalLayout_21");
        btnAddBatchPage = new QPushButton(widgetCompBatchPage);
        btnAddBatchPage->setObjectName("btnAddBatchPage");

        verticalLayout_21->addWidget(btnAddBatchPage);

        btnRemBatchPage = new QPushButton(widgetCompBatchPage);
        btnRemBatchPage->setObjectName("btnRemBatchPage");

        verticalLayout_21->addWidget(btnRemBatchPage);

        btnConstBatchPage = new QPushButton(widgetCompBatchPage);
        btnConstBatchPage->setObjectName("btnConstBatchPage");

        verticalLayout_21->addWidget(btnConstBatchPage);

        verticalSpacer_7 = new QSpacerItem(20, 491, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_7);

        btnEditSection = new QPushButton(widgetCompBatchPage);
        btnEditSection->setObjectName("btnEditSection");

        verticalLayout_21->addWidget(btnEditSection);

        btnEditCourse = new QPushButton(widgetCompBatchPage);
        btnEditCourse->setObjectName("btnEditCourse");

        verticalLayout_21->addWidget(btnEditCourse);

        btnBackBatchPage = new QPushButton(widgetCompBatchPage);
        btnBackBatchPage->setObjectName("btnBackBatchPage");

        verticalLayout_21->addWidget(btnBackBatchPage);


        horizontalLayout_17->addWidget(widgetCompBatchPage);

        sWidgetInput->addWidget(batchPage);
        coursePage = new QWidget();
        coursePage->setObjectName("coursePage");
        horizontalLayout_18 = new QHBoxLayout(coursePage);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        contCourseBox = new QScrollArea(coursePage);
        contCourseBox->setObjectName("contCourseBox");
        sizePolicy7.setHeightForWidth(contCourseBox->sizePolicy().hasHeightForWidth());
        contCourseBox->setSizePolicy(sizePolicy7);
        contCourseBox->setWidgetResizable(true);
        widgetCoursePage = new QWidget();
        widgetCoursePage->setObjectName("widgetCoursePage");
        widgetCoursePage->setGeometry(QRect(0, 0, 588, 487));
        verticalLayout_23 = new QVBoxLayout(widgetCoursePage);
        verticalLayout_23->setObjectName("verticalLayout_23");
        vLayoutContCourse = new QVBoxLayout();
        vLayoutContCourse->setObjectName("vLayoutContCourse");

        verticalLayout_23->addLayout(vLayoutContCourse);

        contCourseBox->setWidget(widgetCoursePage);

        horizontalLayout_18->addWidget(contCourseBox);

        widgetCompCourse = new QWidget(coursePage);
        widgetCompCourse->setObjectName("widgetCompCourse");
        sizePolicy8.setHeightForWidth(widgetCompCourse->sizePolicy().hasHeightForWidth());
        widgetCompCourse->setSizePolicy(sizePolicy8);
        widgetCompCourse->setMinimumSize(QSize(0, 0));
        verticalLayout_22 = new QVBoxLayout(widgetCompCourse);
        verticalLayout_22->setObjectName("verticalLayout_22");
        btnAddCourse = new QPushButton(widgetCompCourse);
        btnAddCourse->setObjectName("btnAddCourse");

        verticalLayout_22->addWidget(btnAddCourse);

        btnRemCourse = new QPushButton(widgetCompCourse);
        btnRemCourse->setObjectName("btnRemCourse");

        verticalLayout_22->addWidget(btnRemCourse);

        btnConstraintCoursePage = new QPushButton(widgetCompCourse);
        btnConstraintCoursePage->setObjectName("btnConstraintCoursePage");

        verticalLayout_22->addWidget(btnConstraintCoursePage);

        btnBackCoursePage = new QPushButton(widgetCompCourse);
        btnBackCoursePage->setObjectName("btnBackCoursePage");

        verticalLayout_22->addWidget(btnBackCoursePage);

        verticalSpacer_8 = new QSpacerItem(20, 491, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_8);


        horizontalLayout_18->addWidget(widgetCompCourse);

        sWidgetInput->addWidget(coursePage);
        sectionPage = new QWidget();
        sectionPage->setObjectName("sectionPage");
        horizontalLayout_19 = new QHBoxLayout(sectionPage);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        contSectionBox = new QScrollArea(sectionPage);
        contSectionBox->setObjectName("contSectionBox");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy9.setHorizontalStretch(2);
        sizePolicy9.setVerticalStretch(8);
        sizePolicy9.setHeightForWidth(contSectionBox->sizePolicy().hasHeightForWidth());
        contSectionBox->setSizePolicy(sizePolicy9);
        contSectionBox->setWidgetResizable(true);
        widgetSectionPage = new QWidget();
        widgetSectionPage->setObjectName("widgetSectionPage");
        widgetSectionPage->setGeometry(QRect(0, 0, 588, 487));
        verticalLayout_30 = new QVBoxLayout(widgetSectionPage);
        verticalLayout_30->setObjectName("verticalLayout_30");
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        btnAddSection = new QPushButton(widgetSectionPage);
        btnAddSection->setObjectName("btnAddSection");

        horizontalLayout_26->addWidget(btnAddSection);

        btnRemSectionPage = new QPushButton(widgetSectionPage);
        btnRemSectionPage->setObjectName("btnRemSectionPage");

        horizontalLayout_26->addWidget(btnRemSectionPage);


        verticalLayout_30->addLayout(horizontalLayout_26);

        widgetSectionBoxes = new QWidget(widgetSectionPage);
        widgetSectionBoxes->setObjectName("widgetSectionBoxes");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(1);
        sizePolicy10.setHeightForWidth(widgetSectionBoxes->sizePolicy().hasHeightForWidth());
        widgetSectionBoxes->setSizePolicy(sizePolicy10);
        verticalLayout_31 = new QVBoxLayout(widgetSectionBoxes);
        verticalLayout_31->setObjectName("verticalLayout_31");
        scrollAreaSectionPage1 = new QScrollArea(widgetSectionBoxes);
        scrollAreaSectionPage1->setObjectName("scrollAreaSectionPage1");
        scrollAreaSectionPage1->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 550, 385));
        verticalLayout_32 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_32->setObjectName("verticalLayout_32");
        vLayoutSectionBoxAdded = new QVBoxLayout();
        vLayoutSectionBoxAdded->setObjectName("vLayoutSectionBoxAdded");

        verticalLayout_32->addLayout(vLayoutSectionBoxAdded);

        scrollAreaSectionPage1->setWidget(scrollAreaWidgetContents);

        verticalLayout_31->addWidget(scrollAreaSectionPage1);


        verticalLayout_30->addWidget(widgetSectionBoxes);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        btnConstraintSectionPage = new QPushButton(widgetSectionPage);
        btnConstraintSectionPage->setObjectName("btnConstraintSectionPage");

        horizontalLayout_27->addWidget(btnConstraintSectionPage);

        btnBackSectionPage = new QPushButton(widgetSectionPage);
        btnBackSectionPage->setObjectName("btnBackSectionPage");

        horizontalLayout_27->addWidget(btnBackSectionPage);


        verticalLayout_30->addLayout(horizontalLayout_27);

        contSectionBox->setWidget(widgetSectionPage);

        horizontalLayout_19->addWidget(contSectionBox);

        widgetCompSection = new QWidget(sectionPage);
        widgetCompSection->setObjectName("widgetCompSection");
        sizePolicy8.setHeightForWidth(widgetCompSection->sizePolicy().hasHeightForWidth());
        widgetCompSection->setSizePolicy(sizePolicy8);
        widgetCompSection->setMinimumSize(QSize(0, 0));
        verticalLayout_24 = new QVBoxLayout(widgetCompSection);
        verticalLayout_24->setObjectName("verticalLayout_24");
        vLayoutCourseSectionBox_main = new QVBoxLayout();
        vLayoutCourseSectionBox_main->setObjectName("vLayoutCourseSectionBox_main");
        scrollAreaSectionPage2 = new QScrollArea(widgetCompSection);
        scrollAreaSectionPage2->setObjectName("scrollAreaSectionPage2");
        scrollAreaSectionPage2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 273, 437));
        horizontalLayout_28 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        vLayoutCourseSectionBox = new QVBoxLayout();
        vLayoutCourseSectionBox->setObjectName("vLayoutCourseSectionBox");
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(300, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_25 = new QHBoxLayout(frame);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName("verticalLayout_27");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout_27->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout_27->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout_27->addWidget(label_3);


        horizontalLayout_24->addLayout(verticalLayout_27);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_25->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_25->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_25->addWidget(lineEdit_3);


        horizontalLayout_24->addLayout(verticalLayout_25);


        horizontalLayout_25->addLayout(horizontalLayout_24);

        widget = new QWidget(frame);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy11);
        verticalLayout_28 = new QVBoxLayout(widget);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalSpacer_9 = new QSpacerItem(18, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_9);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        verticalLayout_28->addWidget(checkBox);

        verticalSpacer_10 = new QSpacerItem(18, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_10);


        horizontalLayout_25->addWidget(widget);


        vLayoutCourseSectionBox->addWidget(frame);


        horizontalLayout_28->addLayout(vLayoutCourseSectionBox);

        scrollAreaSectionPage2->setWidget(scrollAreaWidgetContents_2);

        vLayoutCourseSectionBox_main->addWidget(scrollAreaSectionPage2);


        verticalLayout_24->addLayout(vLayoutCourseSectionBox_main);

        btnDiscardSecPage = new QPushButton(widgetCompSection);
        btnDiscardSecPage->setObjectName("btnDiscardSecPage");

        verticalLayout_24->addWidget(btnDiscardSecPage);


        horizontalLayout_19->addWidget(widgetCompSection);

        sWidgetInput->addWidget(sectionPage);

        horizontalLayout_3->addWidget(sWidgetInput);

        sWidgetMain->addWidget(inputPage);
        outputPage = new QWidget();
        outputPage->setObjectName("outputPage");
        label_4 = new QLabel(outputPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 270, 101, 42));
        sWidgetMain->addWidget(outputPage);
        depSchTable = new QWidget();
        depSchTable->setObjectName("depSchTable");
        horizontalLayout_15 = new QHBoxLayout(depSchTable);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        tblDepSch = new QTableWidget(depSchTable);
        if (tblDepSch->columnCount() < 9)
            tblDepSch->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tblDepSch->setHorizontalHeaderItem(8, __qtablewidgetitem19);
        tblDepSch->setObjectName("tblDepSch");

        verticalLayout_16->addWidget(tblDepSch);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        btnSaveDepTbl = new QPushButton(depSchTable);
        btnSaveDepTbl->setObjectName("btnSaveDepTbl");

        horizontalLayout_14->addWidget(btnSaveDepTbl);

        btnRemoveDepCell = new QPushButton(depSchTable);
        btnRemoveDepCell->setObjectName("btnRemoveDepCell");

        horizontalLayout_14->addWidget(btnRemoveDepCell);


        verticalLayout_16->addLayout(horizontalLayout_14);


        horizontalLayout_15->addLayout(verticalLayout_16);

        sWidgetMain->addWidget(depSchTable);
        batchSchTblPage = new QWidget();
        batchSchTblPage->setObjectName("batchSchTblPage");
        verticalLayout_18 = new QVBoxLayout(batchSchTblPage);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        tblBatchSch = new QTableWidget(batchSchTblPage);
        if (tblBatchSch->columnCount() < 9)
            tblBatchSch->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tblBatchSch->setHorizontalHeaderItem(8, __qtablewidgetitem28);
        tblBatchSch->setObjectName("tblBatchSch");

        verticalLayout_17->addWidget(tblBatchSch);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        btnSaveBatchSchTbl = new QPushButton(batchSchTblPage);
        btnSaveBatchSchTbl->setObjectName("btnSaveBatchSchTbl");

        horizontalLayout_16->addWidget(btnSaveBatchSchTbl);

        btnRemBatchSchTbl = new QPushButton(batchSchTblPage);
        btnRemBatchSchTbl->setObjectName("btnRemBatchSchTbl");

        horizontalLayout_16->addWidget(btnRemBatchSchTbl);


        verticalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout_18->addLayout(verticalLayout_17);

        sWidgetMain->addWidget(batchSchTblPage);
        courseSchTblPage = new QWidget();
        courseSchTblPage->setObjectName("courseSchTblPage");
        horizontalLayout_21 = new QHBoxLayout(courseSchTblPage);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        tblCourseSch = new QTableWidget(courseSchTblPage);
        if (tblCourseSch->columnCount() < 9)
            tblCourseSch->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(4, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(5, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(6, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(7, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tblCourseSch->setHorizontalHeaderItem(8, __qtablewidgetitem37);
        tblCourseSch->setObjectName("tblCourseSch");

        verticalLayout_19->addWidget(tblCourseSch);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        btnSaveCourseTbl = new QPushButton(courseSchTblPage);
        btnSaveCourseTbl->setObjectName("btnSaveCourseTbl");

        horizontalLayout_20->addWidget(btnSaveCourseTbl);

        btnRemoveCourseTbl = new QPushButton(courseSchTblPage);
        btnRemoveCourseTbl->setObjectName("btnRemoveCourseTbl");

        horizontalLayout_20->addWidget(btnRemoveCourseTbl);


        verticalLayout_19->addLayout(horizontalLayout_20);


        horizontalLayout_21->addLayout(verticalLayout_19);

        sWidgetMain->addWidget(courseSchTblPage);
        sectionSchTblPage = new QWidget();
        sectionSchTblPage->setObjectName("sectionSchTblPage");
        horizontalLayout_23 = new QHBoxLayout(sectionSchTblPage);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        tblSectionSch = new QTableWidget(sectionSchTblPage);
        if (tblSectionSch->columnCount() < 9)
            tblSectionSch->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(2, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(3, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(4, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(5, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(6, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(7, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tblSectionSch->setHorizontalHeaderItem(8, __qtablewidgetitem46);
        tblSectionSch->setObjectName("tblSectionSch");

        verticalLayout_26->addWidget(tblSectionSch);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        btnSaveSectionTbl = new QPushButton(sectionSchTblPage);
        btnSaveSectionTbl->setObjectName("btnSaveSectionTbl");

        horizontalLayout_22->addWidget(btnSaveSectionTbl);

        btnRemoveSectionTbl = new QPushButton(sectionSchTblPage);
        btnRemoveSectionTbl->setObjectName("btnRemoveSectionTbl");

        horizontalLayout_22->addWidget(btnRemoveSectionTbl);


        verticalLayout_26->addLayout(horizontalLayout_22);


        horizontalLayout_23->addLayout(verticalLayout_26);

        sWidgetMain->addWidget(sectionSchTblPage);

        horizontalLayout->addWidget(sWidgetMain);


        retranslateUi(Widget);

        sWidgetMain->setCurrentIndex(3);
        sWidgetInput->setCurrentIndex(4);
        sWidgetCreateSchedule->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Class Schedulizer", nullptr));
        btnExit->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
        btnLogIn->setText(QCoreApplication::translate("Widget", "LogIn", nullptr));
        txtBoxPassword->setText(QString());
        txtBoxPassword->setPlaceholderText(QCoreApplication::translate("Widget", "Password", nullptr));
        txtBoxUName->setPlaceholderText(QCoreApplication::translate("Widget", "Username", nullptr));
        btnSignUp->setText(QCoreApplication::translate("Widget", "Create New Account", nullptr));
        lblLogInIcon->setText(QCoreApplication::translate("Widget", "logIn Icon Image...", nullptr));
        lblUserNameSignUpPage->setText(QCoreApplication::translate("Widget", "               Username:", nullptr));
        lblPasswordSignUpPage->setText(QCoreApplication::translate("Widget", "                Password:", nullptr));
        lblCPasswordSignUpPage->setText(QCoreApplication::translate("Widget", "Confirm Password: ", nullptr));
        btnCreateAccount->setText(QCoreApplication::translate("Widget", "Create Account", nullptr));
        btnBackSignUpPage->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        btnSavedSchedule->setText(QCoreApplication::translate("Widget", "Saved Schedule", nullptr));
        btnCreateSchedule->setText(QCoreApplication::translate("Widget", "Create Schedule", nullptr));
        btnUPageBack->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblPeriodTimeInterval->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "Period                             ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblPeriodTimeInterval->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "Time interval    ", nullptr));
        lblTimeInterval->setText(QCoreApplication::translate("Widget", "Time Interval:", nullptr));
        lblTimeIntervalMin->setText(QCoreApplication::translate("Widget", "Min", nullptr));
        btnSetTimeInterval->setText(QCoreApplication::translate("Widget", "Click Me To Set Time Interval", nullptr));
        lblPeriodStartingTime->setText(QCoreApplication::translate("Widget", "Period 1 Starting Time:", nullptr));
        btnAddScheduleTimeInterval->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        btnNextScheduleTimeInterval->setText(QCoreApplication::translate("Widget", "Next", nullptr));
        btnBackScheduleTimeInterval->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblScheduleTableStruct->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "Period", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblScheduleTableStruct->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblScheduleTableStruct->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblScheduleTableStruct->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblScheduleTableStruct->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Widget", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tblScheduleTableStruct->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Widget", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tblScheduleTableStruct->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Widget", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tblScheduleTableStruct->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Widget", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tblScheduleTableStruct->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Widget", "Sunday", nullptr));
        btnBackScheduleTableStruct->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        btnSaveScheduleTableStruct->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        btnRemoveScheduleTableStruct->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        btnAddDep->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        btnDepConstraint->setText(QCoreApplication::translate("Widget", "Constraint", nullptr));
        btnDelDep->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        btnEditDep->setText(QCoreApplication::translate("Widget", "Edit", nullptr));
        btnTeacher->setText(QCoreApplication::translate("Widget", "Teachers", nullptr));
        btnBatch->setText(QCoreApplication::translate("Widget", "Batches", nullptr));
        btnAPolicy->setText(QCoreApplication::translate("Widget", "Administrative Policy", nullptr));
        btnOutputSchedule->setText(QCoreApplication::translate("Widget", "Generate Schedule", nullptr));
        btnExitDepPage->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
        btnAddBatchPage->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        btnRemBatchPage->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        btnConstBatchPage->setText(QCoreApplication::translate("Widget", "Constraint", nullptr));
        btnEditSection->setText(QCoreApplication::translate("Widget", "Edit Section", nullptr));
        btnEditCourse->setText(QCoreApplication::translate("Widget", "Edit Course", nullptr));
        btnBackBatchPage->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        btnAddCourse->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        btnRemCourse->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        btnConstraintCoursePage->setText(QCoreApplication::translate("Widget", "Constraint", nullptr));
        btnBackCoursePage->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        btnAddSection->setText(QCoreApplication::translate("Widget", "Add", nullptr));
        btnRemSectionPage->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        btnConstraintSectionPage->setText(QCoreApplication::translate("Widget", "Constraint", nullptr));
        btnBackSectionPage->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        label->setText(QCoreApplication::translate("Widget", "        Course Name:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "                   Teacher:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Number of Student: ", nullptr));
        checkBox->setText(QString());
        btnDiscardSecPage->setText(QCoreApplication::translate("Widget", "Discard", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "output page", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tblDepSch->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Widget", "Period", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tblDepSch->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Widget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tblDepSch->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Widget", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tblDepSch->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Widget", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tblDepSch->horizontalHeaderItem(4);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Widget", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tblDepSch->horizontalHeaderItem(5);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Widget", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tblDepSch->horizontalHeaderItem(6);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Widget", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tblDepSch->horizontalHeaderItem(7);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Widget", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tblDepSch->horizontalHeaderItem(8);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Widget", "Sunday", nullptr));
        btnSaveDepTbl->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        btnRemoveDepCell->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tblBatchSch->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Widget", "Period", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tblBatchSch->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Widget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tblBatchSch->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Widget", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tblBatchSch->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Widget", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tblBatchSch->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Widget", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tblBatchSch->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("Widget", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tblBatchSch->horizontalHeaderItem(6);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("Widget", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tblBatchSch->horizontalHeaderItem(7);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("Widget", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tblBatchSch->horizontalHeaderItem(8);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("Widget", "Sunday", nullptr));
        btnSaveBatchSchTbl->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        btnRemBatchSchTbl->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tblCourseSch->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("Widget", "Period", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tblCourseSch->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("Widget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tblCourseSch->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("Widget", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tblCourseSch->horizontalHeaderItem(3);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("Widget", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tblCourseSch->horizontalHeaderItem(4);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("Widget", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tblCourseSch->horizontalHeaderItem(5);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("Widget", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tblCourseSch->horizontalHeaderItem(6);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("Widget", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tblCourseSch->horizontalHeaderItem(7);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("Widget", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tblCourseSch->horizontalHeaderItem(8);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("Widget", "Sunday", nullptr));
        btnSaveCourseTbl->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        btnRemoveCourseTbl->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tblSectionSch->horizontalHeaderItem(0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("Widget", "Period", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tblSectionSch->horizontalHeaderItem(1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("Widget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tblSectionSch->horizontalHeaderItem(2);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("Widget", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tblSectionSch->horizontalHeaderItem(3);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("Widget", "Tuesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tblSectionSch->horizontalHeaderItem(4);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("Widget", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tblSectionSch->horizontalHeaderItem(5);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("Widget", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tblSectionSch->horizontalHeaderItem(6);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("Widget", "Friday", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tblSectionSch->horizontalHeaderItem(7);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("Widget", "Saturday", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tblSectionSch->horizontalHeaderItem(8);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("Widget", "Sunday", nullptr));
        btnSaveSectionTbl->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        btnRemoveSectionTbl->setText(QCoreApplication::translate("Widget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
