#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

// Static array
string dayType::weekDays[7] = { "Sunday", "Monday", "Tuesday",
                               "Wednesday", "Thursday", "Friday",
                               "Saturday" };

void dayType::print() const {
    cout << day;
}

string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == day) {
            return weekDays[(i + 1) % 7];
        }
    }
    return ""; 
}

string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == day) {
            return weekDays[(i + 6) % 7]; 
        }
    }
    return ""; 
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
        day = "Sunday"; 
    }
}

string dayType::getDay() const {
    return day;
}

dayType::dayType() {
    day = "Sunday"; 
}

dayType::dayType(string d) {
    setDay(d); 
}
