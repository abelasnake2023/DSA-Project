#ifndef SCHEDULETABLEINFO_H
#define SCHEDULETABLEINFO_H


#include <iostream>
#include <vector>
#include <map>
#include <QString>
#include <QTableWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QCheckBox>
#include <QTableWidgetItem>
#include "../../../customqcheckboxforschtable.h"
#include "../../Library/DataStructures/LinkedList/SingleLinkedList.h"
using namespace LinkedList;
/*
 * The first ../ moves up one directory level from Stack.h's directory (Stack) to DataStructures.
   The second ../ moves up one more directory level from DataStructures to Library.
   After that, it goes into the DataStructures directory, then into the Stack directory, and finally includes Stack.h.
 * typically, the reason we use ../../ twice is because Library and InputPage are in the same parent directory (BackEnd_C++),
   so we need to move up two levels to reach the common parent directory, and then navigate to the desired directory (Library or InputPage).
   This is the most direct and concise way to specify the path in this scenario.
*/



// Schedule Id
/*
     * id = int type array.
     * the last digit or the least significant digit represent either it is Monday, Tusday ... Sunday
            - 0 = Monday
            - 1 = Tuesday
            - 2 = Wednesday
            - 3 = Thursday
            - 4 = Friday
            - 5 = Saturday
            - 6 = Sunday
     * except the last digit it represent nth period of the day.
            - example:- int idScd = 211
                * to find which day is the schedule:
                    - int whichDay = idScd % 10 = 1
                * to find nth period of the day?
                    - int periodNum = idScd / 10 = 21
*/

class ScheduleTableInfo : public QObject
{
    Q_OBJECT

private:
    int* schId;
    int* removedSchId;
    int removedSchIdAmount;
    int numOfPeriodPerDay; // it is must the schedule to be rectangle = 7 * numOfPeriodPerDay.
                     // You don't accept `numOfPeriod` you only accept period time gap and number of period per day.
    int periodGap; // the first two digit = hour and the next 2 digit = min, second is not considered
                   // for eg:- 0120 = 1 hour and 20 min period gap
                   // hour = periodGap / 100
                   // min = periodGap % 100
    std::string* periodStartEnd;

    // Ui
    QTableWidget* tbl; // not to be deleted by this class.
    SingleLinkedList<QWidget*> allCheckBoxWidget;
    SingleLinkedList<CustomQCheckBoxForSchTable*> allCheckBox;
    void assignSchId(); // called by the constructor

public:
    ~ScheduleTableInfo();
    ScheduleTableInfo(int numOfPeriodPerDay, int periodGap, std::string* periodStartEnd);


    void constructSchTable(QTableWidget* tbl);
    void removePeriodOrSchId(QTableWidget* tbl);
    void removePeriodOrSchId(QTableWidget* tbl, int* schIdToBeRemoved, int size);

    int* getSchId();
    int* getRemovedSchId();
    int getRemovedSchIdAmount();
    int getNumOfPeriodPerDay();
    int getPeriodGap();
    std::string* getPeriodStartEnd();
};


#endif
