#ifndef CUSTOMQCHECKBOXFORSCHTABLE_H
#define CUSTOMQCHECKBOXFORSCHTABLE_H


#include <QWidget>
#include <QHBoxLayout>
#include <QCheckBox>


class CustomQCheckBoxForSchTable : public QCheckBox
{
    Q_OBJECT

private:
    bool _checkBoxClicked;
    int schId;

private slots:
    void on_CheckBoxClicked(bool checked);

public:
    explicit CustomQCheckBoxForSchTable(QWidget* parent);

    bool checkBoxClicked();

    void setSchId(int schId);
    int getSchId();

    void setCheckBoxClicked(bool value);
};


#endif
