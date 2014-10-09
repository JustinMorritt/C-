#include<iostream>
#include "critter.h"


int main()
{
	// here we supply arguments that are used in the constructor.
	std::cout 	<< "The number of critters created is: "
				<< Critter::GetCritterCount() << std::endl;
	
	Critter crit1(4);
	std::cout 	<< "The number of critters created is: "
				<< Critter::GetCritterCount() << std::endl;
	crit1.Greet();
	
	Critter crit2;
	std::cout 	<< "The number of critters created is: "
				<< Critter::GetCritterCount() << std::endl;
	crit2.Greet();
	
	crit2.SetHunger(300);
	crit2.Greet();
	
	
	
	//crit1.m_Hunger = 9;
	//std::cout << "\n\ncrit1's hunger level is: " << crit1.m_Hunger << std::endl;
	
	//crit2.m_Hunger = 3;
	//std::cout << "\n\ncrit2's hunger level is: " << crit2.m_Hunger << std::endl;
	
return 0;
}