#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int a_ver=128;
    a_ver++;

    if (a_ver==129)
    {
        a_ver=0;
    }

    return a.exec();
}
