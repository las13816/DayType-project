#include "calendarType.h"

//defaults constructor 
calendarType::calendarType()
{
	setMonth(1);
	setYear(1900);
}

//sets input month and year
calendarType::calendarType(int m, int y)
{
	setMonth(m);
	setYear(y);
}

void calendarType::setMonth(int m)
{
	firstDate.setMonth(m);
}

void calendarType::setYear(int y)
{
	firstDate.setYear(y);
}

int calendarType::getMonth()
{
	return firstDate.getMonth();
}

int calendarType::getYear()
{
	return firstDate.getYear();
}

void calendarType::printCalendar()
{
	printTitle();
	printDates();
}



void calendarType::printTitle()
{
	firstDate.printLongMonthYear();

	cout << "\n";

	for (int i = 0; i != 8; i++)
	{
		string shortName = firstDay.weekDays[i].substr(0, 3);


		cout << " " << shortName; 
	}
}

void calendarType::printDates()
{

	int i = 0;
	dayType day = firstDayOfMonth();


	if (day.getDay() == "Sunday")
	{

		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay(); 


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";
	}


	if (day.getDay() == "Monday")

	{
		

		cout << "\n";

		for (int k = 0; k < 1; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 6) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay(); 


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay();


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Tuesday")

	{

		

		cout << "\n";

		for (int k = 0; k < 2; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 5) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay(); 


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay(); 


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Wednesday")

	{

		

		cout << "\n";

		for (int k = 0; k < 3; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 4) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay(); 


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay(); 


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Thursday")

	{

		

		cout << "\n";

		for (int k = 0; k < 4; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 3) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay(); 


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay(); 


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Friday")

	{

		

		cout << "\n";

		for (int k = 0; k < 5; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 2) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay(); 


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay();


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

	if (day.getDay() == "Saturday")

	{

	

		cout << "\n";

		for (int k = 0; k < 6; k++) 
		{
			cout << " " << " "; 
		}

		while (i < 1) 
		{
			if (firstDate.getDay() <= 9)
				cout << " " << " " << firstDate.getDay(); 
			else
				cout << " " << " " << firstDate.getDay();


			if (firstDate.getDay() < firstDate.getDaysInMonth())
			{
				firstDate.incrementDate(1);
			}

			i++;
		}

		
		while (firstDate.getDay() < firstDate.getDaysInMonth())
		{
			i = 0;
			cout << "\n";


			while (i < 7)
			{
				if (firstDate.getDay() <= 9)
					cout << " " << " " << firstDate.getDay(); 
				else
					cout << " " << " " << firstDate.getDay(); 


				if (firstDate.getDay() < firstDate.getDaysInMonth())
				{
					firstDate.incrementDate(1);
				}

				i++;
			}
		}
		cout << "\n\n";

	}

}

dayType calendarType::firstDayOfMonth()
{
	dayType day;
	int countResult;
	int y = getYear();
	int m = getMonth();
	int d = 1;

	if (firstDate.getMonth() == 1 && firstDate.getYear() == 1500)
	{
		day.setDay(firstDay.weekDays[1]);
	}
	else
	{
		static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
		y -= m < 3;
		countResult = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

		day.setDay(firstDay.weekDays[countResult]);
	}

	return day;
}