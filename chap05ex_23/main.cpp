#include <iostream>

using namespace std;

int main()
{
   int row;
   int column;
   int space;

   for(row=1;row<=5;row++)
   {
       for(space=1;space<=5-row;space++)
        cout<<" ";
       for(column=1;column<=2*row-1;column++)
        cout<<"*";
        cout<<"\n";
   }
   for(row=4;row>=1;row--)
   {
       for(space=1;space<=5-row;space++)
        cout<<" ";
       for(column=1;column<=2*row-1;column++)
        cout<<"*";
       cout<<"\n";
   }
}
