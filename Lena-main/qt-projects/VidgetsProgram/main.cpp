#include "mainwindow.h"

#include <QApplication>
#include <qedit.h>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
