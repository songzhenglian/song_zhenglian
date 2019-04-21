#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
const string&first,const string &last,const string &bd,
const string &ssn,double sales,double rate,double salary)
:CommissionEmployee(first,last,bd,ssn,sales,rate)
{
    setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be >=0.0");
}
double BasePlusCommissionEmployee::getBaseSlary()const
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earning()const
{
    return getBaseSalary()+CommissionEmploye:earning();
}
void BasePlusCommissionEmployee::print()const
{
    cout<<"base-salaried";
    Commissionmployee::print();
    coout<<";base salary:"<<getBaseSalary();
}
