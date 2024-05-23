#include "signuppage.h"



SignUpPage::SignUpPage(QStackedWidget* sWidgetMain, QWidget* signUpPage)
    : StackedWidgetMain(sWidgetMain)
{
    this->signUpPage = signUpPage;
}

SignUpPage::~SignUpPage() {
    delete this->signUpPage;
    this->signUpPage = nullptr;
}


void SignUpPage::on_btnCreateAccountClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["user_page"]);
}

void SignUpPage::on_btnBackClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["logIn_page"]);
}
