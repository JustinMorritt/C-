#ifndef SWORD_H__
#define SWORD_H__

#include "Weapon.h"



class Sword :	public Weapon
{
public:
	
	Sword(bool withdrawn = true, int damage = 10);
	~Sword();
	void Use();
	void Withdraw();

private:
	int m_damage;
	bool m_withdrawn;

};

#endif