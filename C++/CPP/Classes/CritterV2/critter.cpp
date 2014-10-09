#include<iostream>
#include<string>
#include "critter.h"
#include "randgen.h"
//Critter Functions

const std::string Critter::TRICKS[] = 
{
	"roll over","jump","speak","do a backflip"

};

//INITIALIZE THE SIZE OF TRICKS FOR THE RANDGEN , RANDOM TRICK
const unsigned Critter::NUM_TRICKS =
sizeof(Critter::TRICKS) / sizeof(Critter::TRICKS[0]);


Critter::Critter(int hunger, int boredom)
 : m_Hunger(hunger), m_Boredom(boredom) //This is initialization
{

}

std::string Critter::GetMood() const
{
	//std::string mood;
	if(m_Hunger + m_Boredom > MAD)
	{
	return "mad";
	}
	if(m_Hunger + m_Boredom > FRUSTRATED)
	{
	return "frustrated";
	}
	if(m_Hunger + m_Boredom > OKAY)
	{
	return "okay";
	}
	return "happy";

}

void Critter::PassTime(int time)
{
	m_Hunger += time;
	m_Boredom += time;
}

void Critter::Talk()
{
	std::cout << "I'm a Critter and I feel " << GetMood() << ".\n";
	PassTime();
}

void Critter::Eat(int food)
{
	std::cout << "Burp!!" << std::endl;
	m_Hunger -= food;
	if(m_Hunger < 0)
	{
		m_Hunger = 0;
	}
	PassTime();
}

void Critter::Play(int fun)
{
	std::cout << "Wheeeee!" << std::endl;
	//CONDENSED IF STATEMENT
	m_Boredom = ((m_Boredom - fun) < 0) ? 0 : m_Boredom - fun;
					// TERNARY == IF N_BOREDOM - FUN is < 0 then assign it to 0 : else m_BORDOM - fun 
}

void Critter::PerformTrick()
{
	if(GetMood() != "happy")
	{
		std::cout << "I dont feel like doing a trick" << std::endl;
		return;
	}
	RandGen rg;
	unsigned choice = rg(NUM_TRICKS);
	std::cout << "\n\nI " << TRICKS[choice] << " .\n";
	PassTime();
}