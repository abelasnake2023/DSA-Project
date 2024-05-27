#ifndef BATCHBOX_H
#define BATCHBOX_H


#include <QFrame>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QString>
#include "DepBox.h"
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"


/*
 * when BatchBox is deleted it delete all it's Course and Section
*/
class BatchBox : public QFrame
{
    Q_OBJECT

private:
    QString name;
    QString depName; // read only
    bool _checkBoxClicked;

    // BackEnd
    DepBox* parentDepBox;
    ScheduleTableInfo* schTblInfo;
    bool noConstAgain;

private slots:
    void on_checkBoxClicked(bool checked);

protected:
    QLineEdit* txtBoxName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLineEdit* txtBoxDepName;// qt parent child relation will delete it dynamically no need to delete it manually and it is read only
    QLabel* lblName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLabel* lblDepName;// qt parent child relation will delete it dynamically no need to delete it manually
    QCheckBox* cBoxSelect;// qt parent child relation will delete it dynamically no need to delete it manually

public:
    BatchBox();
    virtual ~BatchBox();


    QString getName();
    QString getDepName();
    bool checkBoxClicked();
    void setCheckBoxClicked(bool value);

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
    ScheduleTableInfo* getSchTblInfo();

    void setNoConstAgain(bool value);
    bool getNoConstAgain();

    void setParentDepBox(DepBox* depBox);
    DepBox* getDepBox();

    void updateName();
};


#endif // BATCHBOX_H
