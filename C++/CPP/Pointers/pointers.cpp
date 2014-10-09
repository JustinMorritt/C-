#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int * pApointer = NULL;
	//null pointers
	int * pScore = 0; // Old school C++ dude
	//pScore = NULL;	//A guy who has written lots of C
	//pScore = nullptr; // new for C++11
	int score = 1000;
	
	pScore = &score; // &symbol before = pointer reference ,  symbol& = reference
	
	cout << " The size of an int pointer is : " << sizeof(int*) << endl;
	cout << " The size of an int pointer pointer is : " << sizeof(int**) << endl;
	cout << " The size of an double pointer is : " << sizeof(double*) << endl;
	cout << " The size of score is : " << sizeof(score) << endl;
	
	
	cout << "Assigning the address of pScore to score\n"
		<< "The address of score is : " << &score << endl;
	cout << "The value of  pScore is : " << pScore << endl;
	cout << "The value of score is: " << score << endl;
	cout << "The value if score throught pScore is: " << *pScore << endl;
	if(pApointer)
	//if(pApointer != NULL)
	{
		cout << "The value of the dangling pointer is : " << pApointer << endl;
		//cout << "The value that paPointer points to is: " << *pApointer << endl;
		*pApointer = 300;
	}
	cout << " Adding 500 to score ..\n";
	score += 500;
	cout << "The value of  pScore is : " << *pScore << endl;
	cout << " Adding 500 to what pScore points to ..\n";
	*pScore += 500;
	cout << "The value of  score is : " << score << endl;
	cout << "The value of  pScore is : " << *pScore << endl;
	
	int newScore = 5000;
	cout << "Declaring a new score variable ...\n";
	pScore = &newScore;
	cout << "The value of  newscore is : " << newScore << endl;
	cout << "The address of pScore is : " << pScore << endl;
	cout << "The value of  pScore is : " << *pScore << endl;
	
	cout << "Declaring a string object called str and a pointer to it.\n";
	string str("score");
	string * pstr = &str;
	
	cout << "The value of str is : " << str << endl;
	cout << "The value of pstr is : " << pstr << endl;
	cout << "The value pstr points to is : " << *pstr << endl;
	
	cout << "The size of the string str is : " << str.size() << endl;
	cout << "Accessing the string through the pointer : " << (*pstr).size() << endl;
	cout << "Accessing the string arrow notation : " << pstr -> size() << endl;
return 0;
}