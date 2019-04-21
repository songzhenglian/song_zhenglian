#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first,const string &last,const string&ssn)
:firstName(first),lastName(last),birthDate(bd),socialSecurityNumber(ssn)
{
}
void Employee::setFirstName(const string&first)
{
    firstName=first;
}
string Employee::getFirstName()const
{
    return firstName;
}
void Employee::setLastName(const string&last)
{
    lastNmae=last;
}
string Employee::getLastName()const;
{
    return lastName;
}
void Employee::setBirthDate(const string&bd)
{
    birthDate=bd;
}
string Employee::getBirthDate()const;
{
    return birthDate;
}
void Employee::setSocislSecurityNumbe(const string&ssn)
{
    socialSecurityNumber=ssn;
}
string Employee::getSocialSecurityNumber()const
{
    return sociaSecurityNumber;
}
void Employee::print()const
{
    cout<<getFirstName()<<' '<<getLastName()<<' '<<"\nbirthDate:"<<getBirthDate()<<"\nsocial security number:"<<getSocialSecurityNumber();
}
