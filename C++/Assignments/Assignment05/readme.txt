- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To build this program , you will only be including the standard iostream library.
You will declare a double function named Fibonacci that takes in an unsigned argument 
named term. In the main function you will display the term number and the Fibonacci
number. Also, in the main function you will have a loop sending a term number to the 
Fibonacci function. This loop will also display the number in which it is sending to
the function as well as the number that the function is returning. The Fibonacci function
will consist of 3 variables, I named them lastnum1, lastnum2, and number. The variables
lastnum1 represents the previous previous terms number(term-2). the lastnum2 variable represents
the previous term's number(term-1), and the number variable represents both previous and previous 
previous term's number added together. Then the function executes a for loop that
iterates through until it hits the passed in term number. Every time the function is called
with the passed in term this loop will iterate through assigning numbers to the variables 
until it hits the passed in term number. Once the loop reaches the max term number it will 
exit the loop and return the number value. Number being the final result of the Fibonacci sequence 
at that term number.

	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f Makefile.nix. To run the program type the file name ./fibonacci
to run it. 


2)pseudo-code********************************************************************
Setup 
	display Term & Value
	begin
		initialize loop while (i <= 50) "the term number"
			display i (the term) and also display function fibbonacci(i) at the term number
		Fibonacci function (taking the argument of unsigned term)
			initialize loop while (i <= term) "passed in as i from main function"
				assign number to lastnum1 + lastnum2
				assign lastnum1 to lastnum 1
				assign lastnum2 to number
			if i <= term exit loop
			return number to main function's loop.
end

3)Accomplishments*****************************************************************
	I successfully converted the recursive Fibonacci function into an iterative one.
The speed of the program was dramatically changed, as well as the simplicity. I think
that while using a recursive function , it works, but lacks the direct speed of a iterative
function. A recursive function would work better on only one call not a multitude of calls
that entirely fills the memory stack. This assignment helped me with further understanding
the for loop, as well as enhanced my function building skills. The recursive function may 
only have a place in very small operations, otherwise the iteration seems superior in my eyes.
The main benefits of using recursion is that it mimics our normal approach at solving the problem.
Recursion can also make exploring some data trees easier by storing the stack frames.
The iterative version stores much less in the stack frame because after every calculation the
stack frame is cleared.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included,Readme,Makefile,UnixVersions.