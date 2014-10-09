#include<iostream>
#include<string>
#include "critter.h"
//Critter Functions

int Critter::s_Counter = 0;

int Critter::GetCritterCount()
{
	return s_Counter;
}


Critter::Critter(int hunger) : m_Hunger(hunger) //This is initialization
{
	//m_Hunger = hunger; //prefer assigning it in header
	std::cout << "A new critter is born." << std::endl;
	s_Counter++;
}

void Critter::Greet()
{
	std::cout << "Hi! I'm a critter and my hunger level is: " << m_Hunger
				<< ".\n";
}