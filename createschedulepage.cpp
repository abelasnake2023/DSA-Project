#include "createschedulepage.h"


QTableWidget* CreateSchedulePage::staticTblScheduleTableStruct = nullptr;
ScheduleTableInfo* CreateSchedulePage::staticSchTblInfo = nullptr;
CreateSchedulePage::CreateSchedulePage(QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedule)
    // to initialize Backend attribute
    :  CreateSchedulePage()
{
    this->sWidgetInputPage = sWidgetInputPage;
    this->sWidgetCreateSchedule = sWidgetCreateSchedule;

    this->pageIndexInputPage["createSchedulePage"] = 0;
    this->pageIndexInputPage["depPage"] = 1;

    this->pageIndexCreateSchedule["scheduleTimeIntervalPage"] = 0;
    this->pageIndexCreateSchedule["scheduleTableStructPage"] = 1;


    // Event connection for this page is after the method setAllItsWidget is called b/c otherwise scince the widget of CreateSchedulePage is nullptr
    // it will be run time error.
}
CreateSchedulePage::CreateSchedulePage() {
    this->val = new Validate();
    this->schTblInfo = nullptr;
}
CreateSchedulePage::~CreateSchedulePage() {
    delete sWidgetCreateSchedule;
    this->sWidgetCreateSchedule = nullptr;
    delete btnBackScheduleTimeInterval;
    btnBackScheduleTimeInterval = nullptr;
    delete btnNextScheduleTimeInterval;
    btnNextScheduleTimeInterval = nullptr;
    delete btnSetTimeInterval;
    btnSetTimeInterval = nullptr;
    delete lblTimeInterval;
    lblTimeInterval = nullptr;
    delete lblTimeIntervalMin;
    lblTimeIntervalMin = nullptr;
    delete txtBoxTimeInterval;
    txtBoxTimeInterval = nullptr;
    delete btnAddScheduleTimeInterval;
    btnAddScheduleTimeInterval = nullptr;
    delete lblPeriodStartingTime;
    lblPeriodStartingTime = nullptr;
    delete tEditPeriodStartingTime;
    tEditPeriodStartingTime = nullptr;

    // Sub - Page name scheduleTableStructPage
    delete btnBackScheduleTableStruct;
    btnBackScheduleTableStruct = nullptr;
    delete btnRemoveScheduleTableStruct;
    btnRemoveScheduleTableStruct = nullptr;
    delete btnSaveScheduleTableStruct;
    btnSaveScheduleTableStruct = nullptr;
    delete tblScheduleTableStruct;
    tblScheduleTableStruct = nullptr;

    // back end C++
    delete this->val;
    this->val = nullptr;
    delete this->schTblInfo;
    this->schTblInfo = nullptr;
}



void CreateSchedulePage::setAllItsWidget(
    /* scheduleTimeIntervalPage */
    QPushButton* btnBackScheduleTimeInterval, QPushButton* btnNextScheduleTimeInterval, QPushButton* btnSetTimeInterval,
    QLabel* lblTimeInterval, QLabel* lblTimeIntervalMin, QLineEdit* txtBoxTimeInterval,
    QPushButton* btnAddScheduleTimeInterval, QLabel* lblPeriodStartingTime, QTimeEdit* tEditPeriodStartingTime,

    /* scheduleTableStructPage */
    QPushButton* btnBackScheduleTableStruct, QPushButton* btnRemoveScheduleTableStruct,
    QPushButton* btnSaveScheduleTableStruct, QTableWidget* tblScheduleTableStruct, QTableWidget* tblPeriodTimeInterval
    ) {

    /* scheduleTimeIntervalPage */
    this->btnBackScheduleTimeInterval = btnBackScheduleTimeInterval;
    this->btnNextScheduleTimeInterval = btnNextScheduleTimeInterval;
    this->btnSetTimeInterval = btnSetTimeInterval;
    this->lblTimeInterval = lblTimeInterval;
    this->lblTimeIntervalMin = lblTimeIntervalMin;
    this->txtBoxTimeInterval = txtBoxTimeInterval;
    this->btnAddScheduleTimeInterval = btnAddScheduleTimeInterval;
    this->lblPeriodStartingTime = lblPeriodStartingTime;
    this->tEditPeriodStartingTime = tEditPeriodStartingTime;

    /* scheduleTableStructPage */
    this->btnBackScheduleTableStruct = btnBackScheduleTableStruct;
    this->btnRemoveScheduleTableStruct = btnRemoveScheduleTableStruct;
    this->btnSaveScheduleTableStruct = btnSaveScheduleTableStruct;
    this->tblScheduleTableStruct = tblScheduleTableStruct;
    this->tblPeriodTimeInterval = tblPeriodTimeInterval;

    staticTblScheduleTableStruct = this->tblScheduleTableStruct;


    // Event connection for Schedule Time Interval Page
      connect(this->btnSetTimeInterval, &QPushButton::clicked, this, &CreateSchedulePage::on_btnSetTimeInterval);
      connect(this->btnAddScheduleTimeInterval, &QPushButton::clicked, this, &CreateSchedulePage::on_btnAddPeriod);
      connect(this->btnNextScheduleTimeInterval, &QPushButton::clicked, this, &CreateSchedulePage::on_btnNext);
      connect(this->btnBackScheduleTimeInterval, &QPushButton::clicked, this, &CreateSchedulePage::on_btnBack);

    // Event connection for Schedule Table Struct Page
      connect(this->btnBackScheduleTableStruct, &QPushButton::clicked, this, &CreateSchedulePage::on_btnBackScheduleTableStruct);
      connect(this->btnSaveScheduleTableStruct, &QPushButton::clicked, this, &CreateSchedulePage::on_btnSaveScheduleTableStruct);
      connect(this->btnRemoveScheduleTableStruct, &QPushButton::clicked, this, &CreateSchedulePage::on_btnRemoveScheduleTableStruct);
}



