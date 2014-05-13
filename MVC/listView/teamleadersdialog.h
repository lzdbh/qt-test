#ifndef TEAMLEADERSDIALOG_H
#define TEAMLEADERSDIALOG_H

#include <QDialog>
#include <QStringListModel>
#include <QListView>
#include <QDialogButtonBox>

class TeamLeadersDialog : public QDialog
{
    Q_OBJECT
public:
    explicit TeamLeadersDialog(const QStringList &leaders,QWidget *parent = 0);
    ~TeamLeadersDialog();
signals:

private slots:
    void insert();
    void del();

private:
    QStringListModel *model;
    QListView *view;
    QDialogButtonBox *buttonBox;
};

#endif // TEAMLEADERSDIALOG_H
