//Referencing 
//Demonstrates using references
#include<iostream>


void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);


int main()
{
	int myScore = 150;
	int yourScore = 1000;
	std::cout 	<< "Original values\n"
				<< "myScore: " << myScore << "\n"
				<< "yourScore: " << yourScore << "\n"
				<< "calling badSwap()\n";
				
				badSwap(myScore, yourScore);
	std::cout	<< "myScore: " << myScore << "\n"
				<< "yourScore: " << yourScore << "\n"
				<< "calling goodSwap()\n";
				
				goodSwap(&myScore, &yourScore);
	std::cout	<< "myScore: " << myScore << "\n"
				<< "yourScore: " << yourScore << "\n";



return 0;
}


void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}











