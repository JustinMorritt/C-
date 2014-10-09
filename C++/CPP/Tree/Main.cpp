#include <iostream>
#include "Tree.h"
#include "randgen.h"

using namespace std;

int main()
{
	Tree tree;
	RandGen rg;

	int i = 0;
	while (i < 100)
	{
		if (tree.Insert(rg(100) - 50))
		{
			++i; //Need a tree Transversal (display) "pre order" "post order"
		}
	}

	//TRANSVERSAL OUTPUTS  ******ROOT IS BEGGINING OF PRE AND END OF POST*********
	tree.InOrder(std::cout);
	std::cout << std::endl;
	std::cout << std::endl;
	tree.PreOrder(std::cout);
	std::cout << std::endl;
	std::cout << std::endl;
	tree.PostOrder(std::cout);
	std::cout << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}


//TRANSVERSAL OUTPUTS  ******ROOT IS BEGGINING OF PRE AND END OF POST*********
/*
	find root (beginning of pre and end of post)
		next root is the second of the post

*/