#include <iostream>
#include <fstream>
#include "list.h"


int main()
{
	List lst;
	
	lst.PushFront(5);
	lst.PushBack(-7);
	lst.PushBack(44);
	lst.PushFront(-9);
	
	std::ofstream fout("test.txt");
	
	std::cout << "\nList size is : " << lst.Size() << std::endl;
	
	if(fout)
	{
		lst.Display(fout);
	}
	lst.Clear();
	std::cout << "\nList size is : " << lst.Size() << std::endl;
	
	if(fout)
	{
		lst.Display(fout);
	}
    return 0;
}

