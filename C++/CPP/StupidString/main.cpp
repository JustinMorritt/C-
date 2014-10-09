#include<iostream>
#include "sString.h"

int main()
{
	StupidString str("This is a stupid string.");
	std::cout << str.data() << std::endl;
	{
	StupidString str2(str);   //THe COPY CONSTRUCTOR
	std::cout << str2.data() << std::endl;
	}
	{
	
		StupidString s;
		s = str;
		std::cout << s.data() << std::endl;
	}
	



return 0;
}