#include <iostream>

using namespace std;

class Date{
	int day;
	int month; 
	int year;
	public:
		
		Date(int day, int month, int year);

	void FirstForm();
	void SecondForm();
	void ThirdForm();
};

void Date::FirstForm()
{
	cout << month << "/" << day << "/" << year << endl;
}

void Date::SecondForm()
{
	string month;
	switch (this->month)
	{
		case 1: month = "January"; break;
		case 2: month = "February"; break;
		case 3: month = "March"; break;
		case 4: month = "April"; break;
		case 5: month = "May"; break;
		case 6: month = "June"; break;
		case 7: month = "July"; break;
		case 8: month = "August"; break;
		case 9: month = "September"; break;
		case 10: month = "October"; break;
		case 11: month = "November"; break;
		case 12: month = "December"; break;
		default: cout << "Invalid Month"; break;

	}
	cout << month << " " << day << ", " << year << endl;
}

void Date::ThirdForm()
{
	string month;
	switch (this->month)
	{
		case 1: month = "January"; break;
		case 2: month = "February"; break;
		case 3: month = "March"; break;
		case 4: month = "April"; break;
		case 5: month = "May"; break;
		case 6: month = "June"; break;
		case 7: month = "July"; break;
		case 8: month = "August"; break;
		case 9: month = "September"; break;
		case 10: month = "October"; break;
		case 11: month = "November"; break;
		case 12: month = "December"; break;
		default: cout << "Invalid Month"; break;
	}
	cout << day << " " << month << " " << year << endl;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int main()
{
	Date date0 = Date(25,12,2016);
	
	date0.FirstForm();
	date0.SecondForm();
	date0.ThirdForm();
	
	return 0;
}
