#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Swap(int& val1, int& val2);

int main()
{



return 0;
}

void Swap(int& val1, int& val2)
{
int temp = val1;
val1 = val2;
val2 = temp;


}



