#if !defined(HAND_H__)
#define HAND_H__

#include <iostream>
#include <vector>
#include "card.h"

using namespace std;

class Hand 
{
public:
	Hand();

	virtual ~Hand(); // VIRTUAL DESTRUCTOR 

	//Adds a card to the hand
	void Add(Card* pCard);

	//clears hand of all cards
	void Clear();

	//gets hand total value, intelligently treats aces as 1 or 11.
	int GetTotal() const;

protected:
	vector<Card*> m_Cards;

};

#endif