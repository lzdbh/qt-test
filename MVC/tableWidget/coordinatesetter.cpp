#include "coordinatesetter.h"
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDialogButtonBox>

CoordinateSetter::CoordinateSetter(QList<QPointF> *coords,QWidget *parent) :
    QDialog(parent)
{
    coordinates=coords;
    tableWidget=new QTableWidget(0,2,this);
    tableWidget->setHorizontalHeaderLabels(QStringList()<<tr("x")<<tr("y"));

    for(int row=0;row!=coordinates->count();++row)
    {
        QPointF point=coordinates->at(row);
        addRow();

        tableWidget->item(row,0)->setText(QString::number(point.x()));
        tableWidget->item(row,1)->setText(QString::number(point.y()));
    }

    buttonBox=new QDialogButtonBox(Qt::Horizontal,this);
    QPushButton *addButton=buttonBox->addButton(
                tr("&Add Row"), QDialogButtonBox::ActionRole);
    buttonBox->addButton(QDialogButtonBox::Ok);
    buttonBox->addButton(QDialogButtonBox::Cancel);

    connect(addButton, SIGNAL(clicked()), this, SLOT(addRow()));
    connect(buttonBox,SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(tableWidget);
    layout->addWidget(buttonBox);
    setLayout(layout);

    setWindowTitle(tr("CoordinateSetter"));
}

void CoordinateSetter::done(int result)
{
//    if (result == QDialog::Accepted) {
//        coordinates->clear();
//        for (int row = 0; row != tableWidget->rowCount(); ++row) {
//            double x = tableWidget->item(row, 0)->text().toDouble();
//            double y = tableWidget->item(row, 1)->text().toDouble();
//            coordinates->append(QPointF(x, y));
//        }
//    }
    QDialog::done(result);
}

void CoordinateSetter::addRow()
{
    int row = tableWidget->rowCount();

    tableWidget->insertRow(row);

    QTableWidgetItem *item0 = new QTableWidgetItem;
    item0->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
    item0->setIcon(QIcon(":/img/1"));
    tableWidget->setItem(row, 0, item0);

    QTableWidgetItem *item1 = new QTableWidgetItem;
    item1->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
    item1->setIcon(QIcon(":/img/2"));
    tableWidget->setItem(row, 1, item1);

    tableWidget->setCurrentItem(item0);
}

CoordinateSetter::~CoordinateSetter()
{
}
