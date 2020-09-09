#include "qt_mytitle.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_mytitle w;
    w.show();
    return a.exec();
}
