//Referencing 
//Demonstrates using references
#include<iostream>
#include<string>
#include<vector>

//parameter vec is a constant reference to a vector of string stream
void display(const std::vector<std::string>& inventory);

double& Ooops();

int main()
{
	std::vector<std::string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");
	
	display(inventory);
	
	double& d = Ooops();
	std::cout << d << std::endl;

return 0;
}
double& Ooops()
{
	double ret = 3.131232;
	return ret;

}

void display(const std::vector<std::string>& vec)
{
	std::cout << "\n\n\n>>>>Your items: \n";
	//ITERATOR MUST BE CONST TOO
	for(std::vector<std::string>::const_iterator iter = vec.begin();
			iter != vec.end(); ++iter)
			{
			std::cout << ">>>> " << *iter << std::endl;
			}

}