// dayType.cpp

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

// Static array
string dayType::weekDays[7] = { "Sunday", "Monday", "Tuesday",
                               "Wednesday", "Thursday", "Friday",
                               "Saturday" };
// Changed to a void 
void dayType::print() const {
    cout << day;
}

string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == day) {
            return weekDays[(i + 1) % 7];
        }
    }
    return ""; // Handle case where day is not found
}

string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == day) {
            return weekDays[(i + 6) % 7]; // Modulo 7 to handle wrap around
        }
    }
    return ""; // Handle case where day is not found
}

void dayType::addDay(int nDays) {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == day) {
            day = weekDays[(i + nDays) % 7];
            break;
        }
    }
}

void dayType::setDay(string d) {
    bool found = false;
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == d) {
            day = d;
            found = true;
            break;
        }
    }
    if (!found) {
        day = "Sunday"; // Assign default value if input doesn't match
    }
}

string dayType::getDay() const {
    return day;
}

dayType::dayType() {
    day = "Sunday"; // Initialize to default value
}

dayType::dayType(string d) {
    setDay(d); // Use setDay function to ensure validity of input
}
