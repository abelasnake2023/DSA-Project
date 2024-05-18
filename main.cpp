#include "widget.h"
#include <QFile>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // start setting app Icon
    QIcon icon(":/appIcon.png");
    a.setWindowIcon(icon);
    // end setting app Icon

    // start set the app style sheet
    QFile styleSheetFile(":/Hookmark.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);
    // end set the app style sheet

    Widget w;
    w.show();
    return a.exec();
}
