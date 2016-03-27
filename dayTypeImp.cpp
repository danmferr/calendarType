#include <iostream>
#include <string>
 
#include "dayType.h"
  
using namespace std;

string dayType::weekDays[7] = {"Sunday", "Monday", "Tuesday",
                               "Wednesday", "Thursday", "Friday",
                               "Saturday"};
 
void dayType::print() const 
{
    cout << weekDay;
}

string dayType::nextDay() const
{
    int i;

    for (i = 0; i < 7; i++)
        if (weekDays[i] == weekDay)
            break;
    return weekDays[(i + 1) % 7];
}

string dayType::prevDay() const
{
    if (weekDay == "Sunday")
        return "Saturday";
    else
    {
        int i;

        for (i = 0; i < 7; i++)
            if (weekDays[i] == weekDay)
                break;
        return weekDays[i - 1];
    }
}

void dayType::addDay(int nDays)
{
    int i;

    for (i = 0; i < 7; i++)
        if (weekDays[i] == weekDay)
        break;
    weekDay = weekDays[(i + nDays) % 7];
}

void dayType::setDay(string d)
{
    weekDay = d;
}

string dayType::get_day() const
{
    return weekDay;
}

dayType::dayType()
{
    weekDay = "Sunday";
}

dayType::dayType(string d)
{
    weekDay = d;
}

