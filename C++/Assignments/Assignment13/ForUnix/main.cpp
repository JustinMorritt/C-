#include <iostream>
#include "Weapon.h"
#include "Crossbow.h"
#include "Sword.h"

using namespace std;

int main()
{
	Crossbow cb;
	Sword sw;
	Weapon* p = &sw;

	std::cout << "\n\n\n***************************\n";
	std::cout << "Using the trusty Sword !";
	std::cout << "\n***************************\n\n\n";
	p->Use();
	p->Use();
	p->Withdraw();
	p->Withdraw();
	p->Use();
	p->Use();

	std::cout << "\n\n\n***************************\n";
	std::cout << "Swapping over to Crossbow !";
	std::cout << "\n***************************\n\n\n";
	p = &cb;
	p->Use();
	p->Use();
	p->Load();
	p->Load();
	p->Use();
	p->Use();

	
	std::cin.get();
	return 0;
};