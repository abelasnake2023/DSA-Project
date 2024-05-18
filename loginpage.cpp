#include "loginpage.h"
#include <QLabel>
#include <QPushButton>


LogInPage::LogInPage(QStackedWidget* sWidgetMain, QWidget* logInPage) : StackedWidgetMain(sWidgetMain) {
    this->logInPage = logInPage;
}

LogInPage::~LogInPage() {
    delete logInPage;
    this->logInPage = nullptr;
}

void LogInPage::logInIconDesign(QLabel* lblLogInIcon) {
    // login Icon
    QPixmap pix(":/logInIcon.png");
    int w = lblLogInIcon->width();
    int h = lblLogInIcon->height();
    lblLogInIcon->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

void LogInPage::on_btnLogInClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["user_page"]);
}

void LogInPage::on_btnSignUpClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["signUp_page"]);
}
