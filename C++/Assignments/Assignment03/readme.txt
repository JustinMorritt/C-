- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
To build this game I declared 6 integer variables and 4 boolean variables. Mystery number
is the number that the computer will be guessing and is determined by the user. Cpu guess
is a number that fluctuates as the cpu calculates its new guesses. Cpu tries, simply 
keeps track of how many tries the cpu takes to get the right number. The high and Low number
variable are used by the cpu as a way to keep track where the most logical guess should be.
The last variables you will need are a higher and lower, and a solved and cheater. Theses
are either true or false and are used to determine the next calculation or wheter someone
won or cheated. I start by asking what the mystery number is and use a simple while loop
to determine if someone enters only a 1-100. Once someone enters a 1-100 the program moves
on to the cpu making a random first guess. I use some if statements to determine whether 
the cpu guessed lower or higher. Then prompt the user whether the cpu is high low or solved.
if the user answers correctly the cpu will guess again. If the user enters a lie, the cpu
will know and call you a cheater and the game will be over. 

	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f Makefile.nix. To run the program type the file name ./crapsBonus
to run it. 


2)pseudo-code********************************************************************
Setup 
	Welcome person to the Mystery Number Game
	Ask the mystery number for the computer to guess
		>> Get the mystery number between 1-100
	begin
	computer randomly picks number = guess
	initialize loop while (!solved) && (!cheated)
			Display the number the computer picked
			check if higher or lower then mystery number
				if higher then mystery number
					store higher = true
				if lower then mystery number
					store lower = true
				if choice = mystery number
					store solved = true, variable but still let user decide to determine whether correct
			Display The options to tell computer if high/low/correct
				>> Get input from user 
				if input = 1(low) and lower != true
					cheater
					break
				if input = 2(high) and higher != true
					cheater
					break
				if input = 3(solved) and solved = true
					solved = true
					break
				if input = !3 and solved = true
					cheater
					break
				if number is higher then mystery#
					low number = cpu guess +1
					cpu guess = low number + high number / 2
				if number is lower then mystery#
					high number = cpu guess -1
					cpu guess = low number + high number / 2
	if Solved
		display congratulations to the cpu and display how many tries it took.
	if cheated 
		tell user they cheated 
end

3)Accomplishments*****************************************************************
	I have completely finished the program and exercised my knowledge of the while loop.
I also used some well placed if statements to make the game run smoothly. This was a good 
assignment to test whether someone can make a cpu do logical reasoning. The technical term
for this would be Binary partitioning. The logic behind this small and simple game 
will be carried on to larger projects indefinitely. I also learned during this assignment 
not to make something too difficult. I originally attempted using Vector arrays, having 
the cpu's choice erase the remaining numbers from the array. While doable, it wasn't necessary
to get the job done efficiently. I have also tested this program on the UNIX server and 
it was fully functional.

4)Non-Accomplishments*************************************************************
N/A I have accomplished everything for this assignment.