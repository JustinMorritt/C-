//CRAPS By Justin Morritt

#include <iostream>
#include <string>
#include "randgen.h"

int main()
{
	std::string username;
	
	int bet = 0; 
	int roll = 0;
	int point = 0;
	bool win = false;
	bool end = false;
	
	std::cout << "\n\n\n**********CRAPS******By:JM***\n\n\n\n\n";
	std::cout << "Please enter your name : ";
	std::cin >> username;
	RandGen rNg;
	
	while(roll == 0)
	{
		
		std::cout << "\nThanks, " << username << " You may now place your bet.\n\n"
		<< "\n**************************\n"
		<< username << "'s Bet : $";
		std::cin >> bet;

		
		int die1 = rNg(6) + 1;
		int die2 = rNg(6) + 1;
		int dieTotal = die1 + die2;
		std::cout << "\n\n\nYou rolled a : " << dieTotal << std::endl;
		
		if(dieTotal == 7 || dieTotal == 11)
		{
			++roll;
			win = true;
			break;
		}
		if(dieTotal == 2 || dieTotal == 3 || dieTotal == 12)
		{
			++roll;
			win = false;
			end = true;
			break;
		}
		else
		{
		++roll;
		point = dieTotal;
		break;
		}
	
	}
	while(roll >= 1 && win != true && end != true)
	{
	
	std::cout 	<< "\n\nYour point is : " << point 
				<< "\nRerolling..\n";
		int die1 = rNg(6) + 1;
		int die2 = rNg(6) + 1;
		int dieTotal = die1 + die2;
	std::cout << "\n\nYou rolled a : " << dieTotal << std::endl;
		if(dieTotal == point)
		{
			++roll;
			win = true;
			break;
		}
			if(dieTotal == 7)
			{
				++roll;
				win = false;
				break;
			}
				else
				{
					++roll;
				}
	}
	
	if(win)
	{
	std::cout << "\n\nCongratulations " << username << " in " << roll << " roll's you won $" << bet * 2 << "\n\n";
	}
	if(!win)
	{
	std::cout << "\n\nSorry " << username << " in " << roll << " roll's the House won $" << bet << "\n\n";
	}


return 0;
}


