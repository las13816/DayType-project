#include <iostream>
#include "dateType.h"

int main() {
    // Default constructor
    std::cout << "Default constructor: ";
    dateType today;
    today.print();
    std::cout << std::endl;

    // Constructor with specified date
    std::cout << "Constructor: ";
    dateType specificDate(4, 10, 2024);
    specificDate.print();
    std::cout << std::endl;

    //Displaying days passed, left, and number of days in the month 
    std::cout << "Number of days passed: " << specificDate.numberOfDaysPassed() << std::endl;
    std::cout << "Number of days left: " << specificDate.numberOfDaysLeft() << std::endl;
    std::cout << "Number of days in month: " << specificDate.getDaysInMonth() << std::endl;

    //Incrementing date
    specificDate.incrementDate(15);
    std::cout << "After 15 days, the date will be: ";
    specificDate.print();
    std::cout << std::endl;

    //Resetting dates
    std::cout << "Resetting year to 2000: ";
    specificDate.setYear(2000);
    specificDate.print();
    std::cout << std::endl;

    std::cout << "Resetting month to 2: ";
    specificDate.setMonth(2);
    specificDate.print();
    std::cout << std::endl;

    std::cout << "Resetting day to 29: ";
    specificDate.setDay(29);
    specificDate.print();
    std::cout << std::endl;

    std::cout << "Date is now set to: ";
    specificDate.print();
    std::cout << std::endl;

    return 0;
}
