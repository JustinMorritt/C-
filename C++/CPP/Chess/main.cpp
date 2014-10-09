#include <iostream>
#include <map>
#include "board.h"
#include "prototypes.h"



int main()
{
	Board b;

	int choice;
	do
	{
		b.Draw(std::cout);
		choice = askForInt("1: Move Piece\n0: Quit:", 1, 0);
		if(choice == 1)
		{
			std::pair<unsigned, unsigned> move = GetMove(b);
			b.Move(move);

		}

	}while(choice != 0);
	std::cin.get();
	return 0;
}


