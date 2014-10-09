//GUESS MY NUMBER MR CPU By Justin Morritt

#include <iostream>
#include "randgen.h"

int main()
{
	int MYSTERY_NUM = 0;
	int CPU_GUESS = 0;
	int CPU_TRIES = 0;
	int USER_INPUT = 0;
	int HIGH_NUM = 100;
	int LOW_NUM = 0;
	bool higher = false;
	bool lower = false;
	bool solved = false;
	bool cheater = false;
	RandGen rNg;
	
	while(MYSTERY_NUM == 0)
	{
		std::cout 	<< "\n\n\nWelcome! Please enter the Mystery Number. (from 1-100) "
					<< "\nNumber: ";
		std::cin >> MYSTERY_NUM;
		if(MYSTERY_NUM > 100 || MYSTERY_NUM < 1)
		{
			std::cout << "\n\nPlease enter a valid number from 1-100...";
			MYSTERY_NUM = 0;
		}
	}
	
	std::cout << "\n\nMystery number = " << MYSTERY_NUM << "\n\n";
	CPU_GUESS = rNg(100) +1;
	
	while(!solved && !cheater)
	{
		USER_INPUT = 0;
		++CPU_TRIES;
		lower = false;
		higher = false;
		
		if(CPU_GUESS > MYSTERY_NUM)
		{
			lower = true;
		}
		if(CPU_GUESS < MYSTERY_NUM)
		{
			higher = true;
		}

		std::cout 	<< "\nCPU Guess = " << CPU_GUESS << "\n\n"
					<< "Please Enter One of The Following: \n"
					<< "( 1 ) = Lower \n"
					<< "( 2 ) = Higher \n"
					<< "( 3 ) = Solved \n";
		std::cin >> USER_INPUT;
		
		if(USER_INPUT == 1 && !lower)
		{
			cheater = true;
			break;
		}
		if(USER_INPUT == 2 && !higher)
		{
			cheater = true;
			break;
		}
		if(USER_INPUT == 3 && CPU_GUESS == MYSTERY_NUM)
		{
			solved = true;
			break;
		}
		if(USER_INPUT != 3 && CPU_GUESS == MYSTERY_NUM)
		{
			cheater = true;
			break;
		}

		if(lower)
		{
			HIGH_NUM = CPU_GUESS - 1;
			CPU_GUESS = (HIGH_NUM + LOW_NUM) / 2;
		}
		if(higher)
		{
			LOW_NUM = CPU_GUESS + 1;
			CPU_GUESS = (HIGH_NUM + LOW_NUM) / 2;
		}
	}
	
	if(solved)
	{
		std::cout << "\n\nCongratulations Mr CPU ! It took you " << CPU_TRIES << " tries.\n\n\n";
	}
	if(cheater)
	{
		std::cout << "\n\n\nYour trying something funny quit cheating!!\n\n\n";
	}
	
return 0;	
}