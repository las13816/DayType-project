#ifndef dayType_H
#define dayType_H
#include <string>

using namespace std;

// Define class 
class dayType {
public:
    static string weekDays[7];
    void print() const;
    string nextDay() const;
    string prevDay() const;
    void addDay(int nDays);
    void setDay(string d);
    string getDay() const;

    dayType();
    dayType(string d);

private:
    string day; // Only one instance variable needed ( got rid of other instance variables ) 
};

#endif

