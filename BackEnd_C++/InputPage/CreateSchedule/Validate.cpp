#include "Validate.h"
#include <QDebug>


Validate::~Validate() {

}
Validate::Validate() {
    this->timeInterval = -1;
    this->periodCounter = 0;
    lastPeriodTime = "0000";
}


int Validate::getTimeInterval() {
    return this->timeInterval;
}
int Validate::getPeriodCounter() {
    return this->periodCounter;
}


bool Validate::timeIntervalValid(int min, std::string& errorMess) {
    // Since one period can't be greater than 24 hour
    // min / 60 must < 24

    if(min / 60 >= 24) {
        int invalidMin = 24 * 60;
        std::string invalidMinToStr = std::to_string (invalidMin);
        errorMess = "One Period Should Be Less than 24 hour or " + invalidMinToStr +
                " min!";
        return false;
    }
    else if(min < 1) {
        errorMess = "Invalid Time Interval!";
        return false;
    }

    this->timeInterval = min;
    return true;
}

bool Validate::startingTimeValid(QString timeString, QString& errMess) {
    timeString = this->ridOutSec(timeString); // example:- 0203 will be returned
    QString periodLen = this->minTo24Hour(this->timeInterval); // example:- 0203 will be returned

    int hourSum = 0;
    int minSum = 0;
    this->addTime(timeString, periodLen, hourSum, minSum);

    if(hourSum >= 24) { // Period jump next day
        errMess = "Error: Period jump next day!";
        return false;
    }

    if(this->periodCounter == 0) {
        this->periodCounter++;
        this->lastPeriodTime = timeString;
        return true;
    }

    int minimumHourSTime = 0;
    int minimumMinSTime = 0;
    this->addTime(periodLen, this->lastPeriodTime, minimumHourSTime, minimumMinSTime);

    int sHour = 0;
    int sMin = 0;
    this->timeToHourMin(timeString, sHour, sMin);
    if(sHour < minimumHourSTime) {
        errMess = "Error: Period overlap with previous period!";
        return false;
    }
    else if(sHour == minimumHourSTime) {
        if(sMin < minimumMinSTime) {
            errMess = "Error: Period overlap with previous period!";
            return false;
        }
    }

    this->periodCounter++;
    this->lastPeriodTime = timeString;
    return true;
}

void Validate::addTime(QString time1, QString time2, int& hourSum, int& minSum) {
    QChar time1Char[4];
    time1Char[0] = time1.at(0);
    time1Char[1] = time1.at(1);
    time1Char[2] = time1.at(2);
    time1Char[3] = time1.at(3);
    int time1Hour = time1Char[0].digitValue() * 10 + time1Char[1].digitValue();
    int time1Min = time1Char[2].digitValue() * 10 + time1Char[3].digitValue();

    QChar time2Char[4];
    time2Char[0] = time2.at(0);
    time2Char[1] = time2.at(1);
    time2Char[2] = time2.at(2);
    time2Char[3] = time2.at(3);
    int time2Hour = time2Char[0].digitValue() * 10 + time2Char[1].digitValue();
    int time2Min = time2Char[2].digitValue() * 10 + time2Char[3].digitValue();

    hourSum = time2Hour + time1Hour + (time1Min + time2Min) / 60;
    minSum = (time1Min + time2Min) % 60;
}

QString Validate::minTo24Hour(int min) { // 123 min == 0203
    int hour = min / 60;
    int mm = min % 60;
    QString time = "";

    if(hour < 10) {
        time = "0" + QString::number(hour);
    }
    else {
        time = QString::number(hour);
    }

    if(mm < 10) {
        time = time + "0" + QString::number(mm);
    }
    else {
        time = time + QString::number(mm);
    }

    return time;
}

QString Validate::ridOutSec(QString time) { // 02:03:00 to 0203
    QString newTime = "";
    newTime = time.at(0);
    newTime = newTime + time.at(1);
    newTime = newTime + time.at(3);
    newTime = newTime + time.at(4);

    return newTime;
}

void Validate::timeToHourMin(QString time, int& hour, int& min) {
    QChar timeChar[4];
    timeChar[0] = time.at(0);
    timeChar[1] = time.at(1);
    timeChar[2] = time.at(2);
    timeChar[3] = time.at(3);
    hour = timeChar[0].digitValue() * 10 + timeChar[1].digitValue();
    min = timeChar[2].digitValue() * 10 + timeChar[3].digitValue();
}

bool Validate::validToChangeToPageScheduleTableStruct() {
    return periodCounter > 0;
}
