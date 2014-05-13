#include "teamleadersdialog.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QDialogButtonBox>

TeamLeadersDialog::TeamLeadersDialog(const QStringList &leaders,QWidget *parent) :
    QDialog(parent)
{
    model=new QStringListModel(this);
    model->setStringList(leaders);

    view=new QListView(this);
    view->setModel(model);
    view->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);

    buttonBox=new QDialogButtonBox(this);
    QPushButton *insertBtn=buttonBox->addButton(tr("&Insert"),QDialogButtonBox::ActionRole);
    QPushButton *delBtn=buttonBox->addButton(tr("&delete"),QDialogButtonBox::ActionRole);
    buttonBox->addButton(QDialogButtonBox::Ok);
    buttonBox->addButton(QDialogButtonBox::Cancel);

    connect(insertBtn,SIGNAL(clicked()),this,SLOT(insert()));
    connect(delBtn,SIGNAL(clicked()),this,SLOT(del()));
    connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));

    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(view);
    layout->addWidget(buttonBox);

    setLayout(layout);
    setWindowTitle(tr("QStringListModel"));
}
void TeamLeadersDialog::insert()
{
    int row=view->currentIndex().row();
    row++;
    model->insertRows(row,1);

    QModelIndex index=model->index(row);
    view->setCurrentIndex(index);
    view->edit(index);
}
void TeamLeadersDialog::del()
{
    model->removeRows(view->currentIndex().row(),1);
}

TeamLeadersDialog::~TeamLeadersDialog()
{

}
