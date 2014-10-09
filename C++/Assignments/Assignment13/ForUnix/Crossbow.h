#ifndef CROSSBOW_H__
#define CROSSBOW_H__

#include "Weapon.h"


class Crossbow :	public Weapon
{
public:

	Crossbow(bool loaded = true, int damage = 20);
	~Crossbow();
	void Use();
	void Load();

private:
	bool m_loaded;
	int m_damage;
};

#endif