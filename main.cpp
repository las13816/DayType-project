// Main.cpp

#include <iostream>
#include "dayType.h"

using namespace std;

int main() {
    // Test default constructor
    dayType defaultDay;
    cout << "From default constructor: ";
    defaultDay.print();
    cout << endl;

    // Test nextDay() method
    cout << "Next day: " << defaultDay.nextDay() << endl;

    // Test prevDay() method
    cout << "Previous day: " << defaultDay.prevDay() << endl;

    // Test constructor with parameters
    dayType customDay("Monday");
    cout << "From constructor with parameters: ";
    customDay.print();
    cout << endl;

    // Test addDay() method
    customDay.addDay(3);
    cout << "After adding 3 days: ";
    customDay.print();
    cout << endl;

    customDay.addDay(30);
    cout << "After adding 30 days: ";
    customDay.print();
    cout << endl;

    customDay.addDay(365);
    cout << "After adding 365 days: ";
    customDay.print();
    cout << endl;

    return 0;
}
