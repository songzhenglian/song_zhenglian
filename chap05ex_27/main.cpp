#include <iostream>

using namespace std;

int main()
{
    bool continuation=false;
    for(unsigned int count=1;(count<=10)||(!continuation);++count)
    {
        if(count==5)
            continuation=true;

        cout<<count<<" ";
    }
    cout<<"\nUsed continue to skip printing 5"<<endl;
}
