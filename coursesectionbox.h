#ifndef COURSESECTIONBOX_H
#define COURSESECTIONBOX_H

#include <QObject>
#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QSpacerItem>
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


class CourseSectionBox : public QFrame
{
    Q_OBJECT

private:
    QString courseName; // read only
    QString teacherName;
    int numOfStudent;

    QVBoxLayout* vLayoutLeft;
    QVBoxLayout* vLayoutRight;
    QHBoxLayout* hLayoutInputs;
    QVBoxLayout* vLayoutForCheckBox;

    QLineEdit* txtBoxCourseName;
    QLineEdit* txtBoxTeacherName;
    QLineEdit* txtBoxNumOfStudent;

    QLabel* lblCourseName;
    QLabel* lblTeacherName;
    QLabel* lblNumOfStudent;

    QSpacerItem* verticalSpacer1;
    QSpacerItem* verticalSpacer2;
    QCheckBox* checkBox;

    ScheduleTableInfo* schTblInfo;
    bool _checkBoxClicked;

public:
    CourseSectionBox();
};


#endif
