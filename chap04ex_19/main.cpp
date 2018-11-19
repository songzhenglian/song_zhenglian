#include <iostream>

using namespace std;

int main()
{

    int counter=0;
    int number;
    int number1;
    int number2;
    int Largest;

    cout<<"Enter the two numbers:";
    cin>>number1>>number2;
    if (number1>=number2)
        {
        Largest=number1;
        }
    else
        Largest=number2;
    while (++counter<=10)
    {
        cout<<"Enter the next number:";
        cin>>number;
        if (number>=Largest)
        {
             Largest=number;
        }
        else
            Largest=Largest;

       cout<<"Largest is"<<Largest<<endl;
    }
}
