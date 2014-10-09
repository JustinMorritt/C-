#include<iostream>

#include <string>
#include "critter.h"
#include "prototypes.h"

std::string MENU = 	"\nCritter Caretaker"
					"\n-----------------"
					"\n\n0 - Quit\n1 - Listen to your Critter"
					"\n2 - Feed your critter"
					"\n3 - Play with your critter"
					"\n4 - Ask your critter to perform a trick."
					"\n";

int main()
{
	Critter crit;
	unsigned choice;
	
	do
	{
		choice = askForInt(MENU, 4,0);
		//std::cout << "Current Mood: " << crit.GetMood() << std::endl;
		switch(choice)
		{
			case 0:
				std::cout << "Good Bye!\n";
				break;
			case 1:
				crit.Talk();
				break;
			case 2:
				crit.Eat();
				break;
			case 3:
				crit.Play();
				break;
			case 4:
				crit.PerformTrick();
				break;
		}
	}while(choice != 0);
	
return 0;
}