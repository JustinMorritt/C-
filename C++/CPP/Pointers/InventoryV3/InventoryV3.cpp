

#include <iostream>
#include <string>
#include <vector>
#include "prototypes.h"
using namespace std;


const string ITEMS[] =
{
"sword",
"shield",
"armour",
"gold",
"potion",
"talisman",
"cloak"
};



const unsigned NUM_ITEMS = sizeof(ITEMS) / sizeof(ITEMS[0]);
const unsigned INVENTOR_MAX = 3;
int choice;
unsigned itemNumber;
const string MENU = 
"\nInventory	\
\n---------		\
\n0 - Quit		\
\n1 - Display inventory	\
\n2 - Add to inventory	\
\n3 - Remove from inventory	\
\n:";

const string ADD_ITEM_MENU = "\nEnter The number of the item to add: ";
const string REMOVE_ITEM_MENU = "\nEnter The number of the item to remove: ";

int main()
{
	cout << "\tWelcome to Inventory!\n";
	vector<const string*> inventory(3, NULL); //declaring inventory to have 3 all NULL

	do
	{
	choice = askForInt(MENU,3,0);
	switch(choice)
	{
	case 0:
		cout << "Bye Bye!\n ";
		break;
	case 1:
		display(inventory);
		break;
	case 2:
		for(unsigned i = 0; i < NUM_ITEMS; ++i)
		{
			cout << i << " - " << ITEMS[i] << endl;
			
		}
		itemNumber = askForInt(ADD_ITEM_MENU, NUM_ITEMS - 1, 0);
		add(inventory, &ITEMS[itemNumber]);
		break;
	case 3:
		for(unsigned i = 0; i < NUM_ITEMS; ++i)
		{
			cout << i << " - " << ITEMS[i] << endl;
			
		}
		itemNumber = askForInt(REMOVE_ITEM_MENU, NUM_ITEMS - 1, 0);
		remove(inventory, &ITEMS[itemNumber]);
		break;
		
		
	}
	
	
	
	}while(choice != 0);
	
	
return 0;
}