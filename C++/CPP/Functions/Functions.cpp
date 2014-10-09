#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//(void) and () are the same unless you get deep technically
char askYesNo();
char askYesNo2(string question);
void func();

int askNumber(int high, int low = 1); //defining default only goes in prototype 
int var = 15;

int main()
{
	int number = askNumber(5);
	cout <<"Thanks for entering  " << number << endl;
	number = askNumber(10, 5);
	cout <<"Thanks for entering  " << number << endl;
	
	
	
	
	//cout << " In main(), the value of global var is : " 
	//	 << var << endl;
	
	/*
	int var = 5;
	func();
	
	cout << " In main(), the value of var is : " 
		 << var << endl;
	func();
	cout << "Back in main(), the value of var is: "
		 << var << endl;
	
	{
	cout << "In main(), the value of var is: "
	<< var << endl;
	int var = 10;
	cout << "In the new scope, the value of var is: "
	<< var << endl;
	}
	
	cout << "In the main(), the value of var is: "
	<< var << endl;
*/
/*
	char answer1 = askYesNo();
	cout << " Thanks for answering. " << answer1 << endl;
	
	//argument to the fuinction >>>
	char answer2 = askYesNo2("Do You want to save your game \'y\' or \'n\'");
	cout << " Thanks for answering. " << answer2 << endl;
*/
return 0;
}


int askNumber(int high, int low)
{
int num;
	do
	{
	cout << "Please enter a number (" << low << " - " << high << "): ";
	cin >> num;
	
	}while(num > high || num < low);
return num;
}






void func()
{
	cout << " In func(), the value of global var is : " 
		 << var << endl;
	
int var = -5 ; 
cout << "In func(), the value of var is: " << var << endl;

}




char askYesNo()
{


char response;  //What kind of variable ??
do				//Local Variable 
	{
	cout << "Please enter \'y\' or \'n\' : " ;
	cin >> response;
	}while(response != 'y' && response != 'n');
return response;
}

char askYesNo2(string question)
{


char response;
do
	{
	cout << question;
	cin >> response;
	}while(response != 'y' && response != 'n');
return response;
}