#ifndef DEPBOX_H
#define DEPBOX_H


#include <QFrame>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QString>
class BatchBox;
#include "BackEnd_C++/InputPage/CreateSchedule/scheduletableinfo.h"
#include "BackEnd_C++/Library/DataStructures/LinkedList/SingleLinkedList.h"
using namespace LinkedList;


/*
 * when DepBox is deleted it delete all it's Batch and when Batch is deleted
   it deletes all it's section
*/
class DepBox : public QFrame
{
    Q_OBJECT

private:
    QString name;
    QString manName;
    bool _checkBoxClicked;
    SingleLinkedList<BatchBox*>* allBatchBox;

    // BackEnd
    ScheduleTableInfo* schTblInfo;
    bool noConstAgain;

    void delAllBatchBox();

private slots:
    void on_checkBoxClicked(bool checked);

protected:
    QLineEdit* txtBoxName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLineEdit* txtBoxManName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLabel* lblName;// qt parent child relation will delete it dynamically no need to delete it manually
    QLabel* lblManName;// qt parent child relation will delete it dynamically no need to delete it manually
    QCheckBox* cBoxSelect;// qt parent child relation will delete it dynamically no need to delete it manually

public:
    DepBox();
    virtual ~DepBox();


    QString getName();
    QString getManName();
    bool checkBoxClicked();
    void setCheckBoxClicked(bool value);

    void setSchTblInfo(ScheduleTableInfo* schTblInfo);
    ScheduleTableInfo* getSchTblInfo();

    void setNoConstAgain(bool value);
    bool getNoConstAgain();

    SingleLinkedList<BatchBox*>* getAllBatchBox();
    void addBatchBox(BatchBox* batchBox);
};


#endif
