#ifndef extDateType_H
#define extDateType_H

#include <string>
#include "dateType.h"

class extDateType : public dateType {
public:
    static std::string eMonths[13]; 

    void printLongDate();
    void setDate(int, int, int);
    void setMonth(int m);

    void printLongMonthYear();

    extDateType();
    extDateType(int, int, int);

private:
    std::string eMonth;
};

#endif
