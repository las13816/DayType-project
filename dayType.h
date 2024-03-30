#include <iostream> 
#include <string>

using namespace std;

// Class 
class dayType
{
public:
	// constructor
	dayType();

	// constructor with parameter. 
	dayType(string inputDay);

	// Destructor 
	~dayType();

	// Pre-condition: inputDay must be a valid day. 
	// Post-condition: day is set. 
	string setDay(string inputDay);
	
	// Pre-condition: must recieve a valid day.
	// Post-condition: returns the current day. 
	string returnDay();

	// Prints today. 
	void printDay(string today);

	// Pre-condition: today must be a valid day. 
	// Post-condition: returns the value for tomorrow. 
	string setReturnNext(string today);

	// Pre-condition: today must be a valid day. 
	// Post-condition: returns the value for yesterday. 
	string setReturnPrevious(string today);

	void printTo();

	// Pre-condition: today must be a day of the week.
	// Post-condition: Returns the day after adding 'addto' days to today.
	string addToDay(string today, int addto);



private:

	// Current day 
	string today;
	// Array to store days of the week. 
	string days[7];
	// Next day 
	string tomorrow;
	// Yesterday 
	string previousDay;
	// Day after addings x number of days 
	string addedDay;




};
