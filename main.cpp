#include <QtGui/QApplication>
//#include "Console.h"
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
   // CConsoleOutput::Instance();
    // QApplication app(argc, argv);
    QApplication::setStyle(QStyleFactory::create("cleanlooks"));
    /*
    "windows", "motif", "cde", "plastique" and "cleanlooks". Depending on the platform, "windowsxp", "windowsvista" and
    "macintosh" may be available.
    Note that keys are case insensitive.
    */

    QApplication a(argc, argv);
    MainWindow *mainWindow = new MainWindow(NULL);
    mainWindow->showMaximized();
    // mainWindow->show();

    return a.exec();
}
