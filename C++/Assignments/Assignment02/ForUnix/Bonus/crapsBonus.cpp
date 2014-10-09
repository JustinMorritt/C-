//BONUS CRAPS **********CALCULATING WIN/LOSS % AND ROLLS********By:JM
#include <iostream>
#include <string>
#include "randgen.h"

int main()
{
	std::string username;
	const int turns = 100000;
	int rolls = 0;
	int roll = 0;
	int point = 0;
	bool win = false;
	bool end = false;
	int wins = 0;
	int losses = 0;
	RandGen rNg;
	std::cout << "\n\n\n*************************************\n";
	for(int i = 0; i < turns; ++i)
	{
			while(roll == 0)
			{
				int die1 = rNg(6) + 1;
				int die2 = rNg(6) + 1;
				int dieTotal = die1 + die2;
				++rolls;
				++roll;
				if(dieTotal == 7 || dieTotal == 11)
				{
					win = true;
					break;
				}
				if(dieTotal == 2 || dieTotal == 3 || dieTotal == 12)
				{
					end = true;
					break;
				}
				else
				{
				point = dieTotal;
				break;
				}
			}
			while(roll >= 1 && win != true && end != true)
			{
				int die1 = rNg(6) + 1;
				int die2 = rNg(6) + 1;
				int dieTotal = die1 + die2;
				++rolls;
				++roll;
				if(dieTotal == point)
				{
					win = true;
					break;
				}
					if(dieTotal == 7)
					{
						break;
					}
			}
		if(win)
		{
			roll = 0;
			wins++;
		}
		if(!win)
		{
			roll = 0;
			losses++;
		}
		end = false;
		win = false;
	}
	float winsF = static_cast<float>(wins);
	float rollsF = static_cast<float>(rolls);
	float lossesF = static_cast<float>(losses);
	float avgWins = (winsF/turns)*100;
	float avgLosses = (lossesF/turns)*100;
	float avgRolls = rollsF/turns;
	std::cout 	<< "Turns: " << turns
				<< "\n\nWins: " << wins
				<< "\nWin Percentage: %" << avgWins
				<< "\n\nLosses: " << losses
				<< "\nLoss Percentage: %" << avgLosses
				<< "\n\nRolls: " << rolls
				<< "\nAverage Rolls per Turn: " << avgRolls
				<< "\n*************************************\n\n\n";
return 0;
}


