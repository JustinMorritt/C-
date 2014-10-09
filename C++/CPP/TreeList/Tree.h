#if !defined(TREE_H__)
#define TREE_H__
#include <iostream>
#include <ostream>

class TreeNode
{


public:
	TreeNode(int data) : _pLeft(0), _pRight(0), _data(data)
	{};
	~TreeNode()
	{
		delete _pLeft;		//INLINE
		delete _pRight;		//YOU CAN DELETE SAFELY ON NULL POINTERS
	};
	bool Insert(int data);
	void InOrder(std::ostream& os) const;
	void PreOrder(std::ostream& os) const;
	void PostOrder(std::ostream& os) const;

private:
	int _data;
	TreeNode* _pLeft;
	TreeNode* _pRight;
	friend class Tree;
};



class Tree
{
public:
	Tree();
	~Tree()
	{
		Clear();
	};
	void Clear();
	bool Insert(int data);
	bool IsEmpty() const
	{
		return _pRoot == 0; //INLINED
	};
	void InOrder(std::ostream& os) const;
	void PreOrder(std::ostream& os)const;
	void PostOrder(std::ostream& os)const;

private:
	TreeNode* _pRoot;
};






//Need a tree Transversal (display) "pre order" "post order"
/*
In Order -(recursively)
if left 
	go down left
	output value
if right 
	go down right


Pre Order 
output node
if left
	go down right
if right 
	go down

Post Order
if left
	go down left
if right 
	go down right 
output stream

*/


#endif
