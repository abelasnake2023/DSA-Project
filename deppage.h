#ifndef DEPPAGE_H
#define DEPPAGE_H


#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <map>
#include <string>



// Form -> StackedWidgetMain -> InputPage -> DepPage
class DepPage : public QObject
{
    Q_OBJECT
protected:
    QStackedWidget* sWidgetInputPage; // not it's part so should not delete it
    QWidget* depPage;
    std::map<std::string, int> pageIndexInputPage;


    // All it's widget
    QPushButton* btnAPolicy;
    QPushButton* btnAddDep;
    QPushButton* btnBatch;
    QPushButton* btnDelDep;
    QPushButton* btnDepConstraint;
    QPushButton* btnEditDep;
    QPushButton* btnOutputSchedule;
    QPushButton* btnTeacher;
    QVBoxLayout* vLayoutContDeps;
    QPushButton* btnBackDepPage;

public slots:
    void on_btnAdd();
    void on_btnConstraint();
    void on_btnRemove();
    void on_btnEdit();
    void on_btnTeachers();
    void on_btnBatches();
    void on_btnAdminPolicy();
    void on_btnGenSchedule();
    void on_btnBack();


public:
    DepPage(QStackedWidget* sWidgetInputPage, QWidget* depPage);
    virtual ~DepPage();

    void setAllItsWidget(
        QPushButton* btnAPolicy, QPushButton* btnAddDep, QPushButton* btnBatch, QPushButton* btnDelDep, QPushButton* btnDepConstraint,
        QPushButton* btnEditDep, QPushButton* btnOutputSchedule, QPushButton* btnTeacher, QVBoxLayout* vLayoutContDeps,
        QPushButton* btnBackDepPage
        );
};

#endif
