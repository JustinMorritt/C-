//Array Passer
//Demonstrates relationship between pointers and arrays

#include<iostream>

using namespace std;

void increase(int* const array, const int NUM_ELEMENTS);  //pointer to a constant (value changeable)
void display(const int* const array, const int NUM_ELEMENTS);	 //constant pointer to a constant (value and pointer unchangeable)

int main()
{
	cout << "Creating an array of high scores.\n\n";
	const int NUM_SCORES = 6;
	int highScores[NUM_SCORES] = {5000,3500,2700,7000,40325,90000};
	
	cout << "Displaying scores using name as a constant pointer.\n";
	cout << *highScores << endl;
	cout << *(highScores + 1) << endl;
	cout << *(highScores + 2) << endl;
	cout << *(highScores + 3) << endl;
	cout << *(highScores + 4) << endl;
	cout << *(highScores + 5) << "\n\n";
	
	cout << "Increasing scores by passing array as a constant pointer.\n\n";
	increase(highScores, NUM_SCORES);
	
	cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
	display(highScores, NUM_SCORES);
	
	
return 0;
}

void increase(int* const array, const int NUM_ELEMENTS)
{
	for(int i = 0; i < NUM_ELEMENTS; ++i)
	{
	array[i] += 500;
	}

}

void display(const int* const array, const int NUM_ELEMENTS)
{
	for(int i = 0; i < NUM_ELEMENTS; ++i)
	{
		cout << array[i] <<endl;
	}

}
