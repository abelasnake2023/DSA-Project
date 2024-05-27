#ifndef BATCHPAGE_H
#define BATCHPAGE_H


#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>
#include "batchscheduletable.h"
#include "DepBox.h"
#include "batchbox.h"


class BatchPage : public QObject
{
    Q_OBJECT

private:
    BatchPage();

    QStackedWidget* sWidgetInputPage; // not it's part so should not delete it
    QWidget* batchPage;
    std::map<std::string, int> pageIndexInputPage;

    // All it's widget
    QVBoxLayout* batchVLayout;
    static QVBoxLayout* staticBatchVLayout;
    QPushButton* btnAddBatchPage;
    QPushButton* btnBackBatchPage;
    QPushButton* btnConstBatchPage;
    QPushButton* btnEditCourse;
    QPushButton* btnEditSection;
    QPushButton* btnRemBatchPage;
    BatchScheduleTable* batchSchTbl;
    static DepBox* parentDepBox;


private slots:
    void on_btnAddBatchPageClicked();
    void on_btnBackBatchPageClicked();
    void on_btnConstBatchPageClicked();
    void on_btnEditCoursePageClicked();
    void on_btnEditSectionPageClicked();
    void on_btnRemBatchPageClicked();

public:
    ~BatchPage();
    BatchPage(QStackedWidget* sWidgetInputPage, QWidget* batchPage, BatchScheduleTable* batchSchTbl);

    void setAllItsWidget(
        QVBoxLayout* batchVLayout, QPushButton* btnAddBatchPage, QPushButton* btnBackBatchPage, QPushButton* btnConstBatchPage,
        QPushButton* btnEditCourse, QPushButton* btnEditSection, QPushButton* btnRemBatchPage);


    static void setParentDepBox(DepBox* depBox);
    static DepBox* getParentDepBox();

    static QVBoxLayout* getBatchVLayout();
};


#endif
