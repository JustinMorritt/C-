#include <iostream>
#include <string>
#include "prototypes.h"
#include "templates.h"


int main()
{
	
	
	
	
	int x = 1;
	ShowBits(std::cout,x);

	std::cout << std::endl;
	int y = 2;
	ShowBits(std::cout,y);

	std::cout << std::endl;
	int z = 3;
	ShowBits(std::cout,z);

	std::cout << std::endl;
	int a = 4;
	ShowBits(std::cout,a);

	std::cout << std::endl;
	int b = 5;
	ShowBits(std::cout,b);

	std::cout << std::endl;
	int c = 6;
	ShowBits(std::cout,c);

	
	/*
	double inc = 13.43;
	double total = 134.3;
	double acc = 0;

	for (unsigned i = 0; i < 10; ++i)
	{
		acc += inc;
	}

	if(acc == total)
	{
		std::cout << "Arithmentic works!";
	}
	else
	{
		std::cout << "Something stinks!" << "this:" <<  std::endl;
		ShowBits(std::cout, acc);
		std::cout << "Should equal:" << std::endl;
		ShowBits(std::cout, total);

	}


	
	*/
	std::cin.get();
	return 0;
}


