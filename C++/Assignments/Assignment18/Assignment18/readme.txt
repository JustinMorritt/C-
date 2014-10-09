- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment14.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	Copy Constructor
			Tree's Root is assigned the Data at the OtherTrees Root -> Data
			Tree's Root Runs CloneChildren Function passing in the OtherTrees->Root
	Tree Assignment operator
			Clear //Clears existing Tree if it has any nodes.
			Tree's Root is assigned the Data at the OtherTrees Root -> Data
			Tree's Root Runs CloneChildren Function passing in the OtherTrees->Root
	CloneChildren
		if (oldNode->_pLeft)
			Implied Tree's _pLeft Pointer is assigned to a new TreeNode with the _data of OtherTree's pLeft->_data  
			Recursively call implied _pLefts's CloneChildren Function passing it the OtherNodes->_pLeft 
		if (oldNode->_pRight)
			Implied Tree's _pLeft Pointer is assigned to a new TreeNode with the _data of OtherTree's pRight->_data  
			Recursively call implied _pLefts's CloneChildren Function passing it the OtherNodes->_pLeft 
end

3)Accomplishments*****************************************************************
	This assignment drilled recursion into my head.. It can be a very helpful thing to have
in cases like this. I implemented the copy constructor as-well as the assignment operator with 
as minimal code needed. The concept of how it worked took a while to grasp but through the frustration 
it became clear. I also went through a pre structured tree list and drew the tree for it . Drawing out
the tree helped me understand just what goes on with the way a tree is formed.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .