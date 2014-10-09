//DIE ROLLER , RANDOM NUMBER GENERATING 
#include<iostream>
//#include<cstdlib>
//#include<ctime>
#include "randgen.h"

int main()
{
	RandGen rg; //Seeded automatically
	int die = rg(6) + 1;
std::cout << "You rolled a : " << die << std::endl;






//***********************RANDOM NUMBERS FROM BOOK *****************************
/*
	srand(static_cast<unsigned int >(time(0)));   //seed random number generator
	int randomNumber = rand(); // generate random number
	int die = (randomNumber % 6) + 1;  //get anumber between 1 and 6
	std::cout << "You rolled a  " << die << std::endl;
*/	
	

return 0;
}