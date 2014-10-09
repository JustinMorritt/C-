#include <iostream>
#include <vector>
using namespace std;

#include "deal.h"
#include "card.h"

const unsigned DISPLAY_ROW = 13;

int main()
{
	std::cout << "\n\n\n   <<<<<<<<<<<<< Displaying Cards >>>>>>>>>>>>>>>";
	std::cout << "\n   **********************************************\n";
	Deal deal;
	unsigned i = 0;
	while(deal.Empty() == false)
	{
	    ++i;
		const Card* p = deal.OneCard();
		
		cout << " " << p -> ToString() << " ";
		if(i == DISPLAY_ROW)
		{
		    i = 0;
		    cout << endl;
		}
	}
	cout << endl;
	std::cin.get();
	return 0;

}
