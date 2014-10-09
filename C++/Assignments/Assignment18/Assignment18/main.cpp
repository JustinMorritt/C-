#include <iostream>
#include "tree.h"
#include "randgen.h"


int main()
{
	RandGen rg;
	Tree<double> tree1;
	for (unsigned i = 0; i < 10; ++i)
	{
		tree1.Insert(rg.getNormalized());
	}
	//std::cout << "Pre Order:\n";
	//tree1.PreOrder(std::cout);
	//std::cout << "\nPost Order:\n";
	//tree1.PostOrder(std::cout);
	std::cout << "\nTree1 In Order:\n";
	tree1.InOrder(std::cout);
	std::cout << std::endl;

	Tree<double> tree2(tree1);
	std::cout << "\nCopy Constructor---> Tree2(Tree1) ---> In Order:\n";
	tree2.InOrder(std::cout);

	std::cout << "\n\nClearing--->Tree1 ---> Output:\n";
	tree1.Clear();
	tree1.InOrder(std::cout);
	
	std::cout << "\n\nRe-Output--->Tree2 ---> Prove Deep Copy:\n";
	tree2.InOrder(std::cout);

	std::cout << "\n\nAssignment Operator ---> Tree3 = Tree2 ---> Output Tree3:\n";
	Tree<double> tree3;
	tree3 = tree2;
	tree3.InOrder(std::cout);

  std::cin.get();
  return 0;
}


