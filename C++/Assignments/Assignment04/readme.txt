- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To build this program I only used 2 variables. I will be using the standard 
iostream, vector, 
A boolean variable that is switched
true or false depending on what the number is. I also have an unsigned integer
named NUMBER, unsigned because it will always be positive. The program only runs
while the NUMBER does not = 0, giving the user the option to quit at any time.
After the user enters a NUMBER, the next process is to check whether it is prime 
or not. If the number is not a prime number it will Run 2 different functions.
the first function's loop is designed to only output all the factors of the NUMBER. 
The second function iterates through and outputs only the Prime factors of the NUMBER.
After both of the functions are done executing the entire process is looped until
the user enters a 0 to exit. When the user enters a 0 in , they will be thanked
for playing and the program is done executing.	

	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f Makefile.nix. To run the program type the file name ./crapsBonus
to run it. 


2)pseudo-code********************************************************************
Setup 
	Welcome person to the Factoring Machine
	begin
		initialize loop while (NUMBER != 0) 0 being the exit
			Ask the NUMBER for the computer to factor
			RUN askForInt
				checks if its a logical int NUMBER
					if yes 
						returns value
					if not 
						says try again and re-asks
			RUN isPrime function on the NUMBER
				if (PRIME)
					Tell user the NUMBER is prime, re ask NUMBER.
				if (!PRIME)
					RUN factors function on the NUMBER
						loop when i < NUMBER 
							if NUMBER % i == 0 
								push i onto vector
								display i in cout
						return vector
					RUN primeFactors function on NUMBER
						loop while (NUMBER / i >= 1)  i =2
							if (NUMBER % i == 0)
								push i onto vector
								display i in cout
								NUMBER is assigned new value of NUMBER/i
							else if (NUMBER % i != 0)
								++i
						return ret
		Re-looping until NUMBER == 0
	display Thanks For playing !
end

3)Accomplishments*****************************************************************
	After completing this assignment I accomplished writing fully functional functions.
I accomplished sending a value to a function whether it be a predicate bool function or 
unsigned vector function. These functions would return values back to the main function.
My code for this program is much neater since its multi-file. Multi-file being; 
the prototypes,the functions, and main code are all in separate files. This made it much 
easier to navigate and pinpoint compile errors, as well as making it look neater. I have 
compiled this program on Unix and it was also fully functional. 

4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included, CPP's,Header,Readme,Makefile,UnixVersions.