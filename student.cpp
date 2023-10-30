#include "student.h"

student::student()

{


}
student::student(QString name, QString dob, QString Cl)
    :QListWidgetItem(name),
    DOB(dob),
    Class(Cl)
{

}
