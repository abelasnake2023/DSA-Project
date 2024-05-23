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
    QPushButton *btnBackDepPage;
    QWidget *outputPage;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(985, 705);
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
        contDepsWidgets->setGeometry(QRect(0, 0, 22, 20));
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

        btnBackDepPage = new QPushButton(widgetInputPageDepEdit);
        btnBackDepPage->setObjectName("btnBackDepPage");

        verticalLayout_2->addWidget(btnBackDepPage);


        horizontalLayout_4->addWidget(widgetInputPageDepEdit);

        sWidgetInput->addWidget(depPage);

        horizontalLayout_3->addWidget(sWidgetInput);

        sWidgetMain->addWidget(inputPage);
        outputPage = new QWidget();
        outputPage->setObjectName("outputPage");
        label_4 = new QLabel(outputPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 270, 101, 42));
        sWidgetMain->addWidget(outputPage);

        horizontalLayout->addWidget(sWidgetMain);


        retranslateUi(Widget);

        sWidgetMain->setCurrentIndex(0);
        sWidgetInput->setCurrentIndex(0);
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
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "Tusday", nullptr));
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
        btnBackDepPage->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "output page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
