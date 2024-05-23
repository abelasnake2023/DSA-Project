#ifndef CREATESCHEDULEPAGE_H
#define CREATESCHEDULEPAGE_H


#include "BackEnd_C++/Library/DataStructures/Stack/Stack.h"
using namespace stack;
#include <QStackedWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTableWidget>
#include <QTimeEdit>
#include <QVBoxLayout>
#include <QMessagebox>
#include <map>
#include <string>
#include "BackEnd_C++\InputPage\CreateSchedule\Validate.h"



class CreateSchedulePage : public QObject
{
    Q_OBJECT
protected:
    Stack<QTableWidgetItem*>* delQTableWidgetItem;
    QStackedWidget* sWidgetInputPage; // not it's property so no need to delete
    QStackedWidget* sWidgetCreateSchedule;
    std::map<std::string, int> pageIndexInputPage;
    std::map<std::string, int> pageIndexCreateSchedule;

    // All it's widget of Create Schedule Page
    // Sub - Page name scheduleTimeIntervalPage
    QPushButton* btnBackScheduleTimeInterval;
    QPushButton* btnNextScheduleTimeInterval;
    QPushButton* btnSetTimeInterval;
    QLabel* lblTimeInterval;
    QLabel* lblTimeIntervalMin;
    QLineEdit* txtBoxTimeInterval;
    QPushButton* btnAddScheduleTimeInterval;
    QLabel* lblPeriodStartingTime;
    QTimeEdit* tEditPeriodStartingTime;
    QTableWidget* tblPeriodTimeInterval;

    // Sub - Page name scheduleTableStructPage
    QPushButton* btnBackScheduleTableStruct;
    QPushButton* btnRemoveScheduleTableStruct;
    QPushButton* btnSaveScheduleTableStruct;
    QTableWidget* tblScheduleTableStruct;


    // BackEnd_C++ objects
    Validate* val;

    // Function and Constructor that are private
    CreateSchedulePage();
    void deleteUnusedQTableWidgetItem();

public slots:
    // Sub - Page name scheduleTimeIntervalPage
    void on_btnSetTimeInterval();
    void on_btnAddPeriod();
    void on_btnNext();
    void on_btnBack();

    // Sub - Page name scheduleTableStructPage
    void on_btnBackScheduleTableStruct();
    void on_btnSaveScheduleTableStruct();
    void on_btnRemoveScheduleTableStruct();

public:
    CreateSchedulePage(QStackedWidget* sWidgetInputPage, QStackedWidget* sWidgetCreateSchedule);

    virtual ~CreateSchedulePage();

    void setAllItsWidget(
        /* scheduleTimeIntervalPage */
        QPushButton* btnBackScheduleTimeInterval, QPushButton* btnNextScheduleTimeInterval, QPushButton* btnSetTimeInterval,
        QLabel* lblTimeInterval, QLabel* lblTimeIntervalMin, QLineEdit* txtBoxTimeInterval,
        QPushButton* btnAddScheduleTimeInterval, QLabel* lblPeriodStartingTime, QTimeEdit* tEditPeriodStartingTime,


        /* scheduleTableStructPage */
        QPushButton* btnBackScheduleTableStruct, QPushButton* btnRemoveScheduleTableStruct,
        QPushButton* btnSaveScheduleTableStruct, QTableWidget* tblScheduleTableStruct, QTableWidget* tblPeriodTimeInterval
        );
};


#endif
