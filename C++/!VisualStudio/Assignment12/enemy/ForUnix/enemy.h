#ifndef ENEMY_H__
#define ENEMY_H__

//FILES THAT COMPILE ON LINUX TOO

class Enemy
{
public:
	Enemy(int damage = 10);
	void Attack() const;
	void Taunt() const;

protected:
	int m_Damage;


};


#endif