#include <QApplication>
#include "teamleadersdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QStringList list;
    list << QObject::tr("xianziyu")
         << QObject::tr("yangwangming")
         << QObject::tr("yinshixin")
         << QObject::tr("baichengshuang")
         << QObject::tr("zhangzurui");
    TeamLeadersDialog w(list);
    w.show();

    return a.exec();
}
