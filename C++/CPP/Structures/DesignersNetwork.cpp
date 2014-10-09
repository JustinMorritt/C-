#include<iostream>
#include<string>

int main()
{

std::string username;
std::string password;
bool success;

std::cout << "\tGame Designers Network\n";

do
	{
		std::cout <<"\nUsername: ";
		std::cin >> username;
		
		std::cout << "Password: ";
		std::cin >> password;
		
		if(username == "J.Morritt" && password == "baphomet")
		{
		std::cout << "\nHey Justin. " ;
		success = true;
		}
		else if(username == "M.Morritt" && password == "baphomet")
		{
		std::cout << "\nHey Megan. " ;
		success = true;
		}
		else if(username == "guest" || password == "guest")
		{
		std::cout << "\nHello Guest! " ;
		success = true;
		}
		else
		{
		std::cout << "Login Failed ! " ;
		success = false;
		}
	}while(!success);


return 0;
}