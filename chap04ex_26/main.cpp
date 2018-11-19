#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d,e;
    int number=0;
    cout<<"Enter five integers:";
    cin>>a>>b>>c>>d>>e;

    if(a>=10000&&b>=1000&&c>=100&&a>b>c)
    {
        number=a+b+c+d+e;
    cout<<number;
    }

    while(e=0,e<10)
    {
      if (d=0,d<=10)
      {
      a=10000*e;
      b=1000*d;
      c=c;
      cout<<"Number is palindrome"<<number<<endl;
      }
      else
        cout<<"Number is not palindrome"<<endl;
    }
}
