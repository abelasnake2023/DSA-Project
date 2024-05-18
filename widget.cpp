#include "widget.h"
#include "./ui_widget.h"
#include <QPalette>
#include "loginpage.h"
#include <QDir>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Main widget
    this->structuralDesign();

    // Main StackedWidget and first page
    this->logInPage = new LogInPage(ui->sWidgetMain, ui->loginPage);
    this->logInPage->logInIconDesign(ui->lblLogInIcon);
    this->eventConnectionLogInPage();
}
Widget::~Widget()
{
    delete this->ui;
    this->ui = nullptr;
    delete this->logInPage;
    this->logInPage = nullptr;
}

void Widget::structuralDesign() {
    this->layout()->setContentsMargins(0, 0, 0, 0); //padding to 0 on all side.
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
