#include "stackedwidgetmain.h"


StackedWidgetMain::StackedWidgetMain(QStackedWidget* sWidgetMain) {
    this->sWidgetMain = sWidgetMain;

    this->pageIndex["logIn_page"] = 0;
    this->pageIndex["signUp_page"] = 1;
    this->pageIndex["user_page"] = 2;
    this->pageIndex["input_page"] = 3;
    this->pageIndex["output_page"] = 4;
}

StackedWidgetMain::~StackedWidgetMain() {
    delete sWidgetMain;
    this->sWidgetMain = nullptr;
}
