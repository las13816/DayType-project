#include <iostream>
#include <string>
#include "dateType.h"
#include "extDateType.h"

std::string extDateType::eMonths[] = { "", "January", "February", "March", "April",
                                       "May", "June", "July", "August",
                                       "September", "October", "November", "December" };

void extDateType::printLongDate()
{
    std::cout << eMonth << " " << getDay() << ", " << getYear();
}

void extDateType::printLongMonthYear()
{
    std::cout << eMonth << " " << getYear();
}

void extDateType::setDate(int m, int d, int y)
{
    dateType::setDate(m, d, y);
    eMonth = eMonths[m];
}

void extDateType::setMonth(int m)
{
    dateType::setMonth(m);
    eMonth = eMonths[m];
}

extDateType::extDateType()
{
    eMonth = "January";
}

extDateType::extDateType(int m, int n, int d)
    : dateType(m, n, d)
{
    eMonth = eMonths[m];
}
