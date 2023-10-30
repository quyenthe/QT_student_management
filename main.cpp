#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    w.add_student("nguyen van A","20/9/2001","class1");
    w.add_student("nguyen van B","20/9/2002","class2");
    w.add_student("nguyen van C","20/9/2003","class3");
    w.add_student("nguyen van D","20/9/2004","class4");
    return a.exec();
}
