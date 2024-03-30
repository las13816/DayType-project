#include <iostream>
#include "dayType.h"

// Default constructor
using namespace std;

dayType::dayType() {

    days[0] = "Sunday";
    days[1] = "Monday";
    days[2] = "Tuesday";
    days[3] = "Wednesday";
    days[4] = "Thursday";
    days[5] = "Friday";
    days[6] = "Saturday";

    today = days[0];
    tomorrow = days[0 + 1];
    previousDay = days[0 + 6];
    cout << "From default constructor ";
};


dayType::~dayType()
{
};

// Assign days 
dayType::dayType(string inputDay)
{
    days[0] = "Sunday";
    days[1] = "Monday";
    days[2] = "Tuesday";
    days[3] = "Wednesday";
    days[4] = "Thursday";
    days[5] = "Friday";
    days[6] = "Saturday";

    today = inputDay;


    // Assign tomorrow and yesterday
    tomorrow = dayType::setReturnNext(today);
    previousDay = dayType::setReturnPrevious(today);



    // Print statement 
    cout << "From constructor with parameter ";

};

// Assign values to tomorrow 
string dayType::setReturnNext(string inputDay)
{
    if (today == days[0])
    {
        tomorrow = days[1];
    }
    if (today == days[1])
    {
        tomorrow = days[2];
    }
    if (today == days[2])
    {
        tomorrow = days[3];
    }
    if (today == days[3])
    {
        tomorrow = days[4];
    }
    if (today == days[4])
    {
        tomorrow = days[5];
    }
    if (today == days[5])
    {
        tomorrow = days[6];
    }
    if (today == days[6])
    {
        tomorrow = days[0];
    }
    return tomorrow;

};

// Assign values to previous day or yesterday
string dayType::setReturnPrevious(string inputDay)
{
    if (today == days[0])
    {
        previousDay = days[6];
    }
    if (today == days[1])
    {
        previousDay = days[0];
    }
    if (today == days[2])
    {
        previousDay = days[1];
    }
    if (today == days[3])
    {
        previousDay = days[2];
    }
    if (today == days[4])
    {
        previousDay = days[3];
    }
    if (today == days[5])
    {
        previousDay = days[4];
    }
    if (today == days[6])
    {
        previousDay = days[5];
    }
    return previousDay;

};

// Print 
void dayType::printDay(string today)
{
    cout << "Today is: " << today << endl;
};

// Set the day and return 
string dayType::setDay(string inputDay)
{
    today = inputDay;
    return 0;
};

// Return value for current day 
string dayType::returnDay()
{
    return today;
};

// Loop for addign days to current day 
string dayType::addToDay(string today, int addto)
{

    int index;

    if (today == days[0])
    {
        index = 0;
    }
    if (today == days[1])
    {
        index = 1;
    }
    if (today == days[2])
    {
        index = 2;
    }
    if (today == days[3])
    {
        index = 3;
    }
    if (today == days[4])
    {
        index = 4;
    }
    if (today == days[5])
    {
        index = 5;
    }
    if (today == days[6])
    {
        index = 6;
    }

    int z = (addto + index) % 7;
    string addedDay = days[z];
    return addedDay;

};




// Print statements 
void dayType::printTo()
{
    cout << "Today is: " << today << endl;
    cout << "Tomorrow is: " << tomorrow << endl;
    cout << "Yesterday was: " << previousDay << endl;
}