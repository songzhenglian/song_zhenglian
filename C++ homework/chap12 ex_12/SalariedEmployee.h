#ifndef SALARY_H
#define SALARY_H
#include <string>
#include "Employee.h>

class SalaryEmployee:public Employee
{
public:
    SalaryEmployee(const std::string &,const std::string &,const std::string &,double=0.0);
    virtual ~SalaryEmployee(){}
    void setWeeklySalary(double);
    double getWeeklySalary()const;
    virtual double earning()const override;
    virtual void print()const override;
private:
    double weeklySalary;
};
#endif // SALARY_H
