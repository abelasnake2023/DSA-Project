#ifndef COURSEBOX_H
#define COURSEBOX_H


#include <QFrame>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QString>
#include "batchbox.h"
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class CourseBox : public QFrame
{
    Q_OBJECT

private:
    QString name;
    QString courseType;
    int creditHour;
    bool _checkBoxClicked;

    // BackEnd
    BatchBox* parentBatchBox;
    ScheduleTableInfo* schTblInfo;

private slots:
    void on_checkBoxClicked();

protected:
    QLineEdit* txtBoxName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLineEdit* txtBoxCourseType;// qt parent child relation will delete it dynamically no need to delete it manually and it is read only
    QLineEdit* txtBoxCreditHour;// qt parent child relation will delete it dynamically no need to delete it manually and it is read only
    QLabel* lblName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLabel* lblCourseType;// qt parent child relation will delete it dynamically no need to delete it manually
    QLabel* lblCreditHour;// qt parent child relation will delete it dynamically no need to delete it manually
    QCheckBox* cBoxSelect;

public:
    CourseBox();
    virtual ~CourseBox();


    QString getName();
    QString getCourseType();
    int getCreditHour();

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
    ScheduleTableInfo* getSchTblInfo();

    void setParentBatchBox(BatchBox* batchBox);
    BatchBox* getBatchBox();

    void updateName();
};

#endif
