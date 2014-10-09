#include <algorithm>
#include <vector>
#include "Player.h"

vector<const Card*> Player::Sort(vector<const Card*> cards)
{
	/*
	vector<const Card*> tempHand; //CREATE TEMP HAND 
	
	for (int i = 0; i != cards.size(); ++i)
	{
		for (vector<const Card*>::iterator c_it = cards.begin(); c_it != cards.end(); ++c_it)
		{
			const Card* p = *c_it;
			if (p->GetPip() == 0 || p->GetPip() == 1 || p->GetPip() == 2 || p->GetPip() == 3 || p->GetPip() == 4 || p->GetPip() == 5 || p->GetPip() == 6 ||
				p->GetPip() == 7 || p->GetPip() == 8 || p->GetPip() == 9 || p->GetPip() == 10 || p->GetPip() == 11 || p->GetPip() == 12)
			{
				tempHand.push_back(*c_it);
			}
			delete p;
			goto next;
		}
	next:;
	}

	cards = tempHand;
	tempHand.erase(tempHand.begin(), tempHand.end()); */
	cout << "\nSorted Hand ! \n";
	return cards;
};

void Player::Show(vector<const Card*> cards)
{
	for (vector<const Card*>::iterator c_it = cards.begin(); c_it != cards.end(); ++c_it)
	{
		const Card* p = *c_it;
		cout << " " << p->ToString() << " ";
		//delete p;
	}
}


void DrawPlayer::SortHand()
{
	m_Hand = Sort(m_Hand);
};
void StudPlayer::SortHand()
{
	m_Hand = Sort(m_Hand);
};
void OmahaPlayer::SortHand()
{
	m_Hand = Sort(m_Hand);
};
void TexasPlayer::SortHand()
{
	m_Hand = Sort(m_Hand);
};


void DrawPlayer::ShowCards()
{
	Player::Show(m_Hand);
};
void StudPlayer::ShowCards()
{
	Player::Show(m_Hand);
};
void OmahaPlayer::ShowCards()
{
	Player::Show(m_Hand);
};
void TexasPlayer::ShowCards()
{
	Player::Show(m_Hand);
};


void TexasPlayer::AddToHand(const Card* c)
{
	m_Hand.push_back(c);
	//cout << " added card to hand\n";
};
void OmahaPlayer::AddToHand(const Card* c)
{
	m_Hand.push_back(c);
	//cout << " added card to hand\n";
};
void StudPlayer::AddToHand(const Card* c)
{
	m_Hand.push_back(c);
	//cout << " added card to hand\n";
};
void DrawPlayer::AddToHand(const Card* c)
{
	m_Hand.push_back(c);
	//cout << " added card to hand\n";
};