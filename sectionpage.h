#ifndef SECTIONPAGE_H
#define SECTIONPAGE_H


#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>
#include "sectionscheduletable.h"
#include "batchBox.h"
#include "sectionbox.h"


class SectionPage : public QObject
{
    Q_OBJECT

private:
    SectionPage();

    QStackedWidget* sWidgetInputPage; // not it's part so should not delete it
    QWidget* sectionPage;
    std::map<std::string, int> pageIndexInputPage;

    // All it's widget
    QPushButton* btnAddSectionPage;
    QPushButton* btnBackSectionPage;
    QPushButton* btnConstraintSectionPage;
    QPushButton* btnRemSection;
    SectionScheduleTable* sectionSchTbl;
    QVBoxLayout* vLayoutSectionBoxAdded;
    static QVBoxLayout* staticVLayoutSectionBoxAdded;
    QVBoxLayout* vLayoutCourseSectionBox;
    static QVBoxLayout* staticVLayoutCourseSectionBox;
    QPushButton* btnDiscardSecPage;
    static BatchBox* parentBatchBox;


private slots:
    void on_btnAddSectionPageClicked();
    void on_btnBackSectionPageClicked();
    void on_btnConstSectionPageClicked();
    void on_btnRemSectionPageClicked();
    void on_btnDiscardSecPage();

public:
    ~SectionPage();
    SectionPage(QStackedWidget* sWidgetInputPage, QWidget* sectionPage, SectionScheduleTable* sectionSchTbl);

    void setAllItsWidget(
        QPushButton* btnAddSectionPage, QPushButton* btnBackSectionPage, QPushButton* btnConstSectionPage,
        QPushButton* btnRemSectionPage, QVBoxLayout* vLayoutSectionBoxAdded,
        QVBoxLayout* vLayoutCourseSectionBox, QPushButton* btnDiscardSecPage);


    static void setParentBatchBox(BatchBox* batchBox);
    static BatchBox* getParentBatchBox();

    static QVBoxLayout* getStaticVLayoutSectionBoxAdded();
    static QVBoxLayout* getStaticVLayoutCourseSectionBox();
};


#endif
