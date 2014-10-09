#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
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
			std::cout << setw(30) << it->first << setw(10) << " occurs " << it->second << " times\n";
		}
	}
	else
	{
		ofstream outputFile(pOutFilename);
		GetWordCount(pFilename, m);
		//for loop outputting to outputfile.
		cout << "\n\nOutput Words/Word Count to words.txt. --->\n\n";
		map<string, unsigned>::iterator it = m.begin();
		for (it; it != m.end(); ++it)
		{
			outputFile << setw(30) << it->first << setw(10) << " occurs " << it->second << " times\n";
		}
	}

	inFile.close();
	outputFile.close();
	return 0;
}




//BUILD MAP GETWORDS
void GetWordCount(char * pIn, map<string, unsigned>& m)
{
	//map<string, unsigned> m;
	ifstream inFile(pIn);

	vector<string> words; // Vector to hold our words we read in.
	string str; // Temp string to
	cout << "Building WordCount Map..." << std::endl;

	while (inFile >> str) 
	{					
		for (unsigned int j = 0; j < str.length(); j++)
		{
			string ret;
			for (unsigned int i = 0; i < str.length(); i++)
			{
				if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
				{
					ret.push_back(str[i]);
				}
			}
			str = ret;
			str[j] = toupper(str[j]);
		}
		words.push_back(str);
	}
	sort(words.begin(), words.end());

	//COUNT WORDS / PUSH ON MAP
	for (int i = 0; i < words.size(); )
	{
		unsigned count = 1;
		int j = 1;
		while (words[i] == words[i + j])
		{
			++count;
			++j;		
		}
		m.insert(pair<string, unsigned>(words[i], count));
		i += count;
	}
	cout << "COMPLETE!" << std::endl;
}