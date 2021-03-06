#ifndef CURRENCYMODEL_H
#define CURRENCYMODEL_H

#include <QAbstractTableModel>
#include <QMap>


class CurrencyModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit CurrencyModel(const QMap<QString, double> &map,QObject *parent = 0);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QString currencyAt(int offset) const;
    QMap<QString,double> currencyMap;
};

#endif // CURRENCYMODEL_H
