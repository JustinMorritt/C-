
#include <iostream>
#include "enemy.h"

using namespace std;

Enemy::Enemy(int damage) : m_Damage(damage)
{
	//cout << "Enemy::Enemy()\n";
}

void Enemy::Attack() const
{
	cout << "Enemy Attack Inflicts : " << m_Damage << " Damage." << endl;
}

void Enemy::Taunt() const
{
	std::cout << "Your mother was a hamster\n";
}