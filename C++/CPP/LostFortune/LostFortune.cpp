// LostFortune, A Personalized adventure :P
#include<iostream>
#include<string>	//needed for c++ string objects;
#include "prototypes.h"
//using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int GOLD_PIECES = 900;

int main()
{
//declare variables 
string leader; 		//last name of leader.
int adventurers; 	// number of adventures in the journey.
int killed;			//number of adventurers killed.

//GET VALUES
cout 	<< "\tWelcome to Lost Fortune\n\n" 
		<< "Please enter the following for a personalized adventure : \n"
		<<"Enter your Last name : ";
cin >> leader;
cout << "Enter a positive number: ";
cin >> askForInt("Enter a Positive number",50,2);
cout << "Enter a positive number less then the first : ";
killed = askForInt("Enter a Positive number",adventurers -1,0);
cin >> killed;		

//Calculate the Values
int survivors = adventurers - killed;
int extraGoldPieces = GOLD_PIECES % survivors;

cout << endl 	<< "The brave " << leader << " led a group of " << adventurers 
				<< " adventurers on a quest.\n"
				<< "They fought a band of ogres and lost " 
				<< killed << " ... only " << survivors
				<< " survived.\n"
				<< "The party was about to give up when the stumbled apon a\n"
				<< "buried treasure of " << GOLD_PIECES << " gold pieces."
				<< "They split the loot and\n" << leader 
				<< " kept the extra " << extraGoldPieces
				<< " extra gold pieces." << endl;


return 0;

}