void CreateSchedulePage::on_btnSetTimeInterval() {
    QString qstring = this->txtBoxTimeInterval->text();
    std::string minStr = qstring.toStdString();
    int min = 0;
    bool validMin = false;
    std::string errMess = "";

    try {
        min = std::stoi(minStr);
        validMin = this->val->timeIntervalValid(min, errMess);

        if(!validMin) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Error!");
            msgBox.setText(QString::fromStdString(errMess));
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setStandardButtons(QMessageBox::Ok);

            msgBox.exec();
            return;
        }
    }
    catch(const std::exception& ex) {
        std::cerr << "Can't convert time interval to integer!" << std::endl;

        QMessageBox msgBox;
        msgBox.setWindowTitle("Error!");
        msgBox.setText("Invalid time format!");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);

        msgBox.exec();
        return;
    }


    try {
        this->txtBoxTimeInterval->setReadOnly(true);
        this->txtBoxTimeInterval->setStyleSheet("color: red; font-weight: bold;");
        this->txtBoxTimeInterval->repaint();
        this->btnSetTimeInterval->setEnabled(false);
        this->btnSetTimeInterval->repaint();

        // enable adding period and other
        this->btnAddScheduleTimeInterval->setEnabled(true);
        this->btnNextScheduleTimeInterval->setEnabled(true);
    }
    catch(const std::exception& ex) {
        try {
            this->txtBoxTimeInterval->setReadOnly(true);
            this->txtBoxTimeInterval->setStyleSheet("color: red; font-weight: bold;");
            this->txtBoxTimeInterval->repaint();
            this->btnSetTimeInterval->setEnabled(false);
            this->btnSetTimeInterval->repaint();

            // enable adding period and other
            this->btnAddScheduleTimeInterval->setEnabled(true);
            this->btnNextScheduleTimeInterval->setEnabled(true);
        }
        catch(const std::exception& ex2) {
            return;
        }
        return;
    }
}
void CreateSchedulePage::on_btnAddPeriod() {
    QTime time = this->tEditPeriodStartingTime->time();
    // Convert the time to 24-hour format string
    QString timeStaring24Hour = time.toString("HH:mm:ss"); // example:- 13:01:00

    QString errMess = "";
    bool valid = this->val->startingTimeValid(timeStaring24Hour, errMess);

    if(!valid) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error!");
        msgBox.setText(errMess);
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);

        msgBox.exec();
        return;
    }

    // Know it's valid to add the period
    // 1st update label
    int periodNum = this->val->getPeriodCounter() + 1;
    QString strForLbl = "Period " + QString::number(periodNum) + " Starting Time:";
    this->lblPeriodStartingTime->setText(strForLbl);

    // 2nd update table
    QString col1 = QString::number(periodNum - 1);
    QString initTime = timeStaring24Hour;
    time = time.addSecs(this->val->getTimeInterval() * 60);
    QString finalTime = time.toString("HH:mm:ss");
    QString col2 = initTime + " - " + finalTime;

    this->tblPeriodTimeInterval->setRowCount(periodNum - 1);
    int rowToInsert = periodNum - 2;

    QTableWidgetItem* qtiCol1 = new QTableWidgetItem(col1);
    QTableWidgetItem* qtiCol2 = new QTableWidgetItem(col2);
    this->tblPeriodTimeInterval->setItem(rowToInsert, 0, qtiCol1);
    this->tblPeriodTimeInterval->setItem(rowToInsert, 1, qtiCol2);
    this->tblPeriodTimeInterval->resizeColumnsToContents();
}
void CreateSchedulePage::on_btnNext() {
    if(!this->val->validToChangeToPageScheduleTableStruct()) {
        this->sWidgetCreateSchedule->setCurrentIndex(this->pageIndexCreateSchedule["scheduleTableStructPage"]); // change to next page.
        return;
    }

    // Construct the the table found next page:
    if(this->schTblInfo != nullptr) {
        delete this->schTblInfo;
    }

    QString timeIntervalIn0000Form  = this->val->minTo24Hour(this->val->getTimeInterval());
    this->schTblInfo = new ScheduleTableInfo(this->val->getPeriodCounter(), timeIntervalIn0000Form.toInt(), this->allValueOfCol2());
    this->schTblInfo->constructSchTable(this->tblScheduleTableStruct);
    staticSchTblInfo = this->schTblInfo;

    this->sWidgetCreateSchedule->setCurrentIndex(this->pageIndexCreateSchedule["scheduleTableStructPage"]); // change to next page.
}
void CreateSchedulePage::on_btnBack() {
    try {
        // enable input for the time interval input
        this->txtBoxTimeInterval->setReadOnly(false);
        this->txtBoxTimeInterval->setStyleSheet("color: white; font-weight: normal;");
        this->txtBoxTimeInterval->repaint();
        this->btnSetTimeInterval->setEnabled(true);
        this->btnSetTimeInterval->repaint();

        // disable adding period and other
        this->btnAddScheduleTimeInterval->setEnabled(false);
        this->btnNextScheduleTimeInterval->setEnabled(false);

        // Clear the table and Clear the this->val object
        delete this->val;
        this->val = new Validate();
        this->tblPeriodTimeInterval->setRowCount(0);
    }
    catch(const std::exception& ex) {
        try {
            this->txtBoxTimeInterval->setReadOnly(false);
            this->txtBoxTimeInterval->setStyleSheet("color: white; font-weight: normal;");
            this->txtBoxTimeInterval->repaint();
            this->btnSetTimeInterval->setEnabled(true);
            this->btnSetTimeInterval->repaint();

            // disable adding period and other
            this->btnAddScheduleTimeInterval->setEnabled(false);
            this->btnNextScheduleTimeInterval->setEnabled(false);

            // Clear the table and Clear the this->val object
            delete this->val;
            this->val = new Validate();
            this->tblPeriodTimeInterval->setRowCount(0);
        }
        catch(const std::exception& ex2) {
            return;
        }
        return;
    }
}

