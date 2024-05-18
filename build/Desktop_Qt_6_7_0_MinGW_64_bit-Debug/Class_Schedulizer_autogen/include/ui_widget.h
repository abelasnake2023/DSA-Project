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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
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
    QLabel *label;
    QWidget *userPage;
    QLabel *label_2;
    QWidget *inputPage;
    QLabel *label_3;
    QWidget *outputPage;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1085, 642);
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
        label = new QLabel(signUpPage);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 280, 101, 42));
        sWidgetMain->addWidget(signUpPage);
        userPage = new QWidget();
        userPage->setObjectName("userPage");
        label_2 = new QLabel(userPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 330, 101, 42));
        sWidgetMain->addWidget(userPage);
        inputPage = new QWidget();
        inputPage->setObjectName("inputPage");
        label_3 = new QLabel(inputPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 300, 101, 42));
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
        label->setText(QCoreApplication::translate("Widget", "SignUp page", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "user page", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "input page", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "output page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
