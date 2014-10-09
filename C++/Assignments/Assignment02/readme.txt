- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	I will be including the standard iostream library, the standard string library
and the randgen header file. To Build this game of Craps I will first need to 
declare some variables. The bet, the roll, and the point. The game will start
by asking your username and storing it in a username string. This game will be
relying on two while loops. While the roll variable is equal to 0 rolls it will 
start the first roll. This roll if followed by 2 if statements checking whether
the user is assigned a point or wins or loses. If a player wins it breaks from
the first while loop and skips the second loop entirely. If a player gets a point
roll, then it jumps to the second loop and keeps rolling while also simutaneously
checking for a win/loss. Both loops will be adding plus 1 to the rolls variable
every roll. Once a player wins or loses a statement will display the amount of 
money won for the user or house. This end statement also shows the amount of rolls
it took to win/lose. 
	
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f Makefile.nix. To run the program type the file name crapsBonus
to run it. 


2)pseudo-code********************************************************************
Setup 
	Welcome person to the Craps Game
	Ask the persons name 
		>> Get the persons name
	Ask the persons bet amount 
		>> Get the persons bet
begin
	initialize 1st while loop (while roll = 0)
		roll die(+1rolls)
			check if win/loss
				skip second while loop,
				display end message
			check if point roll
				enter second loop
				point = die roll
	initialize 2nd while loop (while roll > 0)		
		roll die(+1rolls)
			check if win/loss
				display end message
			check if non loss and non point roll
				re-loop 2nd while loop
	Display end message
		Show money won/ Money lost
		Show # of rolls taken to win/lose
end

3)Accomplishments*****************************************************************
	I accomplished many great things during this assignment. This tested my skills with 
choosing the right loop and making it fit right. I feel that the while loop was the
most logical choice. This assignment gave me an insight of the true odds to some 
casino games. It let me use a few intricate while statements, as-well as some 
intricate if statements. I finished the Bonus program entirely and have tested
both the bonus and original on Unix. Implemented my first make file with this game
and now I'm hooked on using them.

4)Non-Accomplishments*************************************************************
	Every challenge I was presented with i faced. There was nothing I didn't complete.