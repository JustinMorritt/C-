#ifndef BOSS_H__
#define BOSS_H__

#include "enemy.h"
//^COMPILES ON LINUX TOO



class Boss :public Enemy
{
public:
	Boss(int damage = 30, int mult = 3);
	~Boss(void);
	void SpecialAttack() const;
	void Taunt() const;
	void Attack() const;

	
protected:
	int m_Damage;
	int m_DamageMultiplier;
};


#endif