#include "widgui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidGui w;
    w.show();
    return a.exec();
}
