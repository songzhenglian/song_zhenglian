#include <iostream>

using namespace std;

int main()
{
   int product=1;
   for(int i=1;i<=15;i+=2)
   {
       product*=i;
       cout<<"Product is"<<product<<endl;
   }
}
