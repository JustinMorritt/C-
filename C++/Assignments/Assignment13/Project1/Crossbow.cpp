#include <iostream>
#include "Crossbow.h"


Crossbow::Crossbow(bool loaded, int damage) : m_loaded(true) , m_damage(damage)
{

}


Crossbow::~Crossbow()
{
}


void Crossbow::Use()
{
	if (m_loaded)
	{
		std::cout << "Crossbow shot!    ...Dealt " << m_damage << " damage." << std::endl;
		m_loaded = false;
	}
	else
		std::cout << "Crossbow needs loaded .." << std::endl;
}

void Crossbow::Load()
{
	if (m_loaded)
	{
		std::cout << "\nCrossbow already Loaded!\n";
	}
	else
	{
		std::cout << "\nCrossbow is Being Loaded!\n";
		m_loaded = true;
	}

}