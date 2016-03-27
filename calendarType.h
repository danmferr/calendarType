/* I chose to try and use pragma once for this assignment to avoid
the #endif at the end of the code */

#pragma once
// include the other .h files that are needed
#include "dateType.h" 
#include "extDateType.h"
#include "dayType.h"
// declare the class of calendar Type
class calendarType
{ 
// declare the public set month, set year with their ints m and y
	public:
    void setMonth(int m);
    void setYear(int y);
// the get function of the set
    int get_Month();
    int get_Year();
// the void without a return value currently for printing the calender
    void printCalendar();
// name calenderType with assigned ints from the month and year
    calendarType();
    calendarType(int m, int y);
/* name the private variables. This assignment was an expansion of the created
	calenderType, dateType, and extDateType declared in the earlier prog
	execises in chapter 11. The variables will be named closely due to it
	being an expansion from prior problem solutions. */
private:
	// name the first day of daytype
    dayType firstDayOfMonth();
	//no return currently for the printing of titles and dates
    void printTitle();
    void printDates();
	//other private named in the class
    extDateType firstDate;
    dayType  firstDay;
};

