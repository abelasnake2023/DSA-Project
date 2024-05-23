#ifndef COURSESCHEDULIZERBACKEND_VALIDATE_H
#define COURSESCHEDULIZERBACKEND_VALIDATE_H

#include <iostream>
#include <QString>

class Validate {
private:
    int timeInterval; // time interval in min
    int periodCounter;
    QString lastPeriodTime; // example:- 0203 will be stored

public:
    Validate();
    virtual~Validate();

    int getPeriodCounter();
    int getTimeInterval();

    bool timeIntervalValid(int min, std::string& errorMess);
    bool startingTimeValid(QString timeString, QString& errMess);
    void addTime(QString time1, QString time2, int& hourSum, int& minSum);
    QString minTo24Hour(int min);
    QString ridOutSec(QString time);
    void timeToHourMin(QString time, int& hour, int& min); // 0203 to 2 (2 hour) and 3 (3 min)
};


#endif
