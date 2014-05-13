#include <QApplication>
#include "currencymodel.h"
#include <QTableView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMap<QString, double> currencyMap;
    currencyMap.insert("AUD", 1.3257);
    currencyMap.insert("CHF", 1.2980);
    currencyMap.insert("SGD", 1.6911);
    currencyMap.insert("USD", 1.0000);

    CurrencyModel currencyModel(currencyMap);

    QTableView tableView;
    tableView.setModel(&currencyModel);
    tableView.setAlternatingRowColors(true);
    tableView.show();

    return a.exec();
}
