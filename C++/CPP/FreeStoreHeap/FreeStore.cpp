#include<iostream>
#include<string>
#include<vector>

using namespace std;

int* intOnHeap();

int main()
{
	int* pInt = new int;
	*pInt = 10;
	cout << "pInt: " << pInt << " *pInt: " << *pInt << endl;
	
	int* pHeap = intOnHeap();
	cout << "pHeap: " << pHeap << " *pHeap: " << *pHeap << endl;
	
	cout << "delete memory allocated for pInt.\n";
	delete pInt;
	pInt = NULL;
	
	cout << "delete memory allocated for pHeap.\n";
	delete pHeap;
	pHeap = NULL;
	
	
	
	
	
return 0;
	

}

void leak1()
{
	int* drip1 = new int(30);
}

void leak2()
{
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
}


int* intOnHeap()
{
	int* ret = new int(20);
	return ret;
}