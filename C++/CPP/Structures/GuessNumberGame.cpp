// GUESS MY NUMBER GAME !
/*
//********************************PSUEDOCODE********************************
Setup Game 
	Pick a Random Number between 1 and 100
While Players guess != random number
begin
	get a new guess from player
	if player guess < random number 
	begin
		tell player too low
	end
	if player guess > then random number 
	begin 
		tell player too high
	end
	if players guess == random number
	begin
		congratulate player and tell him how many guesses it took.
	end
end
*/
#include<iostream>
//#include<cstdlib>
//#include<ctime>
#include "randgen.h"

int main()
{
	RandGen rNg;
	int secretNumber = rNg(100) +1; //random number between 1 and 100
	int tries = 0;
	int guess;
	
	std::cout << "\tWelcome to My Guessing Number Game ! \n\n";
	do
	{
	std::cout << "Enter a guess ! : ";
	std::cin >> guess;
	++tries;
	if(guess > secretNumber)
		{
		std::cout << "\nToo High! \n\n";
		}
	else if(guess < secretNumber)
		{
		std::cout << "\nToo Low of a Guess! \n\n";
		}
	else
		{
		std::cout << "\nThats It! YOu got it in "  << tries << " guesses! \n\n";
		}	
	}while(guess != secretNumber);
	std::cout << "\n\n\tTHANKS FOR PLAYING !\n\n\n" << std::endl;

return 0;
}