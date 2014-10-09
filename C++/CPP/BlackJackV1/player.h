#if !defined(PLAYER_H__)
#define PLAYER_H__

#include <iostream>
#include "genericPlayer.h"

using namespace std;

class Player : public GenericPlayer
{
public:
	Player(const string& name);

	virtual ~Player();

	//returns whether or not the player wants another hit
	 bool IsHitting() const
	{
		
			cout << m_Name << ", do you want a hit? (Y/N) :\n";
			char response;
			cin >> response;
			return(response == 'y' || response == 'Y');  //Returns true is it equals y or Y otherwise false.
		
	};

	//announces that the player wins
	void Win() const;

	//announces that the player loses
	void Lose() const;

	//announce that the player pushes
	void Push() const;

};







#endif