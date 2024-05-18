#ifndef STACKEDWIDGETMAIN_H
#define STACKEDWIDGETMAIN_H

#include <QStackedWidget>
#include <map>
#include <string>


class StackedWidgetMain : public QObject // inherited from QObject in order slot to be allowed for all child class of
// StackedWidgetMain and for StackedWidgetMain itself.
{
    Q_OBJECT // included `Q_OBJECT` macro in order slot to be allowed for all child class of
    // StackedWidgetMain and for StackedWidgetMain itself.

private:

protected:
    std::map<std::string, int> pageIndex;
    QStackedWidget* sWidgetMain;

public:
    StackedWidgetMain(QStackedWidget* sWidgetMain);
    virtual ~StackedWidgetMain();
};


#endif
