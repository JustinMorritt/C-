#if !defined(PLAYER_H__)
#define PLAYER_H__
#include <iostream>
#include <vector>
#include "Table.h"
#include "card.h"

using namespace std;

class Player
{
public:
	Player(){};
	vector<const Card*> Sort(vector<const Card*> cards);
	virtual void AddToHand(const Card*) = 0;
	virtual void SortHand() = 0;
	virtual void ShowCards() = 0;
	virtual void Show(vector<const Card*> cards);
	virtual ~Player(){};
};


class DrawPlayer : public Player
{
public:
	DrawPlayer(){};
	virtual void AddToHand(const Card*);
	virtual void SortHand();
	virtual void ShowCards();
	virtual ~DrawPlayer(){};
private:
	vector<const Card*> m_Hand;

};


class StudPlayer : public Player
{
public:
	StudPlayer(){};
	virtual void AddToHand(const Card*);
	virtual void SortHand();
	virtual void ShowCards();
	virtual ~StudPlayer(){};
private:
	vector<const Card*> m_Hand;

};

class OmahaPlayer : public Player
{
public:
	OmahaPlayer(){};
	virtual void ShowCards();
	virtual void SortHand();
	virtual void AddToHand(const Card*);
	virtual ~OmahaPlayer(){};
private:
	vector<const Card*> m_Hand;

};

class TexasPlayer : public Player
{
public:
	TexasPlayer(){};
	virtual void ShowCards();
	virtual void SortHand();
	virtual void AddToHand(const Card*);
	virtual ~TexasPlayer(){};
private:
	vector<const Card*> m_Hand;

};




#endif