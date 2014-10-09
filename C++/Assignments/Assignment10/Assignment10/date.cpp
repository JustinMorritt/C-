#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <ctime>
#include "date.h"

const std::string Date::MONTH_STRINGS[] = 
{
    "", //one based indexing
    "January",
    "February",
    "March",
    "April",
    "May", 
    "June",
    "July",
    "August",
    "Septenber",
    "October",
    "November",
    "December"
};

const int Date::DAYS_PER_MONTH[] =
{
    0, //one based indexing
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    
};      



Date::Date(int day, int month, int year) : _year(year), _month(month), _day(day)
{
    isValid();
}

Date::Date()
{
	time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    _year = now -> tm_year + 1900;
    _month = now -> tm_mon + 1;
    _day = now -> tm_mday;
}




std::string Date::toString() const
{
    if(isValid() == false)
    {
        return std::string();
    }
    std::stringstream ss;
    ss  << MONTH_STRINGS[_month] << " " << _day << ", " <<  _year;
    return ss.str();            
}    


bool Date::isValid() const
{
   
	if(_month < MIN_MONTH || _month > MAX_MONTH)
    {
        std::cerr << "Invalid date " << std::endl;
        return false;
    }
    int daysThisMonth = maxDay(_month, _year);
     
    if(_day < MIN_DAY || _day > daysThisMonth)
    {
        std::cerr << "Invalid date " << std::endl;            
        return false;
        
    }
    
    
    return true;
}

bool Date::isLeapYear(int year)
{
    if(!(year % 4))
    {
        if(!(year % 100))
        {
            if(!(year % 400))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

bool Date::isLeapYear() const
{
    return isLeapYear(_year);
}

bool Date::isLeapDay() const
{
    return isLeapDay(_day, _month, _year);
}



int Date::maxDay(int month, int year)
{
	if (isLeapYear(year) && month == 2)
	{
		return 29;
	}
	return DAYS_PER_MONTH[month];
}


void Date::addDay(bool forward)
{
	if (forward)
	{
		if (getDay() < maxDay(getMonth(), getYear()))
		{
			this -> _day++;
		}
		else
		{
			this -> _day = 1;
			this -> _month++;
			if (this -> _month > 12)
			{
				this -> _month = 1;
				this->_year++;
			}
		}
	}
	else
	{
		if (getDay() > 1)
		{
			this -> _day--;
			// addDay is assigned today ????
		}
		else
		{
			this->_month--;
			if (this->_month == 0)
			{
				this->_month = 12;
				this->_year--;
			}
			this->_day = maxDay(getMonth(), getYear());
		}

	}
}


bool Date::isLeapDay(int day, int month, int year) 
{
	if(day == 29 && month == 2 && isLeapYear(year))
	{
		return true;
	}
	return false;
}


void Date::addYears(int years)
{
	if (years == 0)
	{
		return;
	}
	if (isLeapDay(getDay(), getMonth(), getYear()) &&
		!isLeapYear(getYear() + years))
	{
		this->_day = 28;
	}
	this->_year = getYear() + years;
}
    
void Date::addMonths(int months)    
{
	if (months == 0)
	{
		return;
	}
	int deltayears = months / 12;
	int deltamonths = months % 12;
	int newmonth = 0;
	if (months > 0)
	{
		newmonth = ((getMonth() + deltamonths) % 12);
		if (getMonth() + deltamonths > 12)
		{
			//std::cout << deltayears << std::endl;
			++deltayears;
			//std::cout << deltayears << std::endl;
		}

	}
	else //MONTHS ARE NEGATIVE
	{
		if (getMonth() + deltamonths < 1)
		{
			--deltayears;
			newmonth = ((getMonth() + deltamonths) + 12);
		}
		else
		{
			newmonth = (getMonth() + deltamonths);
		}
	}
	if (getDay() > maxDay(newmonth, getYear() + deltayears))
	{
		this->_day = maxDay(newmonth, getYear() + deltayears);
	}
	this->_year += deltayears;
	this->_month = newmonth;
}

void Date::addDays(int days)
{
	if (days == 0)
	{
		return;
	}
	if (days < 0)
	{
		for (int i = 0; i != days; --i)
		{
			addDay(false);
		}
	}
	else
	{
		for (int i = 0; i != days; ++i)
		{
			addDay(true);
		}
	}
}