void CreateSchedulePage::on_btnBackScheduleTableStruct() {
    this->sWidgetCreateSchedule->setCurrentIndex(this->pageIndexCreateSchedule["scheduleTimeIntervalPage"]);
}
void CreateSchedulePage::on_btnRemoveScheduleTableStruct() { // removing period(single cell or the whole day)
    try {
        this->schTblInfo->removePeriodOrSchId(this->tblScheduleTableStruct);
    }
    catch(const std::exception& ex) {
        qDebug() << "Error: void CreateSchedulePage::on_btnRemoveScheduleTableStruct()" << "\n";
        qDebug() << ex.what() << "\n\n";
    }
}
void CreateSchedulePage::on_btnSaveScheduleTableStruct() {
    this->sWidgetInputPage->setCurrentIndex(this->pageIndexInputPage["depPage"]);
}





std::string* CreateSchedulePage::allValueOfCol2() {
    std::string* strCol2 = new std::string[this->tblPeriodTimeInterval->rowCount()]; // since it will be passed to ScheduleTableInfo object,
    // ScheduleTableInfo object will delete it.
    int column = 1;
    for (int row = 0; row < this->tblPeriodTimeInterval->rowCount(); ++row) {
        QTableWidgetItem *item = this->tblPeriodTimeInterval->item(row, column);
        strCol2[row] = item->text().toStdString();
    }

    return strCol2;
}

ScheduleTableInfo* CreateSchedulePage::getSchTblInfo() {
    return staticSchTblInfo;
}
QTableWidget* CreateSchedulePage::getTblScheduleTableStruct() {
    return CreateSchedulePage::staticTblScheduleTableStruct;
}
