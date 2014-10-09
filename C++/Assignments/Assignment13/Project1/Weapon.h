#ifndef WEAPON_H__
#define WEAPON_H__


class Weapon
{
public:
	Weapon();
	~Weapon();
	virtual void Use();
	virtual void Withdraw();
	virtual void Load();
};

#endif