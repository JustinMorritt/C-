//C++ Assignment 3 The Factor Machine , By Justin Morritt.

#include <iostream>
#include <vector>
#include "prototypes.h"

int main()
{
	bool IS_PRIME = false;
	unsigned NUMBER;
	std::cout 	<< "\n\n\t\tWelcome to the Factor Machine";
	while(NUMBER != 0)
	{
		NUMBER = askForInt("\n\n\n\nPlease enter a number to be factored. type ( 0 ) to exit.\n");
		IS_PRIME = isPrime(NUMBER);
		if(IS_PRIME)
		{
			std::cout << "\nThe number you have chosen is a Prime number.\n\n";
		}
		if(!IS_PRIME)
		{
			std::cout << "\n\nThe Factors of "<< NUMBER << " are : " ;
			factors(NUMBER);
			std::cout << "\n\nThe Prime factors of "<< NUMBER << " are : " ;
			primeFactors(NUMBER);
		}
	}
	std::cout << "\n\nThanks for playing." << std::endl;
	return 0;
}



