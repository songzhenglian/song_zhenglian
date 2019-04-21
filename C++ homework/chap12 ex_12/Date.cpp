#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

const array<unsigned int,13>Date::days={0,31,28,31,30,31,30,31,31,30,31,30,31};
Date::Date(int month,int day,int year)
{
    setDate(month,day,year);
}
void Date::ssetDate(int mm,int dd,int yy)
{
    if(mm>=1&&mm<=12)
        mmonth=mm;
    else
        throw invalid_argument("Moth must be 1-12");
    if (yy>=1900&&yy<=2100)
        year=yy;
    else
        throw invalid_argument ("Year must to be>=1900 and <=2100");
    if ((month==2&&leapyear(year)&&dd>=1&&dd<=29)||(dd>=1&&dd<=days[month]))
        day=dd;
    else
        throw invalid_argument ("Day is out of range for current month and year");
}

