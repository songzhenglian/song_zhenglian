#include <iostream>

using namespace std;

int main()
{
   unsigned int count;
   bool breakOut=false;

   for(count=1;(count<=10)&&(!breakOut);count++)
   {
       if(count==5)
       breakOut=true;
       else
       cout<<count<<" ";
   }
   cout<<"\nBroke out of loop because loop-continuation test"<<"(!breakOut)failed."<<endl;
}

