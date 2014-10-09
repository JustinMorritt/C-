#include <iostream>
#include "genericPlayer.h"
#include "player.h"

using namespace std;

Player::Player(const string& name) : GenericPlayer(name)
{}

Player::~Player()
{}



void Player::Win() const
{
	cout << m_Name << " Wins!!!  :D\n";
}

void Player::Lose() const
{
	cout << m_Name << " Loses.  :(\n";
}

void Player::Push() const
{
	cout << m_Name << " Pushes.  :P\n";
}

