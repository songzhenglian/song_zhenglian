#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmloyee::CommissionEMployee(const string &first,const string &last,const string &bd,const string &ssn,double sales,double rate)
:Employy(firsr,last,bd,ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be >=0.0");
}
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate>=0.0&&rate<=1.0)
        commissionRate=rate;
    else
        throw invalid_argument("CommissionRate must be>=0.0and <1.0");
}
double CommissionEmployee::CommissionRate()const
{
    return commissionRate;
}
double CommissionEmloyee::earning()const
{
    return getCommissionRate()*getGrossSales();
}
void CommissionEmployee::print()const
{
    cout<<"commission employee:";
    Employee::print();
    cout<<"\ngross sales:"<<getGrossSales()
    <<":commission rate:"<<getCommissionRate();
}

