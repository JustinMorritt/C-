//Referencing 
//Demonstrates using references
#include<iostream>

int main()
{
	int myScore = 1000;
	int& mikesScore = myScore; //create reference
	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikesScore is: " << mikesScore << "\n\n";
	
	std::cout << "Adding 500 to myScore\n";
	myScore += 500;
	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikes Score is : " << mikesScore << "\n\n";
	
	std::cout << "Adding 500 to mikes score ! \n";
	mikesScore += 500;
	std::cout << "myScore is: " << myScore << "\n";
	std::cout << "mikes Score is : " << mikesScore << "\n\n";
	
	

return 0;
}