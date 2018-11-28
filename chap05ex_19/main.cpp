#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int c;
    long double a=0.0;
    long double b=1.0;
    long accuracy=1000;

    cout<<fixed<<setprecision(8);

    cout<<"Accuracy set at:"<<accuracy<<"\n\nterm\t\ta\n";

    for( c=1;c<=accuracy;c++)
    {
        if(c%2!=0)
            a+=4.0/b;
        else
            a-=4.0/b;
        cout<<c<<"\t\t"<<a<<"\n";
        b+=2.0;
    }
    cout<<endl;
}
