/*
Danielle Ferriola
CSC 161 
Chapter 11

Program:
10. a. Write the definitions of the member functions of the class
calendarType (designed in Programming Exercise 9) to implement
the operations of the class calendarType.
b. Write a test program to print the calendar for either a particular month
or a particular year. For example, the calendar for September 2015 is:
September 2015
Sun Mon Tue Wed Thu Fri Sat
1 2 3 4 5
6 7 8 9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30

This program was an expansion of previous answers to programming questions
in this chapter previously and the implementation of all of the files and to
show how inheritence works with the class. I had difficulties with this 
program and when I fixed the formatting of the exact dates it 
created an error with the calculations. Despite scouring for aid I 
could not find a solution */


#include <iostream>
#include "dayType.h"
#include "dateType.h"
#include "extDateType.h"
#include "calendarType.h"
   
using namespace std; 
 
int main()
{
    dateType d(1, 2, 1960);
    extDateType ed(6, 10, 1981);
    int num;

    ed.printLongDate();
    cout << endl;
	
    ed.print();
    cout << endl;

    cout << "Days gone in the year: " << ed.numberOfDaysPassed();
    cout << endl;

	cout << "Days left in the Year: " << ed.numberOfDaysLeft() << endl;

    cout << "Enter number of days to be added: ";
    cin >> num;
    cout << endl;
    ed.ADD_TO_DATE(num);

    cout << "After increment date: ";
    ed.print();
    cout << endl;

        //test day object
    dayType newDay("Wednesday");

    newDay.print();
    cout << endl;

    cout << "Next Day: " << newDay.nextDay() << endl;

    newDay.setDay("Sunday");
    cout << "Set Day: ";
    newDay.print();
    cout << endl;

    newDay.prevDay();
    cout << "Previous Day: " << newDay.prevDay() << endl;

    newDay.addDay(12);
    cout << "Add days: ";
    newDay.print();
    cout << endl;

        //test calendar object
    calendarType cal(9, 2015);

    cal.printCalendar();
	system("pause");
    return 0;
}