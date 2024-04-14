#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year)
{
	// Validate the year and set it 
	if (year >= 1)
		dYear = year;
	else
		dYear = 1900;
	// Validate the month and set it 
	if (1 <= month && month <= 12)
		dMonth = month;
	else
		dMonth = 1;
	// Set the day depending on the month 
	switch (dMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		// Validate and set the day for the months which have 31 days 
		if (1 <= day && day <= 31)
			dDay = day;
		else
			dDay = 1;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		// Validate and set day for the months with 30 days 
		if (1 <= day && day <= 30)
			dDay = day;
		else
			dDay = 1;
		break;
	case 2:
		// Validate and set day for February when it is leap year
		if (isLeapYear())
		{
			if (1 <= day && day <= 29)
				dDay = day;
			else
				dDay = 1;
		}
		else
		{
			if (1 <= day && day <= 28)
				dDay = day;
			else
				dDay = 1;
		}
	}
}

void dateType::setMonth(int m)
{
	// Set the month 
	dMonth = m;
}

void dateType::setDay(int d)
{
	// Set the day 
	dDay = d;
}

void dateType::setYear(int y)
{
	// Set the year 
	dYear = y;
}

// Print the date 
void dateType::print() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}
// Get the month 
int dateType::getMonth() const
{
	return dMonth;
}
// Get the day 
int dateType::getDay() const
{
	return dDay;
}
// Get the year 
int dateType::getYear() const
{
	return dYear;
}
// Get the days in the month 
int dateType::getDaysInMonth()
{
	int noOfDays;

	switch (dMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		noOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		noOfDays = 30;
		break;
	case 2:
		if (isLeapYear())
			noOfDays = 29;
		else
			noOfDays = 28;
	}

	return noOfDays;
}
// Check if it is a leap year 
bool dateType::isLeapYear()
{
	if (((dYear % 4 == 0) && (dYear % 100 != 0)) || dYear % 400 == 0)
		return true;
	else
		return false;
}

dateType::dateType(int month, int day, int year)
{
	// Add constructor 
	setDate(month, day, year);
}
// Figure out how many days have passed 
int dateType::numberOfDaysPassed()
{
	int monthArr[13] = { 0, 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };

	int sumDays = 0;
	int i;

	for (i = 1; i < dMonth; i++)
		sumDays = sumDays + monthArr[i];
	// Take leap years into account 
	if (isLeapYear() && dMonth > 2)
		sumDays = sumDays + dDay + 1;
	else
		sumDays = sumDays + dDay;

	return sumDays;
}
// Figure out how many days are left 
int dateType::numberOfDaysLeft()
{
	if (isLeapYear())
		return 366 - numberOfDaysPassed();
	else
		return 365 - numberOfDaysPassed();
}

void dateType::incrementDate(int nDays)
{
	int monthArr[13] = { 0, 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };
	int daysLeftInMonth;

	daysLeftInMonth = monthArr[dMonth] - dDay;

	if (daysLeftInMonth >= nDays)
		dDay = dDay + nDays;
	else
	{
		dDay = 1;
		dMonth++;
		nDays = nDays - (daysLeftInMonth + 1);

		while (nDays > 0)
			if (nDays >= monthArr[dMonth])
			{
				nDays = nDays - monthArr[dMonth];

				if ((dMonth == 2) && isLeapYear())
					nDays--;

				dMonth++;
				if (dMonth > 12)
				{
					dMonth = 1;
					dYear++;
				}

			}
			else
			{
				dDay = dDay + nDays;
				nDays = 0;
			}
	}
}
