#include "flowchartsymbolpicker.h"

#include <QListWidget>
#include <QListWidgetItem>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QMessageBox>

FlowChartSymbolPicker::FlowChartSymbolPicker(const QMap<int, QString> &symbolMap,QWidget *parent) :
    QDialog(parent)
{
    id=-1;
    listWidget=new QListWidget(this);
    listWidget->setIconSize(QSize(100,100));
    listWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed);
    listWidget->setViewMode(QListView::IconMode);
    QMapIterator<int,QString> i(symbolMap);
    while(i.hasNext())
    {
        i.next();
        QListWidgetItem *item=new QListWidgetItem(i.value(),listWidget);
        item->setIcon(iconForSymbol(i.value()));
        item->setData(Qt::UserRole,i.key());
    }

    buttonBox=new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel,this);
    connect(buttonBox,SIGNAL(accepted()),this,SLOT(message()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));

    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->addWidget(listWidget);
    layout->addWidget(buttonBox);

    setLayout(layout);
    setWindowTitle(tr("Flowchart Symbol Picker"));
}

void FlowChartSymbolPicker::message()
{
    QMessageBox::about(this,tr("aha"),tr("thanks"));
}

void FlowChartSymbolPicker::done(int result)
{
    id=-1;
    if(result==QDialog::Accepted)
    {
        QListWidgetItem *item=listWidget->currentItem();
        if(item)
            id=item->data(Qt::UserRole).toInt();
    }
    QDialog::done(result);
}
QIcon FlowChartSymbolPicker::iconForSymbol(const QString &symbolName)
{
    QString fileName = ":/images/" + symbolName.toLower();
    fileName.replace(' ', '_');
    return QIcon(fileName);
}
FlowChartSymbolPicker::~FlowChartSymbolPicker()
{

}
