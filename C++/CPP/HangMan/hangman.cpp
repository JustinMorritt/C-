//Hangman By Justin Morritt

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "randgen.h"

using namespace std;

const int MAX_WRONG = 8;

int main()
{
	vector<string> words;
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("TOMATO");
	words.push_back("LOCOMOTIVE");
	words.push_back("JUSTIN");
	
	
	RandGen rNg;
	random_shuffle(words.begin(), words.end(), rNg);
	
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used;
	
	cout << "\n\t\tWelcome TO Hangman. Good Luck!\n\n";
	
	while((wrong < MAX_WRONG) && (soFar != THE_WORD))
		{
			cout << "\n\nYou have  " << (MAX_WRONG - wrong)
				 << "incorect guesses left. \n"
				 << "you have used the following letters:\n\n" << used
				 << "\n\nSo far the word is: " << soFar << endl;
			char guess;
			cout << "\n\nEnter your next guess: ";
			cin >> guess;
			guess = toupper(guess); //converts to uppercase
			while(used.find(guess) != string::npos)
			{
				cout << "youve already used " << guess
					 <<" Guess again: ";
				cin >> guess;
			}
			used += guess;
			if(THE_WORD.find(guess) !=string::npos)
			{
				cout << "Thats right! " << guess << " is in the word.\n";
				//update soFar
				for(int i = 0; i < THE_WORD.length(); ++i)
				{
					if(THE_WORD[i] == guess)
					{
					soFar[i] = guess;
					}
				}
			}
			else
			{
				cout << "Sorry, " << guess << " isn't in the word.\n";
				++wrong;
			}
		}
		//shut down
		if(wrong == MAX_WRONG)
		{
			cout << "\n You've been hanged!";
		}
		else
		{
		cout << "\nYou Guessed it!";
		}
		
		cout << "\n The word was " << THE_WORD << endl;
		




return 0;
}	