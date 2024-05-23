#include "userpage.h"
#include <QMessagebox>



UserPage::UserPage(QStackedWidget* sWidgetMain, QWidget* userPage)
    : StackedWidgetMain(sWidgetMain)
{
    this->userPage = userPage;
}

UserPage::~UserPage() {
    delete this->userPage;
    this->userPage = nullptr;
}


void UserPage::on_btnSavedScheduleClicked() {
    QMessageBox msgBox;
    msgBox.setWindowTitle("Sorry!");
    msgBox.setText("Hello! 🌟 Stay tuned for the upcoming update that will bring the saved schedule feature to "
                   "life in the near future!");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);

    msgBox.exec();
}

void UserPage::on_btnCreateScheduleClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["input_page"]);
}

void UserPage::on_btnBackClicked() {
    sWidgetMain->setCurrentIndex(pageIndex["logIn_page"]);
}
