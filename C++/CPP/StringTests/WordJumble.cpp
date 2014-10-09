//Word Jumble ***************************ARRAYS



#include <iostream>
#include <string>
#include "randgen.h"


int main()
{
	RandGen rNg;
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	/*
	const string WORDS[] =
	{
		"wall",
		"glasses",
		"laboured",
		"persistant",
		"jumble",
		"elephant",
		"helicopter",
		"computer"
	};
	
	const unsigned int NUM_WORDS = sizeof(WORDS) / sizeof(WORDS[0]);
	
	
	const unsigned int NUM_WORDS = sizeof(WORDS) / sizeof(WORDS[0]);
	
	*/
	
	
	const std::string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, isnt it ?"},
		{"persistant", "Keep at it !"},
		{"jumble", "Its what the game is all about."}
	};
	int choice = (rNg() % NUM_WORDS);
	std::string theWord = WORDS[choice][WORD]; //word to guess
	std::string theHint = WORDS[choice][HINT];
	
	std::string jumble = theWord; // jumbled version of the word
	int length = jumble.size();
	for(int i = 0; i < length; ++i)
	{
		int index1 = (rNg() % length);
		int index2 = (rNg() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	
	std::cout 	<< "\n\n\n*************WELCOME TO WORD JUMBLE***********\n\n\n"
				<< "Unscramble the letters to make a word.\n"
				<< "Enter \'Hint\' for a hint. \n"
				<< "Enter \'Quit\' to Quit the game.\n\n"
				<< "The Jumble Word is: " << jumble << std::endl;
	std::string guess;
	std::cout << "\n\nYour guess: ";
	std::cin >> guess;
	
	while((guess != theWord) && (guess != "quit"))
	{
		if(guess == "hint")
		{
			std::cout << theHint;
		}
		else
		{
			std::cout << "Sorry, thats not the secret word";
		}
		std::cout << "\n\nYour guess: ";
		std::cin >> guess;
	
	}
	if(guess == theWord)
	{
		std::cout <<"\n\n Thats IT ! you guessed it\n\n\n";
	
	}
	std::cout << "\t\tThanks For PLaying !\n\n\n";




return 0;
}