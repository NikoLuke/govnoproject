#include "mainwindow.h"
#include <QApplication>
#include "labwork1_laws.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
