#include <iostream>
#include <vector>
#include "player.h"

#include "house.h"
#include "Deck.h"
#include "Game.h"
#include "randgen.h"

using namespace std;


Game::Game(const vector<string>& names)
{
	//create a vector of players from a vector of names
	vector<string>::const_iterator pName;
	for (pName = names.begin(); pName != names.end(); ++pName)
	{
		m_Players.push_back(Player(*pName));
	}
	RandGen rg;
	m_Deck.Populate();
	m_Deck.Shuffle();

}

Game::~Game()
{
}

void Game::Play()
{
	//deal initial 2 cards to everyone
	vector<Player>::iterator pPlayer;
	for (int i = 0; i < 2; ++i)
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			m_Deck.Deal(*pPlayer);
		}
		m_Deck.Deal(m_House);
	}

	//hide house's first card 
	m_House.FlipFirstCard();

	//display everyone's hand
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		cout << *pPlayer << endl;
	}
	cout << m_House << endl;

	//deal additional cards to players
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		m_Deck.AdditionalCards(*pPlayer);
	}

	//reveal houses first card
	m_House.FlipFirstCard();
	cout << endl << m_House;

	//deal additional cards to house
	m_Deck.AdditionalCards(m_House);

	if (m_House.IsBusted())
	{
		//everyone still playing wins.
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			if(!(pPlayer->IsBusted())) //If pointer player is NOT BUSTED <<<
			{
				pPlayer->Win();
			}
		}
	}
	else
	{
		//compare each player still playing to house
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			if (!(pPlayer->IsBusted()))
			{
				if (pPlayer->GetTotal() > m_House.GetTotal())
				{
					pPlayer->Win();
				}
				else if (pPlayer->GetTotal() < m_House.GetTotal())
				{
					pPlayer->Lose();
				}
				else
				{
					pPlayer->Push();
				}
			}
		}
	}

	//remove everyones cards
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		pPlayer->Clear();
	}
	m_House.Clear();
}