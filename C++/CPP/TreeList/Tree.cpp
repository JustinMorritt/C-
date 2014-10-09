//BINARY ORDERED TREE
#include "Tree.h"


void Tree::Clear()
{
	delete _pRoot;
	_pRoot = 0; //SET NULL
};

Tree::Tree() : _pRoot(0)
{
}


bool TreeNode::Insert(int data)
{
	if (data == _data)
	{
		return false;
	}
	if (data > _data)
	{
		//Going down right side
		if (_pRight == 0)
		{
			_pRight = new TreeNode(data);
			return true;
		}
		else
		{
			return _pRight->Insert(data);
		}	
	}
	if (_pLeft == 0)
	{
		_pLeft = new TreeNode(data);
		return true;
	}
	return _pLeft->Insert(data);
}

bool Tree::Insert(int data)
{
	if (IsEmpty())
	{
		_pRoot = new TreeNode(data);
		return true;
	}
	return _pRoot->Insert(data);
};

void TreeNode::InOrder(std::ostream& os) const
{
	if (_pLeft)
	{
		_pLeft->InOrder(os);
	}
	os << _data << " ";
	if (_pRight)
	{
		_pRight->InOrder(os);
	}
};
void TreeNode::PreOrder(std::ostream& os) const
{
	os << _data << " ";
	if (_pLeft)
	{
		_pLeft->PreOrder(os);
	}
	
	if (_pRight)
	{
		_pRight->PreOrder(os);
	}
};
void TreeNode::PostOrder(std::ostream& os) const
{
	if (_pLeft)
	{
		_pLeft->PostOrder(os);
	}
	
	if (_pRight)
	{
		_pRight->PostOrder(os);
	}
	os << _data << " ";
};

void Tree::InOrder(std::ostream& os) const
{
	if (IsEmpty())
	{
		os << "<empty>" << std::endl;
	}
	else
	{
		_pRoot->InOrder(os);
	}
};
void Tree::PreOrder(std::ostream& os) const
{
	if (IsEmpty())
	{
		os << "<empty>" << std::endl;
	}
	else
	{
		_pRoot->PreOrder(os);
	}
};
void Tree::PostOrder(std::ostream& os) const
{
	if (IsEmpty())
	{
		os << "<empty>" << std::endl;
	}
	else
	{
		_pRoot->PostOrder(os);
	}
};