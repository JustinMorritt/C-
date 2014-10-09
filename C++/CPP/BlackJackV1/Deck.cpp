#include <iostream>
#include <algorithm>
#include <vector>
#include "Deck.h"
#include "genericPlayer.h"
#include "hand.h"
#include "randgen.h"

Deck::Deck()
{
	m_Cards.reserve(52);
	Populate();
}

Deck::~Deck()
{
}

void Deck::Populate()
{
	Clear();
	//create standard deck
	for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
	{
		for (int r = Card::ACE; r <= Card::KING; ++r)
		{
			Add(new Card(static_cast<Card::rank>(r),
				static_cast<Card::suit>(s)));
		}
	}
}

void Deck::Shuffle()
{
	RandGen rg;
	random_shuffle(m_Cards.begin(), m_Cards.end(), rg);
}

void Deck::Deal(Hand& aHand)
{
	if (!m_Cards.empty())
	{
		aHand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
	else
	{
		cout << "Out of Cards. Unable to Deal.";
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
	cout << endl;
	//continue to deal a card as long as generic player isnt busted and wants a hit
	while (!(aGenericPlayer.IsBusted()) ) //  && aGenericPlayer.IsHitting()
	{
		Deal(aGenericPlayer);
		cout << aGenericPlayer << endl;

		if (aGenericPlayer.IsBusted())
		{
			aGenericPlayer.Bust();
		}
	}
}