#include <iostream>

using namespace std;

int main()
{
    int row;
    int asterisk;
    int space;

    for(row=1;row<=10;row++)
    {
        for(asterisk=1;asterisk<=row;asterisk++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(row=10;row>=1;row--)
    {
        for(asterisk=1;asterisk<=row;asterisk++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(row=10;row>=1;row--)
    {
        for(space=10;space>row;space--)
        cout<<" ";
        for(asterisk=1;asterisk<=row;asterisk++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    for(row=10;row>=1;row--)
    {
        for(space=1;space<row;space++)
            cout<<" ";
        for(asterisk=10;asterisk>=row;asterisk--)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}
