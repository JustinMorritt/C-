//Different Loops Displaying a user input Max number of Squares and Cubes. 
//Featuring the For, Do, and While Loop in all their glory.

//I have chosen the for loop for a couple reasons. One, the for loop takes less code to write
//and it includes all of its variables within the first line of it. Two, you 
//do not have to declare any variables outside of the loop.  This loop is also
//bound because we know it only has to iterate 10 times.
//One could use any form of loop to complete this task. Its more a question of
//what sounds logically right to use at the time.
#include<iostream>

//******************************FOR LOOP, For Number,Square,Cube*****************************
int main()
{
	std::cout 	<< "\n\n\n*******FOR LOOP*******\n" << std::endl;
	std::cout 	<< "Number	Square	Cube" << std::endl;
	std::cout	<<	"======	======	====" << std::endl;
	for(int i = 0; i <= 10; ++i)
	{
		std::cout << i << "\t" << (i * i) << "\t" << (i * i * i) << std::endl;
	}

//******************************DO LOOP, For Number,Square,Cube*****************************
	int count = 0;
	std::cout 	<< "\n\n\n*******DO LOOP*******\n" << std::endl;
	std::cout 	<< "Number	Square	Cube" << std::endl;
	std::cout	<<	"======	======	====" << std::endl;
	do
	{
		count++;
		std::cout << count << "\t" << (count * count) << "\t" << (count * count * count) << std::endl;
	}while(count < 10);

//******************************WHILE LOOP, For Number,Square,Cube*****************************
	int count2 = 0;
	std::cout 	<< "\n\n\n*******WHILE LOOP*******\n" << std::endl;
	std::cout 	<< "Number	Square	Cube" << std::endl;
	std::cout	<<	"======	======	====" << std::endl;
	while(count2 < 10)
	{
		count2++;
		std::cout << count2 << "\t" << (count2 * count2) << "\t" << (count2 * count2 * count2) << std::endl;
	}
return 0;
}