#include "Sword.h"
#include <iostream>

Sword::Sword(bool withdrawn, int damage) : m_damage(damage)
{
}

void Sword::Use()
{
	if (m_withdrawn)
	{
		std::cout << "Sword Used!    ...Dealt " << m_damage << " damage." << std::endl;
		m_withdrawn = false;
	}
	else
		std::cout << "Sword need to be Withdrawn..." << std::endl;
}

Sword::~Sword()
{
}

void Sword::Withdraw()
{
	if (m_withdrawn)
	{
		std::cout << "\nSword already Withdrawn!\n";
	}
	else
	std::cout << "\nSword is Being Withdrawn!\n";
	m_withdrawn = true;
}