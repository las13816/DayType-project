#include <iostream> 
#include <string>

using namespace std;

class dayType
{
public:
	dayType();
	dayType(string inputDay);
	~dayType();

	string setDay(string inputDay);
	string returnDay();

	void printDay(string today);

	string setReturnNext(string today);
	string setReturnPrevious(string today);

	void printTo();

	string addToDay(string today, int addto);



private:

	string today;
	string days[7];
	string tomorrow;
	string previousDay;
	string addedDay;




};
