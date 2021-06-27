#ifndef AGE_CALC_H
#define AGE_CALC_H

#include <QObject>

class Age_Calc : public QObject
{
    Q_OBJECT
public:
    explicit Age_Calc(QObject *parent = nullptr);

    int age() const;
    void setAge(int newAge);

    const QString &name() const;
    void setName(const QString &newName);

signals:
private: int m_age;
    QString m_name;
};

#endif // AGE_CALC_H
