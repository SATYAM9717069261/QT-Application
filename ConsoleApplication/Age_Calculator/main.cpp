#include <QCoreApplication>
#include "age_calc.h"

int print(Age_Calc& obj){
    return obj.age();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Age_Calc per1;
    Age_Calc per2;
    per1.setAge(12);
    per2.setAge(123);
    qInfo()<<print(per1);
    qInfo()<<print(per2);


    return a.exec();
}
