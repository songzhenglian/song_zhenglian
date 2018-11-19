#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateC,S(double a,int r,double C,double S);

int main()
{
    double a=3.14159;
    int r=0;
    int d=0;
    double C=0;
    double S=0;

    cout <<"Enter the number:";
    cin>>r;

    d=2*r;
    C=2*a*r;
    S=a*r*r;

    cout<<"d is"<<d<<endl;
    cout<<"C is"<<C<<endl;
    cout<<"S is"<<S<<endl;
}
