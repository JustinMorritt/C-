- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment13.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	leapday (date)
		if date.day is 29 and day.month is 2 and leapyear(date.year)
			leapday = true, else false

	maxday (month, year)
		if leapyear(year) and month is 2
				maxday is assigned 29
		switch on month
			case 2 :					 maxday is assigned 28
			case 1, 3, 5, 7, 8, 10, 12:	 maxday is assigned 31
			case 4, 6, 9, 11 : 			 maxday is assigned 30       
    
	addDay (forward)
	if forward is true AND if today.day is less than maxday (today.month, today.year)
			increment today.day
		else
			today.day is assigned to 1, AND increment today.month
			if today.month is greater than 12
				today.month is assigned to 1, AND increment today.year
	else
		if today.day is greater than 1
			decrement day.today, AND addDay is assigned today
		else    
			decrement today.month
			if today.month equals 0
				today.month is assigned 12, AND decrement today.year
				today.day is assigned maxday (today.month, today.year)

	addYears (int years)
		if years is 0 Then return   
		if today is leapday and (today + years) is not leapday
			today.day is assigned 28 
		today.year is assigned today.year + years

	addMonths (months)
	if months is 0,	then return        
	deltayears = months / 12
	deltamonths = months mod 12
	if months is greater than 0
		if today.month + deltamonths is greater than 12
			increment deltayears, AND newmonth is assigned (today.month + deltamonths) - 12
		else
			newmonth = today.month + deltamonths
	else //months is negative
		if today.month + deltamonths is less than 1
			decrement deltayears, AND newmonth is assigned today.month + deltamonths + 12                 
		else
			newmonth = today.month + deltamonths
	if today.day is greater than maxday(newmonth, today.year + deltayears)
	   today.day is assigned maxday
	today.year is assigned to today.year + deltayears
	today.month is assigned newmonth                 

	addDays (days)
	if days is 0, then return  
	if days is less than 0
	   for count from -1 to days decrementing
		   addDay(false)
	else   
	   for count from 1 to days 
		   addDay(true) 
end

3)Accomplishments*****************************************************************
	This assignment was great for testing my pseudo-code translation into real code.
We were given a many new functions that were added to out Date Class and had to implement
them with given dates. This assignment helped me understand just what goes on when adding 
months, days, and years to a date. We also had to write a function that would return the 
maximum amount of days in a given month. These functions are all the type that make you combine
already existing functions to extend the functionality of the class. This is a great example
of polymorphism in action.  


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .