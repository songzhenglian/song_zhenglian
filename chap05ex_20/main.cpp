#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int  count=0;
    long hypotenuseSqured;
    long sidesSqured;
   long side1;
   long side2;
   long hypotenuse;

   for(side1=1;side1<=500;side1++)
   {

       for(side2=1;side2<=500;side2++)
       {

           for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                hypotenuseSqured=hypotenuse*hypotenuse;
                sidesSqured=side1*side1+side2*side2;
                if(hypotenuseSqured=sidesSqured)
                {
                cout<<side1<<'\t'<<side2<<'\t'<<hypotenuse<<endl;
                cout<<"\n";
                count++;
                }
            }
       }
   }
   cout<<"Total"<<count<<"triples were found."<<endl;
}
