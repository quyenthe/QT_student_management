#ifndef STUDENT_H
#define STUDENT_H
#include <QListWidgetItem>
#include <QString>

class student:public QListWidgetItem
{
public:
    student();

    student(QString name,QString dob,QString Cl);

    QString getName();
    QString getDOB();
    QString getClass();

    void setName(QString n);
    void setDOB(QString dob);
    void setClass(QString Cl);

private:
    QString DOB,Class;
};
inline void student::setName(QString n)
{
    QListWidgetItem::setText(n);
}
inline void student::setDOB(QString dob)
{
    DOB=dob;
}
inline void student::setClass(QString Cl)
{
    Class=Cl;
}
inline QString student::getName()
{
    return QListWidgetItem::text();
}
inline QString student::getDOB()
{
    return DOB;
}
inline QString student::getClass()
{
    return Class;
}
#endif // STUDENT_H
