#include<iostream>
#include<iomanip>

using std::fixed;
using std::cout;
using std::endl;

double factorial(unsigned level);
long double fibonacci(unsigned level);

int main()
{
	for(unsigned i = 0; i < 21; ++i)
	{
	cout << "The factorial of" << i << " is : "<< fixed <<fibonacci(i) <<endl;
	
	}
	cout << factorial(3) <<endl;
	cout << factorial(5) <<endl;
	cout << factorial(8) <<endl;
	
	
	
return 0;
}


long double fibonacci(unsigned level)
{
	//Base case: a case where you do not recurse ..
	if(level ==0 || level == 1)
	{
		return 1;
	}
	return fibonacci(level - 1) + fibonacci(level - 2);
}


double factorial(unsigned level)
{
	if(level == 0)
	{
		return -1; //error
	}
	if(level == 1)
	{
		return 1;
	}
	//RECURSION
	return level * factorial(level - 1);
	
	//double acc = 1;
	/*for(double i = 2; i <= level; ++i)
	{
		acc *= i;
	}*/
//return acc;
	
	

}