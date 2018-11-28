#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long);

int main()
{
   for(unsigned int counter=0;counter<=5;++counter)
    cout<<setw(3)<<counter<<"!="<<factorial(counter)<<endl;

}
unsigned long factorial(unsigned long number)
{
    if(number<=1)
        return 1;
    else
        return number*factorial(number-1);
}
