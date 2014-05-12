#ifndef COORDINATESETTER_H
#define COORDINATESETTER_H

#include <QDialog>
#include <QList>

class QDialogButtonBox;
class QTableWidget;

class CoordinateSetter : public QDialog
{
    Q_OBJECT
public:
    explicit CoordinateSetter(QList<QPointF> *coords,QWidget *parent = 0);
    void done(int result);
    ~CoordinateSetter();

private slots:
    void addRow();

signals:

private:
    QList<QPointF> *coordinates;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

};

#endif // COORDINATESETTER_H
