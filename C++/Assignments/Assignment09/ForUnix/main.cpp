#include <iostream>
#include <string>
#include <vector>
#include "list.h"



int main()
{

	std::vector<std::string> quote;
	quote.push_back("Knowing others is intelligence;");
	quote.push_back("knowing yourself is true wisdom.");
	quote.push_back("Mastering others is strength;");
	quote.push_back("mastering yourself is true power.");
	quote.push_back("If you realize that you have enough,");
	quote.push_back("you are truly rich.");
	quote.push_back(" ");
	quote.push_back("-- Lao Tzu, Tao Te Ching \n\n\n");
	
	List lst;

	for(unsigned i = 0; i < quote.size(); ++i)
	{
		lst.PushFront(quote[i]);
	}
	std::cout << "\n\nOutputting First list via Default constructor: \n";
	lst.Display();

	std::cout << "Outputting Second list via Copy Constructor: \n";
	List lst2(lst);
	lst2.Display();
	
	std::cout << "Outputting Third list via Overload Assignment Operator: \n";
	List lst3;
	lst3 = lst2;
	lst3.Display();

	std::cout << "Erasing First List and outputting it: \n";
	lst.Clear();
	lst.Display();
	std::cout << "Outputting Second list to prove deep copy was involved: \n";
	lst2.Display();


	std::cin.get();
    return 0;
}

