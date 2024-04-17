// Header guard 
#ifndef extDateType_H
#define extDateType_H
#include <string>
// Include dateType header 
#include "dateType.h"

// Declare class as a branch from dateType 
class extDateType : public dateType {
public:
    //Static array 
    static std::string eMonths[13]; 

    void printLongDate();
    void setDate(int, int, int);
    void setMonth(int m);

    void printLongMonthYear();
    // Constructors 
    extDateType();
    extDateType(int, int, int);
    // Private instance variable
private:
    // Instance variable that stores the month 
    std::string eMonth;
};

#endif

