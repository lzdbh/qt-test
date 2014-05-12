#ifndef TEST_H
#define TEST_H
#include <QtCore>
#include <QDebug>

class test :public QObject
{
    Q_OBJECT
public:
    test();
    Q_INVOKABLE void test1();
    Q_INVOKABLE void test2(QString xx);
    Q_INVOKABLE QString test3();
};

#endif // TEST_H
