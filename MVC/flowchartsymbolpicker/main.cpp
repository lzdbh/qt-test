#include "flowchartsymbolpicker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMap<int, QString> map;
    map.insert(77, QObject::tr("1"));
    map.insert(78, QObject::tr("2"));
    map.insert(79, QObject::tr("3"));
    map.insert(80, QObject::tr("4"));
    map.insert(81, QObject::tr("5"));
    map.insert(82, QObject::tr("6"));
    map.insert(83, QObject::tr("7"));

    FlowChartSymbolPicker window(map);
    window.resize(300, 300);
    window.setStyleSheet("border:1px solid #000");
    window.show();

    return a.exec();
}
