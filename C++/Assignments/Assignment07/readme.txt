- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To Build this program you will need to include the following standard libraries:
algorithm, iostream, string, Windows.h(Time/date), stdio.h(Time/date). You will also 
need to include the date.h header file as well as the prototypes.h header file. You 
Will need to build a Date class with the following member functions: a NowDate, DisplayDate
,ToString, DaysToString, GetYear, GetMonth, GetDay, IsLeapYear, IsLeapDay. This class will
host three private member variables: Month,Day,Year. Date constructor will have a default 
of calling the NowDate function, this function sets the member variables to the current date.
The Display date function assigns the member variables, then is checks whether the numbers
passed in as arguments equal a leap year. If it is a leap year it will display "this
is a leap year" , otherwise it will run the ToString function and pass it the month,day,year.
The ToString member function simply converts the integer month that it was passed to a readable
string. It converts the integer to a string by assigning a string the value of a spot on a
constant array of months. The To String function proceeds to convert the other into into strings,
then it joins them all into one readable string and returns that. The IsLeapYear function, when
called, is passed a year value in which it determines through an algorithm whether its a 
leap year. The IsLeapDay function is called upon after the user enters a year and month.
This function first determines what month it was passed and if it was a leap year, then
returns an integer of days. The DaysToString member function allows a user to pass an integer 
of days to it and it will convert/return it as a string. The Main function will simply
make a new Date object, then display it using the default (current date). Then the program
will ask the user to enter a Year,Month,Day. When asking Day, I have incorporated the
IsLeapDay to display the exact range in numbers to be able to pick. Once the Date is entered,
it will either display "This is a leap year" or "Your Date: ". 

	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./leapYearTest
to run it. 


2)pseudo-code********************************************************************
Setup
	Class Date
		Assign Member functions(public)
			NowDate
			DisplayDate
			ToString
			DaysToString
			GetYear
			GetMonth
			GetDay
			IsLeapYear
			IsLeapDay
		Assign Member variables(private)
			Month
			Day
			Year
	begin
		Create Date object named dateThen
			use dateThen.DisplayDate()  
				PASS IN ("date object then:", 7, 7, 2001);
					DisplayDate() checks if leap year passing in year to
						IsLeapYear()
							If year 
								<< cout "This is a leap year"
							If !year pass values to ToString() 
								return's "date object then : July 7, 2001"
		Create Date object date(Default constructor sets date to current date)
			use date.DisplayDate()  
				PASS IN ("date object now:", date.GetMonth(), date.GetDay(), date.GetYear());
					DisplayDate() checks if leap year passing in year to
						IsLeapYear()
							If year 
								<< cout "This is a leap year"
							If !year pass values to ToString() 
								return's "date object now : August 27, 2014"
		Display "Enter a custom date" using askForInt() passing it a range from 1-2
				if 1 (enter while loop)
				if 2 (end program)
		WHILE loop(while command != 2)
			assign year to = askForInt( "Year 1-5000"  , 5000, 1) passing in range
			assign month to = askForInt( "Month 1-12"  , 12, 1) passing in range
			int _D = the value from IsLeapDay(month, year) calculates the max days in the month picked.
			string strDays = DaysToString(_D) this converts max month days to a string
			assign days to = askForInt( "days (1-" + strDays + ")"  , _D, 1) makes sure they can only enter a correct day
			use date.DisplayDate()  
				PASS IN ("Your Date :",month ,day ,year );
			Display "Enter a custom date" using askForInt() passing it a range from 1-2
end

3)Accomplishments*****************************************************************
	This Assignment let me build a separate header file and cpp file for my class.
This is very important when using encapsulation. I created a class with 9 member functions
and 3 member variables. I learned a lot about using member functions and declaring them.
By passing values from one member function to another, one can achieve large tasks behind
the scenes of the main code. I feel a lot more comfortable with creating a class and the 
functionality of using one to create objects. I used public and private members , as well
as a couple static member functions that would be the same for every object. I also used
many constant functions that promise not to change any information in the object. Although 
I did not get into using pointers, I feel if they are needed I will know when to use them.
This has so far been the most difficult assignment yet and taken the most time. With the 
Program 100% complete it will tell you whether the year is a leap year or not. The program
also keeps an eye that the user enters the correct information.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:Headers,Readme,Makefile,UnixVersions.