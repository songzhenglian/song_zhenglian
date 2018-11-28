#include <iostream>

using namespace std;

int main()
{
    int value;
    int count=0;
    int total=0;

    cout<<"Enter integers to(9999 to end):"<<endl;
    cin>>value;

    for(count=1;count<=9999;++count)
       {
        total+=value;
        count++;
        cin>>value;
        cout<<"\nThe average is:"<<static_cast<double>(total)/count<<endl;
       }

}
