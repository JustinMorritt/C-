#include "boss.h"
#include<iostream>

Boss::Boss(int damage, int mult) : m_Damage(damage), m_DamageMultiplier(mult)
{
	//std::cout << "Boss::Boss() Called\n";
}

void Boss::Attack() const
{
	std::cout << "Boss Attack Inflicts : " << m_Damage << " Damage." << std::endl;
}

Boss::~Boss()
{
}

void Boss::SpecialAttack() const
{
	std::cout << "Special Boss Attack inflicts " << (m_DamageMultiplier * m_Damage);
	std::cout << " Damage !\n";
}


void Boss::Taunt() const
{
	Enemy::Taunt();
	std::cout << "And your father smelled of elderBerries";
}