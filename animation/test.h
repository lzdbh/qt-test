#ifndef TEST_H
#define TEST_H
#include <QMainWindow>
namespace Ui {
    class Test;
}
class Test:public QMainWindow
{
    Q_OBJECT
public:
    Test(QWidget *parent=0);
    ~Test();

private:
    Ui::Test *ui;
};

#endif // TEST_H
