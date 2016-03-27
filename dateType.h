#pragma once

class dateType
{
public:
	    dateType (int month=1, int day=1, int year=0001);
		void setDate(int month, int day, int year);
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		
		void print() const;

		int numberOfDaysLeft();
		int numberOfDaysPassed();

		void ADD_TO_DATE(int nDays);

		int get_Month() const;
		int get_day() const;
		int get_Year() const;
		int get_num_days_month();
		bool Leap_Year();
		


private:
	int z_Month;
	int z_Day;
	int z_Year;

};


