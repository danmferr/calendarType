
#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year)
{
	if (year >= 1)
		z_Year = year;
	else
		z_Year = 0001;

	if (1 <= month && month <= 12)
		z_Month = month;
	else
		z_Month = 1;

	switch (z_Month)
	{
	case 1: 
	case 3: 
	case 5: 
	case 7:
	case 8: 
	case 10: 
	case 12:		
	if(1 <= day && day <= 31)
	z_Day = day;
		else
		z_Day = 1;
		break;
	case 4: 
	case 6: 
	case 9: 
	case 11: 
	if (1 <= day && day <= 30)
	z_Day = day;
		else
		z_Day = 1;
		break;
	case 2: if (Leap_Year())
	{
			if (1 <= day && day <= 29)
			z_Day = day;
				else
				z_Day = 1;
	}
				else
	{
				if (1 <= day && day <= 28)
				z_Day = day;
				else
				z_Day = 1;
		}
	}
}

void dateType::setMonth(int  m)
{
	z_Month = m;
}

void dateType::setDay(int d)
{
	z_Day = d;
}

void dateType::setYear(int y)
{
	z_Year = y;
}


void dateType::print() const
{
	cout << z_Month << "-" << z_Day << "-" << z_Year;
}

int dateType::get_Month()  const
{
	return z_Month;
}

int dateType::get_day()  const
{
	return z_Day;
}

int dateType::get_Year()  const
{
	return z_Year;
}

int dateType::get_num_days_month()
{
	int numDays;

	switch (z_Month)
	{
	case 1: 
	case 3: 
	case 5: 
	case 7: 
	case 8: 
	case 10: 
	case 12: 
	numDays = 31;
	break;
	case 4: 
	case 6: 
	case 9: 
	case 11:  
	numDays = 30;
	break;
	case 2: if(Leap_Year())
				numDays = 29;
		    else
				numDays = 28;
	}

	return numDays;
}

bool dateType::Leap_Year()
{

	if (((z_Year % 4 == 0) && (z_Year % 100 != 0)) || z_Year % 400 == 0)
		return true;
	else
		return false;
}

dateType::dateType(int month, int day, int year) 
{ 
	z_Month = month;
	z_Day = day;
	z_Year = year;
}

int dateType::numberOfDaysPassed()
{
	int dayspassed=0;
	for (int month=1;month<get_Month();month++)
		dayspassed+=get_day();
	dayspassed+=get_day();
		return dayspassed;
}

int dateType::numberOfDaysLeft()
{
	int daysleft;
	int days_passed=0;
	for (int month=1;month<get_Month();month++)
		days_passed+=get_day();
	if (Leap_Year())
		return 366 - numberOfDaysPassed();
	else
		return 365 - numberOfDaysPassed();
	return daysleft;

};



void dateType::ADD_TO_DATE(int nDays)
{
	int day=get_day()+nDays;
	int month=get_Month();
	int countm=0;
	int year=0;

	while (day>get_day()+nDays)
	{
		day=day-get_day();
		countm++;
		if (countm==12)
		{
			year++;
			countm=0;
		}
		if(month>=12)
			month=0;
		month++;
	}
	setMonth (get_Month()+countm);
	setDay(day);
	setYear (get_Year()+year);
}
