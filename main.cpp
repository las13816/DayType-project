// Unit test 

#include <iostream>
#include "dayType.h"

using namespace std;

int main() {
    // Test default constructor
    dayType defaultDay;
    cout << "From default constructor: ";
    defaultDay.print();
    cout << endl;

    // Test nextDay() method and output next day 
    cout << "Next day: " << defaultDay.nextDay() << endl;

    // Test prevDay() method and output previous day 
    cout << "Previous day: " << defaultDay.prevDay() << endl;

    // Test constructor with parameters
    dayType customDay("Monday");
    cout << "From constructor with parameters: ";
    customDay.print();
    cout << endl;

    // Test addDay() method and add 3 days 
    customDay.addDay(3);
    cout << "After adding 3 days: ";
    customDay.print();
    cout << endl;
    // Add 30 days 
    customDay.addDay(30);
    cout << "After adding 30 days: ";
    customDay.print();
    cout << endl;
    // Add 365 days 
    customDay.addDay(365);
    cout << "After adding 365 days: ";
    customDay.print();
    cout << endl;
    // Return 
    return 0;
}
