#include "age_calc.h"

Age_Calc::Age_Calc(QObject *parent) : QObject(parent)
{

}

int Age_Calc::age() const
{
    return m_age;
}

void Age_Calc::setAge(int newAge)
{
    m_age = newAge;
}

const QString &Age_Calc::name() const
{
    return m_name;
}

void Age_Calc::setName(const QString &newName)
{
    m_name = newName;
}
