#include <iostream>

using namespace std;

int main()
{
    int Year=0;
    int Mon=0;
    int day=0;
    int hour=0;
    int min=0;
    int sec=0;
    int date;

    date=(Year,Mon,day,hour,min,sec);

    cout<<"Enter the first number:";
    cin>>Year;

    cout<<"Enter the second number:";
    cin>>Mon;

    cout<<"Enter the third number:";
    cin>>day;

    cout<<"Enter the fourth number:";
    cin>>hour;

    cout<<"Enter the fifth number:";
    cin>>min;

    cout<<"Enter the sixth number:";
    cin>>sec;

    cout<<"Date is"<<date<<endl;


}
