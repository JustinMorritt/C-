#include <iostream>
#include <ctime>
#include <string>
#include <sstream> 
#include "date.h"

using namespace std;

void Date::NowDate()
{
time_t rawtime;
struct tm *theTime;
	time_t tim;
	time(&tim);
	theTime = localtime(&tim);

	_Month	= theTime->tm_mon +1;
	_Day	= theTime->tm_mday;
	_Year 	= theTime->tm_year + 1900;
};


void Date::DisplayDate(std::string saying, int month, int day, int year) 
{
	_Month = month;
	_Day = day;
	_Year = year;
	if(IsLeapYear(year))
	{
		std::cout << "\n\nThis is a leap year!" << std::endl;
	}
	if(!IsLeapYear(year))
	{
	std::cout <<  ToString(saying, GetMonth(),GetDay(),GetYear()) << std::endl;
	}
};


std::string Date::ToString(std::string saying, int month, int day, int year)
{
	const std::string MONTHS[] =
	{"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::string _strMonth = MONTHS[month - 1];

	int _D = day, _Y = year;
	string _strDay;
	string _strYear;
	ostringstream convertD;
	ostringstream convertY;
	convertD << _D;
	convertY << _Y;
	_strDay = convertD.str();
	_strYear = convertY.str();

	string _strDate = saying + _strMonth + " " + _strDay + ", " +  _strYear;

return _strDate;
};


int Date::GetYear()const
{
	return _Year;
};
int Date::GetMonth()const
{
	return _Month;
};
int Date::GetDay() const
{
	return _Day;
};


bool Date::IsLeapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
			return true;
	}
	return false;
};


int Date::IsLeapDay(int month, int year) 
{
	int days;
	if(month == 2)
	{
		if(IsLeapYear(year))
		{
			days = 29;
			return days;
		}
		days = 28;
		return days;
	}
	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		days = 30;
		return days;
	}
	else
	{
		days = 31;
		return days;
	}
};


std::string Date::DaysToString(int days) const
{
	int _d = days;
	ostringstream convertD;
	string _strDays;
	convertD << _d;
	_strDays = convertD.str();
	return _strDays;
}
