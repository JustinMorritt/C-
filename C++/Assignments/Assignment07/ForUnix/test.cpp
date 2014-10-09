#include <iostream>
#include <string>
#include "date.h"
#include "prototypes.h"

using namespace std;

int main()
{
    Date dateThen;
	dateThen.DisplayDate("The date object 'Then': ", 7, 7, 2001);
	
	Date date;
	date.DisplayDate("The date object 'Now': ", date.GetMonth(), date.GetDay(), date.GetYear());
	
    int command = askForInt("\n\nEnter a custom date?\n1 - yes\n2 - no\n: ", 2, 1);
    while(command != 2)
    {
        int year = askForInt("Year (1 - 5000): ", 5000, 1);
        int month = askForInt("Month: (1 - 12): ", 12, 1);
		int _D = date.IsLeapDay(month, year);     
		string _strDays = date.DaysToString(_D);       
        int day = askForInt("Day: (1 - " + _strDays + "): ", _D , 1);
		date.DisplayDate("\n\nYour Date: ",month, day, year);
        command = askForInt("\n\nEnter a custom date?\n1 - yes\n2 - no\n: ", 2, 1);
    }    
    return 0;
};

