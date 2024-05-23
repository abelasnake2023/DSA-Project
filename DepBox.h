#ifndef DEPBOX_H
#define DEPBOX_H


#include <QFrame>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QVBoxLayout>


class DepBox : public QFrame
{
protected:
    QLineEdit* txtBoxName;
    QLineEdit* txtBoxManName;
    QLabel* lblName;
    QLabel* lblManName;
    QCheckBox* cBoxSelect;

public:
    DepBox();
    virtual ~DepBox();
};


#endif
