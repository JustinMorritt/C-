//***************************ARRAYS


#include <iostream>
#include<string>


int main()
{
	std::string str = "Hello World!";
	char buffer[256];
	
	
/*	buffer[0] = 'H';
	buffer[1] = 'e';
	buffer[2] = 'l';
	buffer[3] = 'l';
	buffer[4] = 'o';
	buffer[5] = ' ';
	buffer[6] = 'W';
	buffer[7] = 'o';
	buffer[8] = 'r';
	buffer[9] = 'l';
	buffer[10] = 'd';
	buffer[11] = '!';
	buffer[12] = '\0';  //This is actually a zero byte
*/
	for(int i = 0; i < str.size(); ++i)
	{
		std::cout << str[i] << std::endl;
	};
	/*
	buffer[300] = '!';
	buffer[301] = '!';
	buffer[302] = '!';
	std::cout << buffer[300] << std::endl;
	buffer[-1] = '?';
	std::cout << buffer[-1] << std::endl;
	*/

return 0;
}