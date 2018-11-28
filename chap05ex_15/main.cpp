#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int A=4;
   int B=3;
   int C=2;
   int D=1;
   int F=0;
   int average=0;
   int total=0;
   int count=0;
   int ACount(0),BCount(0),CCount(0),DCount(0),FCount(0);

   int grade(A||B||C||D||F);
   cout<<"Enter the grade:";
   cin>>grade;
   cout<<"Enter the EOF character to end input.";

   while((grade=cin.get())!=EOF)
   {
       switch(grade)
       {
       case 'A':
       ++ACount;
       break;

       case 'B':
       ++BCount;
       break;

       case 'C':
       ++CCount;
       break;

       case 'D':
       ++DCount;
       break;

       case 'F':
       ++FCount;
       break;

       case '\n':
       case '\t':
       case ' ':
        break;

       default:
        cout<<"Incorrect letter grade entered."<<"Enter a new grade."<<endl;

        count=ACount+BCount+CCount+DCount+FCount;
        }
        total+=grade;
         cout<<"Average is"<<static_cast<double>(total)/count<<average<<endl;
   }
   cout<<endl;
}
