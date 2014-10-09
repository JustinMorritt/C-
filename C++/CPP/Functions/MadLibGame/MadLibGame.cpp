//Mad lib .. BY JUSTIN MORRITT

#include<iostream>
#include<string>
#include "prototypes.h"

//std::string askText(const std::string& prompt);
int askNumber(std::string prompt);
//FUNCTION SIGNATURE!
/*void tellStory(	std::string name,
				std::string noun,
				int number,
				std::string bodypart,
				std::string verb);

*/

int main()
{
welcomePlayer();

std::string name = askText("Please enter a name: ");
std::string noun = askText("Please enter a plural noun: ");
int number = askForInt("Please enter a number: ");
std::string bodyPart = askText("Please enter a body part: ");
std::string verb = askText("Please enter a verb: ");
tellStory(name,noun,number,bodyPart,verb);

return 0;
}

//THE ASK TEXT FUNCTION

std::string askText(const std::string& prompt)
{
	std::string text;
	std::cout << prompt;
	std::getline(std::cin, text);
	return text;
}

int askNumber(std::string prompt)
{
	int num;
	std::cout << prompt;
	std::cin >> num;
	return num;
}

void welcomePlayer()
{
std::cout << "\t Welcome to Madlib !" 
		<< "\nPlease Provide the following: ";

}


void tellStory(	std::string& name,
				std::string& noun,
				int& number,
				std::string& bodyPart,
				std::string& verb)
{
	std::cout 	<< "\nHeres your story: \n"
				<< "The famous explorer "
				<< name
				<< " had nearly given up a life long quest to find\n "
				<< "The lost city of "
				<< noun
				<< "when one day, the "
				<< noun
				<< " found the explorer. \n"
				<< "Surrounded by "
				<< number
				<< " "  << noun
				<< ", a tear came to "
				<< name << " 's " 
				<< bodyPart << ".\n"
				<< "After all this time, the quest was finally over. "
				<< "And then, the "
				<< noun << "\n"
				<< "promptly devoured " 
				<< name << ". "
				<< "The moral of the story ? Be careful what you " 
				<< verb
				<< " for.";
}