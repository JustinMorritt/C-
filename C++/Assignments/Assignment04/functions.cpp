//functions.cpp
//The stubs for the functions used the factors program
//C++ Assignment 3

#include <sstream>
#include <string>
#include <iostream>
#include <vector>

int askForInt(const std::string& question, int high, int low)
{
	int ret;
	do
	{
		std::cout << question  << std::endl;
		std::string str;
		std::getline(std::cin, str);
		std::stringstream ss(str);
		ss >> ret;
		if((ss) && (ret >= low && ret <= high))
		{
			break;
		}
		else
		{
			std::cout << "Try Again." << std::endl;
			continue;
		}
		
	}while(true);
	return ret;
}

bool isPrime(unsigned value)
{
	unsigned x = value;
	for(unsigned i = 2; i < x; ++i)
	{
		if(x % i == 0)
		{
			return false;
		}
	}
return true;
}

std::vector<unsigned> factors(unsigned value)
{
	std::vector<unsigned> ret;
		unsigned x = value;
	for(unsigned i = 2; i < x; ++i)
	{
		if(x % i == 0)
		{
			ret.push_back(i);
			std::cout <<  " " << i << ", ";
		}
		
	
	}
	
	return ret;
}

std::vector<unsigned> primeFactors(unsigned value)
{
	std::vector<unsigned> ret;
	unsigned x = value;
	unsigned i = 2;
	
	while((x/i) >= 1)
	{
		if(x % i == 0)
		{
			ret.push_back(i);
			std::cout <<  " " << i << ", ";
			x = x/i;
		}
		else if(x % i != 0)
		{
		i++;
		}
	}
	return ret;
}



