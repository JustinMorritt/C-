//Word Jumble ***************************ARRAYS



#include <iostream>
#include <string>
#include "randgen.h"



	const string WORDS[] =
	{
		"wall",
		"glasses",
		"laboured",
		"persistant",
		"jumble",
		"elephant",
		"helicopter",
		"computer"
	};
	
	const unsigned int NUM_WORDS = sizeof(WORDS) / sizeof(WORDS[0]);
	
		
	
int main()
{
std::cout << NUM_WORDS << std::endl;
return 0;
}