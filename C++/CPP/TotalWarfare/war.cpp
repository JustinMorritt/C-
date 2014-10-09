#include <iostream>
#include "weapons.h"
#include<vector>

int main()
{
	//Weapon w;
	//w.Use();
	std::vector<Weapon*> arsenal;
	
	//arsenal.push_back(new Weapon);  //by declaring a pure virtual function 
	arsenal.push_back(new BFG9000);
	arsenal.push_back(new AK47);
	arsenal.push_back(new ICBM);
	arsenal.push_back(new Grenade);
	arsenal.push_back(new Knife);
	arsenal.push_back(new Taser);
	arsenal.push_back(new PointyStick);
	arsenal.push_back(new Katana);
	arsenal.push_back(new GatlinGun);
	arsenal.push_back(new Magnum357);
	arsenal.push_back(new BowAndArrow);
	
	for(std::vector<Weapon*>::iterator it = arsenal.begin();
		it != arsenal.end(); ++it)
		{
			(*it) -> Use();  //Bracket first to dereference then Use
		}
	//CLEANUP
	for(std::vector<Weapon*>::iterator it = arsenal.begin();
		it != arsenal.end(); ++it)
		{
			delete *it;  //Bracket first to dereference then Use
		}
	
	/*
	BFG9000 bfg;
	bfg.Use();
	
	AK47 ak;
	ak.Use();
	
	Weapon* icbm = new ICBM;  //Reference of Weapon
	icbm -> Use();
	
	delete icbm;
	icbm = NULL;
	
	Grenade g;
	g.Use();
	
	Knife kn;
	kn.Use();
	
	Taser t;
	t.Use();
	
	PointyStick p;
	p.Use();
	
	Katana k;
	k.Use();
	
	GatlinGun GG;
	GG.Use();
	
	Magnum357 m357;
	m357.Use();
	
	BowAndArrow BA;
	BA.Use();
	*/
	


    return 0;
}
