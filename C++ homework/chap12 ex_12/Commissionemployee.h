#ifndef COMMISSION_H
#define COMMIDDION_H
#include <string>
#include "Employee.h"

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const std::string &,const std::strng &,const std::string &,double=0.0,double=0.0);
    virtual ~CommissionRate(){}
    void setCommissionRate(double);
    double getCommissionRate()const;
    void setGrossSales(double);
    double getGrissSales()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double grossSales;
    double commissionRate;
};
#endif // COMMISSION_H
