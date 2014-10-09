//ALGORITHMS By Justin Morritt

#include <iostream>
#include <vector>
#include <algorithm>
#include "randgen.h"

int main()
{
	RandGen rNg;
	std::vector<unsigned> numbers;
	for(unsigned i = 1; i < 101; ++i)
	{
	numbers.push_back(i);
	//numbers.push_back(rNg(100)); //push numbers from 0-100
	}
	for(std::vector<unsigned>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
	std::cout << *it << " ";
	}
	std::cout<< std::endl;
	
	//**************************SORTING
	std::cout << "\n\nSorting the Vector: \n\n" << std::endl;
	std::sort(numbers.begin(), numbers.end());
	for(std::vector<unsigned>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
	std::cout << *it << " ";
	}
	
	std::cout << std::endl;
	//*************************SHUFFLE
	std::cout << "\n\nShuffle The Numbers:\n" << std::endl;
	
	//std::random_shuffle(numbers.begin(), numbers.end());
	std::random_shuffle(numbers.begin(), numbers.end(), rNg); //<<Using a Custom RnG
	std::cout << std::endl;
	for(std::vector<unsigned>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
	std::cout << *it << " ";
	}
return 0;
}