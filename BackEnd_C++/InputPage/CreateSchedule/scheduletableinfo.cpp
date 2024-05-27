#include "scheduletableinfo.h"


ScheduleTableInfo::~ScheduleTableInfo() {
    try {
        delete[] this->removedSchId;
        delete[] this->schId;
        delete[] this->periodStartEnd;
    }
    catch(const std::exception& ex) {
        qDebug() << ex.what() << "\n\n";
        return;
    }
}

ScheduleTableInfo::ScheduleTableInfo(int numOfPeriodPerDay, int periodGap, std::string* periodStartEnd) {
    this->numOfPeriodPerDay = numOfPeriodPerDay;
    this->periodGap = periodGap;
    this->periodStartEnd = periodStartEnd; // only from 0 - numOfPeriodPerDay periodStartingTime are valid.
    this->schId = new int[numOfPeriodPerDay * 7];
    this->removedSchId = new int[numOfPeriodPerDay * 7];
    this->removedSchIdAmount = 0;
    assignSchId();

    // Ui
    this->tbl = nullptr;
}


void ScheduleTableInfo::assignSchId() { // called by the constructor
    for(int i = 0; i < this->numOfPeriodPerDay * 7; i++) {
        this->schId[i] = ((i % this->numOfPeriodPerDay) * 10) + (i / this->numOfPeriodPerDay);
    }
}


void ScheduleTableInfo::constructSchTable(QTableWidget* tbl) {
    this->tbl = tbl;

    tbl->setRowCount(this->numOfPeriodPerDay);
    // I assume setColumnCount is setted in the designer to 9
    // the first 2 = period Num and time gap and rest = days of the week

    // Inserting the first 2 column for the whole row:
    QString col[2]; // the first two are string the rest are checkBox
    for(int i = 0; i < this->numOfPeriodPerDay; i++) { // loops for all rows
        col[0] = QString::number(i + 1);
        col[1] = QString::fromStdString(this->periodStartEnd[i]);

        QTableWidgetItem* qtiCol1 = new QTableWidgetItem(col[0]);
        QTableWidgetItem* qtiCol2 = new QTableWidgetItem(col[1]);

        tbl->setItem(i, 0, qtiCol1);
        tbl->setItem(i, 1, qtiCol2);
    }

    // Creating the check Boxes for the period(mon to sund) = 7 * numOfPeriodPerDay
    for(int i = 0; i < this->numOfPeriodPerDay * 7; i++) {
        QWidget* widget = new QWidget();

        CustomQCheckBoxForSchTable* checkBox = new CustomQCheckBoxForSchTable(widget);
        int schIdCheckBox = this->schId[i];
        checkBox->setSchId(schIdCheckBox);

        QHBoxLayout* hLayout = new QHBoxLayout(widget);
        hLayout->addWidget(checkBox);
        hLayout->setAlignment(Qt::AlignCenter);
        hLayout->setContentsMargins(0, 0, 0, 0);
        widget->setLayout(hLayout);

        allCheckBoxWidget.insertAtLast(widget);
        allCheckBox.insertAtLast(checkBox);
    }

    // Inserting(check box) the column b/n [3 and 9] for the whole row:    
    for(int col = 2, i = 0; col < 9; col++) {
        for(int row = 0; row < this->numOfPeriodPerDay; row++) {
            tbl->setCellWidget(row, col, allCheckBoxWidget.getData(i++));
        }
    }

    tbl->resizeColumnsToContents();
}
void ScheduleTableInfo::removePeriodOrSchId(QTableWidget* tbl) {
    int row = 0;
    int col = 0;
    int delSchId = 0;

    for(int i = 0; i < allCheckBox.getSize(); i++) {
        if(allCheckBox.getData(i)->checkBoxClicked()) {
            // for backend purpose add the schId that is removed
            this->removedSchId[this->removedSchIdAmount++] = allCheckBox.getData(i)->getSchId();

            // find it's row and it's column by using the info from scheduleId
            delSchId = allCheckBox.getData(i)->getSchId();
            col = (delSchId % 10) + 2;
            row = (delSchId) / 10;

            qDebug() << "Row: " << row << " Col: " << col;

            // remove the checkBox node from the linked list not the checkBox itself b/c it is managed by it's parent
            allCheckBox.deleteAtAnyPosition(i);
            i--; // since size is decremented by 1 b/c we decrement the linked list the deleted node position will be
            // the node next to the deleted node position

            // set deleted cell place with empty
            tbl->setCellWidget(row, col, new QWidget());
        }
    }
}
void ScheduleTableInfo::removePeriodOrSchId(QTableWidget* tbl, int* schIdToBeRemoved, int size) {
    QString replaceNull = "Null";
    int col = 0;
    int row = 0;
    int checkBoxSchId = 0;

    for(int i = 0; i < allCheckBox.getSize(); i++) {
        checkBoxSchId = allCheckBox.getData(i)->getSchId();
        for(int j = 0; j < size; j++) {
            if(checkBoxSchId == schIdToBeRemoved[j]) {
                // for backend purpose add the schId that is removed
                this->removedSchId[this->removedSchIdAmount++] = checkBoxSchId;

                // find it's row and it's column by using the info from scheduleId
                col = (checkBoxSchId % 10) + 2;
                row = (checkBoxSchId) / 10;

                qDebug() << "3 param row and col: ";
                qDebug() << "Row: " << row << " Col: " << col;

                // remove the checkBox node from the linked list not the checkBox itself b/c it is managed by it's parent
                allCheckBox.deleteAtAnyPosition(i);
                i--; // since size is decremented by 1 b/c we decrement the linked list the deleted node position will be
                // the node next to the deleted node position

                // set deleted cell place with empty
                tbl->setCellWidget(row, col, new QWidget());

                break;
            }
        }
    }
}


int* ScheduleTableInfo::getSchId() {
    return this->schId;
}
int* ScheduleTableInfo::getRemovedSchId() {
    return this->removedSchId;
}
int ScheduleTableInfo::getRemovedSchIdAmount() {
    return this->removedSchIdAmount;
}
int ScheduleTableInfo::getNumOfPeriodPerDay() {
    return this->numOfPeriodPerDay;
}
int ScheduleTableInfo::getPeriodGap() {
    return this->periodGap;
}
std::string* ScheduleTableInfo::getPeriodStartEnd() {
    return this->periodStartEnd;
}
