- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To Build this program you will need to include the following standard libraries:
algorithm, iostream, string. You will also need to include the randgen.h header file
as well as the prototypes.h header file. A constant string array of all the individual
cards will be stored globally. A few more global variables will be assigned, the deck
size, the Shuffle command, Show command, Quit command, Menu, and an "I'm outta here" display.
The main function will start off by initializing the Random number generator named rNg.
A vector to a constant string as a pointer will next me initialized and assigned the name
of pCardVec. This vector will essentially store all of the addresses of the Constant
Card array. A for loop is used to push the address of each string from the constant global
array named CARDS. After the pointers have all been pushed to the vector we assign a integer
named command to 0, this will be the number used in menu choices. We enter into a loop that
is a do while loop, this only executes when the command variable does not equal Quit 
command(3). Once in the do while loop, command is assigned the value of the askForInt 
function. The function is passed the arguments of the MENU for the string, and the 
Quit/Shuffle command for the Min and Max int. When command is assigned to a legal value,
the switch statement thereafter judges the action it must perform. Shuffle command executes
the random_shuffle function from the standard algorithm library. The random_shuffle function
is passed the arguments of the vector of pointers Beginning/end and uses Ross's provided
random number generator. This shuffles the position of all the pointers(addresses) on the 
pointer vector. Show Command runs through a for loop and displays the value of the address
all the pointers are pointing at, whether it is shuffled or not. This for loop also puts them
into 4 lines of 13 cards. The last command is the Quit command, this will break, and end the 
do while loop. The "IM OUTA HERE" message is displayed and the main function ceases to exist.

	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./cards
to run it. 


2)pseudo-code********************************************************************
Setup
	constants: CARDS(string array),DECK_SIZE(unsigned),SHUFFLE COMMAND
				,SHOW COMMAND, QUIT COMMAND, MENU, IM OUTTA HERE
	begin
		initialize RandGen 
		initialize a vector<const string*> pCardVec
			for loop(while less then DECK SIZE)
				push_back &CARDS onto pCardVec (addresses of CARDS's strings) 
		Start loop do while (command != QUIT_COMMAND) "3"
			Command is assigned the value of askForInt function()
				displays MENU
				Gets Command
			Switch Statement For (Command)
				case 1 (Shuffle Command)
					random_shuffle with arguments of pCardVec.begin(), pCardVec.end(),rNg
					break
				case 2 (Show Command) 
					for loop(while less then DECK SIZE)
						check if 13 or multiple of 13 to endl
						display value of address at *pCardVec[i]
						break
				case 3 (Quit Command)
					break (ends do while loop)
				
		Display IM OUTTA HERE "Buh bye!"
end

3)Accomplishments*****************************************************************
	I accomplished pushing pointers onto a vector and shuffling up the pointers. These 
pointers were assigned the address of a constant string value on an array. This was a
great exercise to test my vector building skills. With the correct placement of pointer
assignment and the use of shuffle_command, one can shuffle a deck of cards at ease.
This assignment is good practise for what is to come in the future with the end project.
I feel that my knowledge of vectors and pointers has a stable foundation after completing
this assignment. I am also becoming very fluent with the use of Unix, uploading , compiling
and editing with VI if necessary.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:Headers,Readme,Makefile,UnixVersions.