#include <iostream>
#include "weapons.h"

using std::cout;
using std::endl;

void Weapon::Use()
{

cout << "Weapon:use()" << endl;
}


void BFG9000::Use()
{

cout << "BFG 9000 fires !" << endl;
ChargedWeapon::Use();
}

void Taser::Use()
{

cout << "Taser zaps !" << endl;
ChargedWeapon::Use();
}

void ChargedWeapon::Use()
{

cout << "Charged Weapon used !" << endl;
	recharge();
}

void ChargedWeapon::recharge()
{

cout << "Recharging Weapon !" << endl;
	
}

void PointyStick::Use()
{

cout << "pointy stick stabs !" << endl;
}

void Knife::Use()
{

cout << "Knife stabs !" << endl;
}

void Katana::Use()
{

cout << "Katana Slashes You ! !" << endl;
}

void Magnum357::Use()
{

cout << "Magnum shot You ! !" << endl;
}

void AK47::Use()
{

cout << "Ak47 shot You ! !" << endl;
}

void BowAndArrow::Use()
{

cout << "Arrow stuck in you  ! !" << endl;
}

void ICBM::Use()
{

cout << "InterContinental Ballistic Missle heading towards you ! !" << endl;
}

void Grenade::Use()
{

cout << "Grenade rolls under you feet with no pin ! !" << endl;
}

void GatlinGun::Use()
{

cout << "Gatlin Gun Fires ! !" << endl;
}