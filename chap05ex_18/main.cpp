#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Decimal\t\tBinary\t\tOctal\tHexadecimal\n";

    for(c=1;c<=256;c++)
    {
        cout<<dec<<c<<"\t\t";

        a=c;
        b=256;
        cout<<(a==256?'1':'0');

        do
        {
            cout<<(a<b&&a>=(b/2)?'1':'0');
            b/=2;
            a%=b;
        }while(b>1);
        cout<<'\t'<<oct<<c;
        cout<<'\t'<<hex<c<<endl;
    }
}
