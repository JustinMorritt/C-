#if !defined(GAME_H__)
#define GAME_H__
#include <iostream>
#include <vector>
#include "player.h"
#include "house.h"
#include "Deck.h"



using namespace std;

class Game
{
public:
	Game(const vector<string>& names);
	~Game();
	
	//plays the game of blackjack
	void Play();

private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;
};




#endif