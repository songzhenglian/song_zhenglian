#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateSalary(double hourlyRate,int hours);

int main()
{
   int hours=0;
  double hourlyRate=0;
  double salary;

   cout<<"Enter hours worked (-1 to end):";
   cin>>hours;
   cout<<"Enter hourly rate of the employee:";
   cin>>hourlyRate;

   while(hours!=-1)
   {
       if (hours<=40)
       {
        salary=hours*hourlyRate;

       }

       else
        salary=hours*15-200;
       cout<<"Salary is "<<salary<<endl;

       cout<<"Enter hours worked(-1 to end):";
       cin>>hours;
   }

}
