#include <iostream>
#include <string>
#include "dateType.h"
#include "extDateType.h"
 
using namespace std;
  
// give the names of the month in order to format it out

void extDateType::printLongDate() 
{ 
	cout << dName_Month << " " << get_day() << ", " << get_Year();
}

void extDateType::printLongMonthYear()
{
	cout << dName_Month << " " << get_Year();
}

void extDateType::setDate(int m, int d, int y)
{
    dateType::setDate(m, d, y);

	dName_Month = Name_Month[m - 1];
}

void extDateType::setMonth(int m)
{
    dateType::setMonth(m);
	dName_Month = Name_Month[m - 1];
}
string extDateType::Name_Month[] = {"January", "February", "March", "April", 
                    "May", "June", "July", "August", 
                    "September", "October", "November", "December"};
extDateType::extDateType()
{
	dName_Month = "January";
}

extDateType::extDateType(int m, int n, int d)
            : dateType(m, n, d)
{
	dName_Month = Name_Month[m - 1];
}


