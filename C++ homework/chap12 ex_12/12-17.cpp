#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Date.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","December 27,1978","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","January 1,1979","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePLusCommissionEmployee("Bob","Lewis","February 28,1980","444-44-4444",5000,.04,300);

    cout<<"Employees processed individually using static binding:\n\n";

    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    comissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePLusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";

    vector<Employee * >employees(4)
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusComissionEmployee;
    employees[4]=&birthDate;
    cout<<"Employees processed polymorphically via dynamic binding:\n\n";
    cout<<"Virtual function calls made base-class pointer:\n\n;

    for(const Employee *employeePtr:employees)
        virtualViaPointer(employeePtr);
    cout<<"Virtual function calls made off base-class references:\n\n";

    for(const Employee *employeePtr:employees)
        virtualViaReference(*employeePtr);

    for(const Employee *employeePtr:employees)
    {
        if(bd=date)
            earnings()+=100;
    }
}
void virtualViaPointer(const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
}
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";


}
