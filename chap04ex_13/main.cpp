#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double miles =0;
    double gallons =0;
    double MPG =0;
    double total =0;

   cout<<"Enter miles driven:";
   cin>>miles;
   cout<<"Enter gallons used:";
   cin>>gallons;

     MPG=miles/gallons;
   cout<<"MPG this trip is"<<MPG<<endl;
    while (miles!=-1)
   {
    if(miles>=0)

    miles=miles+miles;
    gallons=gallons+gallons;

   total =(miles/gallons);
   cout<<"total MPG is"<<tatalMPG<<endl;

    cout<<"Enter the miles used or -1 to quit:";
    break;
    cout<<"Passed";
   }
}
