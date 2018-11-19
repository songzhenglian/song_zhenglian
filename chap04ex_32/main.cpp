#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    double l;

    cout<<"Enter three numbers:";
    cin>>x>>y>>l;

    while(x!=1)
    {
        if(x>0&&y>0&&l>0)
        {
            if(x+y>l&&x+l>y&&y+l>x)
            cout<<"These could be a triangle.";
        }
        else
            cout<<"Nothing."<<endl;
            break;
    }
}
