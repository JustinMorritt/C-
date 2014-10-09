#include <iostream> 
#include "enemy.h"
#include "boss.h"


int main()
{
	Enemy e;
	e.Attack();

	Boss b;

	b.Attack();

	std::cout << std::endl;
	b.SpecialAttack();

	b.Taunt();

	std::cout << std::endl;
	

	std::cin.get();
	return 0;
}