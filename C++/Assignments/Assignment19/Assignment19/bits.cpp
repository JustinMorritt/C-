
#include <iostream>
#include "prototypes.h"
#include "templates.h"

using std::cout;
using std::endl;



int main()
{
    cout << endl;
    int numb1 = askForInt("Enter a number to be added: ");
    cout << numb1 << "'s bit pattern is:" << endl;
    ShowBits(std::cout, numb1);

    int numb2 = askForInt("\nEnter another number to be added: ");
    cout << numb2 << "'s bit pattern is:" << endl;
    ShowBits(std::cout, numb2);

	int a, b , temp;
	
	a = numb1 & numb2; // first step..  get the & bitwise

	cout <<"\n\n\na's bit pattern after & is:" << endl;

	ShowBits(std::cout, a);

	b = numb1 ^ numb2; // Second step.. get Xor bitwise

	cout <<"\nb's bit pattern after Xor is:" << endl;
	ShowBits(std::cout, b);

	while(a != 0)
	{
		a <<= 1; 
		cout << "\na's bit pattern after Left Shift Assign is:" << endl;
		ShowBits(std::cout, a);
		temp = b ^ a;
		cout << "\ntemp's bit pattern Assigned to b Xor a is:" << endl;
		ShowBits(std::cout, temp);
		a &= b;
		cout << "\na's bit pattern after & Assign is:" << endl;
		ShowBits(std::cout, temp);
		b = temp;
		cout << "\nb's bit pattern after Assigned to temp is:" << endl;
		ShowBits(std::cout, temp);
	}
	int dx = b;
    cout << "\n\n\nThe result of addition is: " << dx << endl;
    cout << "Bit pattern is:" << endl;
    ShowBits(std::cout, dx);
    cout << endl;
	std::cin.get();
    return 0;

}



