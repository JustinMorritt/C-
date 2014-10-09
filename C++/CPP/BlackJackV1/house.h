#if !defined(HOUSE_H__)
#define HOUSE_H__

#include <iostream>

#include "genericPlayer.h"
class House :	public GenericPlayer
{
public:
	House(const string& name = "House");
	
	virtual ~House();

	//indicates whether house is hitting - will always hit on 16 or less
	//virtual bool IsHitting() const;

	//flips over first card
	void FlipFirstCard();
	
};

#endif