#include <iostream>

using namespace std;

int main()
{
   int x=0;
   int y=0;
   int l=0;

   cout<<"Enter three numbers:";
   cin>>x>>y>>l;
   if(x>0&&y>0&&l>0)
   {
       if(l*l==x*x+y*y)
       cout<<"These could be a right triangle."<<endl;
       else if(y*y==x*x+l*l)
       cout<<"These could be a right triangle."<<endl;
       else if(x*x==y*y+l*l)
        cout<<"These could be a right triangle."<<endl;
   }
   else
    cout<<"Nothing."<<endl;
}
