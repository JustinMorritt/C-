#include<iostream>


class Weapon
{
public:
	//create a pure virtual function 
	virtual void Use() = 0;
	virtual ~Weapon()
	{
		std::cout << "~Weapon() called. " << std::endl;
	}

};

class ChargedWeapon : public Weapon
{
public:
	virtual void Use();
	~ChargedWeapon()
	{
		std::cout << "~ChargedWeapon() called. " << std::endl;
	}
	
	
private:
	virtual void recharge();


};

class MeleeWeapon : public Weapon
{
	public:
		~MeleeWeapon()
	{
		std::cout << "~MeleeWeapon() called. " << std::endl;
	}
};

class ProjectileWeapon : public Weapon
{
	public:
		~ProjectileWeapon()
	{
		std::cout << "~ProjectileWeapon() called. " << std::endl;
	}
};

class ExplosiveWeapon : public Weapon
{
		public:
		~ExplosiveWeapon()
	{
		std::cout << "~ExplosiveWeapon() called. " << std::endl;
	}
};

class BallisticWeapon : public Weapon
{
	public:
		~BallisticWeapon()
	{
		std::cout << "~BallisticWeapon() called. " << std::endl;
	}
};


class PointyWeapon : public MeleeWeapon
{
	public:
		~PointyWeapon()
	{
		std::cout << "~PointyWeapon() called. " << std::endl;
	}
};

class SlashingWeapon : public MeleeWeapon
{
	public:
		~SlashingWeapon()
	{
		std::cout << "~SlashingWeapon() called. " << std::endl;
	}
};




class BFG9000 : public ChargedWeapon
{
	public:
		virtual void Use();

	~BFG9000()
	{
		std::cout << "~BFG9000() called. " << std::endl;
	}
	
};

class Taser : public ChargedWeapon
{
	public:
		virtual void Use();
		~Taser()
	{
		std::cout << "~Taser() called. " << std::endl;
	}

};





class PointyStick : public PointyWeapon
{
	public:
		virtual void Use();
				~PointyStick()
	{
		std::cout << "~PointyStick() called. " << std::endl;
	}


};

class Knife : public PointyWeapon
{
	public:
		 virtual void Use();
	~Knife()
	{
		std::cout << "~Knife() called. " << std::endl;
	}

};


class Katana : public SlashingWeapon
{
	public:
		virtual void Use();
			~Katana()
	{
		std::cout << "~Katana() called. " << std::endl;
	}

};


class GatlinGun : public ProjectileWeapon
{
	public:
	virtual void Use();
					~GatlinGun()
	{
		std::cout << "~GatlinGun() called. " << std::endl;
	}

};

class Magnum357 : public ProjectileWeapon
{
	public:
		virtual void Use();
	~Magnum357()
	{
		std::cout << "~Magnum357() called. " << std::endl;
	}


};


class AK47 : public ProjectileWeapon
{
	public:
		virtual void Use();
		~AK47()
	{
		std::cout << "~AK47() called. " << std::endl;
	}


};

class BowAndArrow : public ProjectileWeapon
{
	public:
		 virtual void Use();
		 		~BowAndArrow()
	{
		std::cout << "~BowAndArrow() called. " << std::endl;
	}

};

class Grenade : public ExplosiveWeapon
{
	public:
		virtual void Use();
	~Grenade()
	{
		std::cout << "~Grenade() called. " << std::endl;
	}

};

class ICBM : public BallisticWeapon
{
	public:
		virtual void Use();
	~ICBM()
	{
		std::cout << "~ICBM() called. " << std::endl;
	}

};
