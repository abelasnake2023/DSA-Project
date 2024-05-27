#ifndef COURSEPAGE_H
#define COURSEPAGE_H


#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>
#include "courseScheduletable.h"
#include "batchBox.h"
#include "coursebox.h"


class CoursePage : public QObject
{
    Q_OBJECT

private:
    CoursePage();

    QStackedWidget* sWidgetInputPage; // not it's part so should not delete it
    QWidget* coursePage;
    std::map<std::string, int> pageIndexInputPage;

    // All it's widget
    QVBoxLayout* courseVLayout;
    static QVBoxLayout* staticCourseVLayout;
    QPushButton* btnAddCoursePage;
    QPushButton* btnBackCoursePage;
    QPushButton* btnConstraintCoursePage;
    QPushButton* btnRemCourse;
    CourseScheduleTable* courseSchTbl;
    static BatchBox* parentBatchBox;


private slots:
    void on_btnAddCoursePageClicked();
    void on_btnBackCoursePageClicked();
    void on_btnConstCoursePageClicked();
    void on_btnRemCoursePageClicked();

public:
    ~CoursePage();
    CoursePage(QStackedWidget* sWidgetInputPage, QWidget* coursePage, CourseScheduleTable* courseSchTbl);

    void setAllItsWidget(
        QVBoxLayout* courseVLayout, QPushButton* btnAddCoursePage, QPushButton* btnBackCoursePage, QPushButton* btnConstCoursePage,
        QPushButton* btnRemCoursePage);


    static void setParentBatchBox(BatchBox* batchBox);
    static BatchBox* getParentBatchBox();

    static QVBoxLayout* getCourseVLayout();
};


#endif // COURSEPAGE_H
