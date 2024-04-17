#include <iostream>
#include <string>
// Include header files 
#include "dateType.h"
#include "extDateType.h"
// Static array 
std::string extDateType::eMonths[] = { "", "January", "February", "March", "April",
                                       "May", "June", "July", "August",
                                       "September", "October", "November", "December" };
// Print the long date (Month, Day, Year) 
void extDateType::printLongDate()
{
    std::cout << eMonth << " " << getDay() << ", " << getYear();
}
// Print the date with the long month and year (Month, Year) 
void extDateType::printLongMonthYear()
{
    std::cout << eMonth << " " << getYear();
}
// Set the date 
void extDateType::setDate(int m, int d, int y)
{
    dateType::setDate(m, d, y);
    eMonth = eMonths[m];
}
// Set month 
void extDateType::setMonth(int m)
{
    dateType::setMonth(m);
    eMonth = eMonths[m];
}
// Default constructor 
extDateType::extDateType()
{
    eMonth = "January";
}
// Constructor with parameters 
extDateType::extDateType(int m, int n, int d)
    : dateType(m, n, d)
{
    eMonth = eMonths[m];
}
