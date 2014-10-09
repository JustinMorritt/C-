#include<string>
//Critter Constructor


class Critter
{
public:
	Critter(int hunger = 5);
	void Greet();
	static int GetCritterCount();
	
	//By doing this we ask the compiler to inline the code
	void SetHunger(int hunger)
	{
		m_Hunger = hunger;
	}
	int GetHunger()
	{
		return m_Hunger;
	}
	
private: 
	int m_Hunger;
	std::string m_name;
	static int s_Counter;
};