//HEROS INVENTORY 2.0***************************VECTORS


#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> inventory;
	//std::vector<std::string> inventory(10);    starting size of 10
	//std::vector<std::string> inventory(10, "nothing");    starting size of 10 all with value "nothing"
	//std::vector<std::string> inventory(mystuff);    This vector has the contents of another vector

	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	inventory.push_back("dagger");
	inventory.push_back("helmet");
	inventory.push_back("gun");
	inventory.push_back("bullets");

	std::cout << "You have " << inventory.size() << " items.\n";

	std::cout << "Your items:\n";
	
	for(unsigned int i = 0; i < inventory.size(); ++i)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nYou trade your sword in for a battle axe.";
	inventory[0] = "battle axe";
	std::cout << "\nYour Items:\n";
	
	for(unsigned int i = 0; i < inventory.size(); ++i)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nThe item name '" << inventory[0] << "' has ";
	std::cout	<< inventory[0].size() << " letters in it.\n";
	std::cout << "\nYour shield is destroyed in a fierce battle.";
	inventory.pop_back();
	std::cout << "Your Items: \n";
	for(int i = 0; i < inventory.size(); ++i)
	{
		std::cout << inventory[i] << std::endl;
	}
	
	std::cout << "\nYou were robbed of all your posessions !";
	inventory.clear();
	if(inventory.empty())
	{
		std::cout << "\nYou have nothing !";
	}
	else
	{
		std::cout << "\nYou atleast hav eone item.";
	}

return 0;
}