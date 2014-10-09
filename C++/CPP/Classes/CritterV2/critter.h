#include<string>
//Critter Class


class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0);
	void Talk();
	void Eat(int food = 5);
	void Play(int fun = 5);
	void PerformTrick();
	

private: 
	enum Mood
	{
		HAPPY,
		OKAY = 5,
		FRUSTRATED = 10,
		MAD = 15,
	};
	
	static const std::string TRICKS[];
	static const unsigned NUM_TRICKS;
	
	std::string GetMood() const;
	void PassTime(int time = 1);
	int m_Hunger;
	int m_Boredom;

};