#include <iostream>

using namespace std;

int main()
{
    int number;
    int smallest;
    int value;

    cout<<"Enter number of value to compare:"<<endl;
    cout<<"followed by the number:"<<endl;
    cin>>number>>smallest;

    for(int i=2;i<=number;++i)
    {
        cin>>value;
       if(value<smallest)
        smallest=value;
    }
    cout<<"Smallest is"<<smallest<<endl;
}
