#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     int counter;
     int sum=0;
     int value;

     cout<<"Enter the counter of values to sum"<<"followed by the values:\n";
     cin>>counter;
     for(int i=1;i<=counter;++i)
     {
         cin>>value;
         sum+=value;
     }
     cout<<"Sum is"<<sum<<endl;
}
