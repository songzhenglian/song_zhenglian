#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number;
    int Largest;
    int counter=0;

    cout<<"Enter the fist number:";
    cin>>Largest;
    while  (counter<=10,counter++)
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
