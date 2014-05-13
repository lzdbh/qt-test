#ifndef FLOWCHARTSYMBOLPICKER_H
#define FLOWCHARTSYMBOLPICKER_H

#include <QDialog>
#include <QMap>
#include <QIcon>
#include <QListWidget>
#include <QDialogButtonBox>

class FlowChartSymbolPicker : public QDialog
{
    Q_OBJECT
public:
    explicit FlowChartSymbolPicker(const QMap<int,QString> &symbolMap,QWidget *parent = 0);

    int selectedId() const{ return id;}
    void done(int result);
    ~FlowChartSymbolPicker();

signals:

public slots:

private slots:
    void message();

private:
    QIcon iconForSymbol(const QString &symbolName);
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;
    int id;
};

#endif // FLOWCHARTSYMBOLPICKER_H
