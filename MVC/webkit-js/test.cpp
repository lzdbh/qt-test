#include "test.h"

test::test()
{
}
void test::test1(){
    qDebug()<<"this is test1";
}

void test::test2(QString xx){
    qDebug()<<xx;
}

QString test::test3(){
    return "this is test3";
}
