#pragma once
// Header guard 
#ifndef dateType_H
#define dateType_H

class dateType
{
	// Public variables 
public:
	// Prototypes which set the date 
	void setDate(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);

	// Prototype for printing the date 
	void print() const;
	
	// Prototype to calculate how many days passed 
	int numberOfDaysPassed();

	// Prototype to calculate the number of days left 
	int numberOfDaysLeft();

	// Prototype to increment the date by a given number ( nDays) 
	void incrementDate(int nDays);

	// Prototypes to get month, day, and year 
	int getMonth() const;
	int getDay() const;
	int getYear() const;

	// Prototype to get the number of days in the current month 
	int getDaysInMonth();

	// Check for leap year 
	bool isLeapYear();

	// Constructor containing default parameters 
	dateType(int = 1, int = 1, int = 1900);

	// Private variables 
private:
	int dMonth;
	int dDay;
	int dYear;
};

#endif
