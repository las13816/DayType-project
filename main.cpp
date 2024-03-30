#include <iostream>
#include<fstream>
#include <iomanip>
#include "dayType.h" 

using namespace std;

// Main function 
// Test class 
int main()
{

	dayType day;


	day.printTo();

	string inputDay = "Monday";

	dayType daytwo(inputDay);
	daytwo.printTo();


	// Add 3 days to current day 
	day.printTo();
	int add1 = 3;
	string out1;
	out1 = day.addToDay(inputDay, add1);
	cout << "After adding 3 days:" << out1 << endl;

	int add2 = 30;
	string out2;

	// Add 30 days to current day 
	out2 = day.addToDay(inputDay, add2);
	cout << "After adding 30 days:" << out2 << endl;
	int add3 = 365;
	string out3;

	// Add 365 days to current day 
	out3 = day.addToDay(inputDay, add3);
	cout << "After adding 365 days:" << out3 << endl;




}