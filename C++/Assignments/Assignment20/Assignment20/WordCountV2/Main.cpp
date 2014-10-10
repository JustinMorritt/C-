#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <map>

using namespace std;

void GetWordCount(char * pIn, map<string, unsigned>& m);

int main(int argc, char *argv[])
{
	if (argc <= 1) //Exits if the number of command arguments are <1 .. needs them well atleast 1
	{
		cout << "No Command Line Arguments... Exiting." << endl;
		exit(1);
	}
	char *pOutFilename = argv[1];
	char *pFilename = argv[2];
	
	ifstream outputFile(pOutFilename);
	ifstream inFile(pFilename);
	map<string, unsigned> m;
	if(inFile.fail())
	{
		cerr << "Could not open Input File --->" << pFilename << ". ??\n\n";
		exit(1); // 1 indicates an error occurred
	}
	if (outputFile.fail())
	{
		cerr << "Could not open Output file --->" << pOutFilename << ". Outputting to std::cout ....\n\n";
		 GetWordCount(pFilename,m);
		map<string, unsigned>::iterator it = m.begin();
		for (it; it != m.end(); ++it)
		{
			std::cout << setw(35) << it->first << setw(10) << " occurs " << it->second << " times\n";
		}
	}
	else
	{
		ofstream outputFile(pOutFilename);
		GetWordCount(pFilename, m);
		cout << "\n\nOutput Words/Word Count to words.txt. --->\n\n";
		map<string, unsigned>::iterator it = m.begin();
		for (it; it != m.end(); ++it)
		{
			outputFile << setw(35) << it->first << setw(10) << " occurs " << it->second << " times\n";
		}
	}

	inFile.close();
	outputFile.close();
	return 0;
}


//BUILD MAP GETWORDS
void GetWordCount(char * pIn, map<string, unsigned>& m)
{
	ifstream inFile(pIn);
	string str;
	cout << "Building WordCount Map..." << std::endl;
	while (inFile >> str) 
	{	
		string ret;				
		for (unsigned int j = 0; j < str.length(); j++)
		{
			str[j] = toupper(str[j]);
			if (str[j] >= 'A' && str[j] <= 'Z')
			{
				ret.push_back(str[j]);
			}
		}
		pair<map<string, unsigned>::iterator, bool> check;
		check = m.insert(pair<string, unsigned>(ret, 1));
		if (check.second == false)
		{
			check.first->second++;
		}
		else
		{
			m.insert(pair<string, unsigned>(ret, 1));
		}
	}
}


//LETTER COUNTER HAHA 
/*
string ret;
if (((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')))
{
str[j] = toupper(str[j]);
ret.push_back(str[j]);
}
str = ret;
*/