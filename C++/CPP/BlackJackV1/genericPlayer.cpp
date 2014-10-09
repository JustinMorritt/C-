#include <iostream>
#include "hand.h"
#include "genericPlayer.h"

using namespace std;


GenericPlayer::~GenericPlayer()
{
}


bool GenericPlayer::IsBusted() const
{
	return(GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	cout << m_Name << " busts.\n";
}