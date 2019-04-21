#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.H"
using namespace std;

SalriedEmployee::SalariedEmployee(const string &first,const string &last,const string &bd,const string &ssn,double salary)
:Employee(fist,last,bd,ssn)
{
    setWeeklySsalary(salary);
}
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be>=0.0");
}
double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}
double SalariedEmployee::earning()const
{
    return getWeeklySalary();
}
void SalariedEmployee::print()const
{
    cout<<"salaied employee:";
    Employee::print();
    cout<<"\nweekly salary:"<<getWeeklySalary();
}
