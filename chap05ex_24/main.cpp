#include <iostream>

using namespace std;

int main()
{
    int odd=1;
    int row;
    int column;
    int space;

    cout<<"Enter a odd(1-19):";
    cin>>odd;
     for(row=1;row<=odd/2+1;row++)
       {
        for(space=1;space<=odd/2+1-row;space++)
            cout<<" ";
        for(column=1;column<=2*row-1;column++)
            cout<<"*";
            cout<<"\n";
    }
    for(row=odd-odd/2-1;row>=1;row--)
    {
        for(space=1;space<=odd/2+1-row;space++)
            cout<<" ";
        for(column=1;column<=2*row-1;column++)
            cout<<"*";
        cout<<"\n";
    }
}
