- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment14.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	bool operator < (const Date& date1, const Date& date2);
		overloading the < operator returning a bool value
			takes a constant Date reference named date1, and another const Date& date2
				return !(date1 == date2) || !(date1 > date2); uses existing overloads to collect bool return.
	bool operator <= (const Date& date1, const Date& date2);
		overloading the <= operator returning a bool value
			takes a constant Date reference named date1, and another const Date& date2
				returns !(date1 > date2) || (date1 == date2); uses existing overloads, returning if less then or equal to
	ostream& operator<<(ostream& os, const Date& d)
		std::stringstream ss
		ss << d.toString()
		os << ss.str()
		return os;
	Date operator--(int) "takes a dummy value"
		addDay(false);
		Date ret(*this);
		return ret;
	Date& operator--();
		addDay(false)
		return *this
	Date& operator-=(int days)
		if days == 0  then return *this
		if days < 0 enter a for loop decrementing i while its not equal to days
			addDay(true) "subtracting a negative number results in addition"
		else , iterate through a loop incrementing i while it isn't equal to days
			addDay(false) "subtracting a day "
		return this*
	Date& operator+=(int days)
		if days == 0  then return *this
		if days < 0 enter a for loop decrementing i while its not equal to days
			addDay(false) "subtracting a day "
		else , iterate through a loop incrementing i while it isn't equal to days
			addDay(true) "adding days"
		return this*
	friend int operator-(Date& date1, Date& date2)
		create int date1days , int date2days, int ret(return value)
		Determine date1days: iterate through the years starting form year 1 adding either
			366 days if isLeapYear() and 365 days if not. add these days to date1days
			if month ==1 
				add remaining days to date1days 
			else , iterate through the months adding the max days, after loop adds the
			remaining days in the current month to date1days
		Determine date2days: iterate through the years starting form year 1 adding either
			366 days if isLeapYear() and 365 days if not. add these days to date2days
			if month ==1 
				add remaining days to date2days 
			else , iterate through the months adding the max days, after loop adds the
			remaining days in the current month to date1days
		ret = date1days - date2days
		return ret
end

3)Accomplishments*****************************************************************
this assignment was a great exercise to see if we can solve extravagant problems. By making 
use of the overloaded assignment operators it allows us to use objects in logical ways that 
normally you cant. I really feel I know the syntax of an overloaded operator now. I want 
to start incorporating some of them in the poker project. I also completed making the custom 
exception, by using try and catch blocks you can deal with errors efficiently. I implemented my 
own custom exception into the date Class. the throw statement is embedded in the isValid function.
When the try block is placed around the area where one enters a date as soon as the IsValid
function fires off, it will either throw the exception or not. If the IsValid() throws the exception
the rest of the try block is ignored. 


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .