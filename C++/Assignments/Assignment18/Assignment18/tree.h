 #if !defined(TREE_H__)
#define TREE_H__
#include <ostream>

using namespace std;

template<class T> class TreeNode;
template<class T> class Tree;

template <class T>
class TreeNode
{
   TreeNode(T data) : _pLeft(0), _pRight(0), _data(data)
  {
  }
  
  ~TreeNode()
  {
    //You can call delete safely on a NULL pointer.
    delete _pLeft;
    delete _pRight;
  }
  void CloneChildren(const TreeNode<T>* oldNode);
  void InOrder(std::ostream& os) const;
  void PreOrder(std::ostream& os) const;
  void PostOrder(std::ostream& os) const;
  bool Insert(T data);
  TreeNode<T> * _pLeft;
  TreeNode<T> * _pRight;
  T _data;
  friend class Tree<T>;   
};


template <class T>
class Tree
{
public:  
  Tree();
  ~Tree()
  {
    Clear();
  }
  void Clear();
  bool Insert(T data);
  bool IsEmpty() const
  {
    return _pRoot == 0;
  }
  void InOrder(ostream& os)const;
  void PreOrder(ostream& os)const;
  void PostOrder(ostream& os)const;
  void Tree<T>::operator=(const Tree<T>& tree);
  Tree(const Tree& tree);
private:
  TreeNode<T>* _pRoot;
};

//COPY CONSTRUCTOR
template <class T>
Tree<T>::Tree<T>(const Tree<T>& otherTree)  
{
	_pRoot = new TreeNode<T>(otherTree._pRoot->_data);
	_pRoot->CloneChildren(otherTree._pRoot);
};

//ASSINGMENT 
template <class T>
void Tree<T>::operator=(const Tree<T>& otherTree)
{
	Clear(); //Clears existing Tree if it has any nodes.
	_pRoot = new TreeNode<T>(otherTree._pRoot->_data);
	_pRoot->CloneChildren(otherTree._pRoot);
};

//COPY HELPER FUNCTION
template <class T>
void TreeNode<T>::CloneChildren(const TreeNode<T>* oldNode)
{
	if (oldNode->_pLeft)
	{
		//std::cout << " Left\n";
		_pLeft = new TreeNode<T>(oldNode->_pLeft->_data);
		_pLeft->CloneChildren(oldNode->_pLeft);
	}
	if (oldNode->_pRight)
	{
		//std::cout << " Right\n";
		_pRight = new TreeNode<T>(oldNode->_pRight->_data);
		_pRight->CloneChildren(oldNode->_pRight);
	}
}

template <class T>
bool TreeNode<T>::Insert(T data)
{
	//What are the filed os the implied object (ie: *this) ?
	if (data == _data)
	{
		return false;
	}
	if (data > _data)
	{
		//Going down the right side....
		if (_pRight == 0)
		{
			_pRight = new TreeNode<T>(data);
			return true;
		}
		else
		{
			return _pRight->Insert(data);
		}
	}
	if (_pLeft == 0)
	{
		_pLeft = new TreeNode<T>(data);
		return true;
	}
	return _pLeft->Insert(data);
}

template <class T>
Tree<T>::Tree() : _pRoot(0)
{
}

template <class T>
void Tree<T>::Clear()
{
	delete _pRoot;
	_pRoot = 0;
}

template <class T>
bool Tree<T>::Insert(T data)
{
	if (IsEmpty())
	{
		_pRoot = new TreeNode<T>(data);
		return true;
	}
	return _pRoot->Insert(data);

}

template <class T>
void TreeNode<T>::InOrder(std::ostream& os) const
{
	if (_pLeft)
	{
		_pLeft->InOrder(os);
	}
	os << _data << "\n";
	if (_pRight)
	{
		_pRight->InOrder(os);
	}
}

template <class T>
void TreeNode<T>::PreOrder(std::ostream& os) const
{
	os << _data << "\n";
	if (_pLeft)
	{
		_pLeft->PreOrder(os);
	}

	if (_pRight)
	{
		_pRight->PreOrder(os);
	}
}

template <class T>
void TreeNode<T>::PostOrder(std::ostream& os) const
{
	if (_pLeft)
	{
		_pLeft->PostOrder(os);
	}
	if (_pRight)
	{
		_pRight->PostOrder(os);
	}
	os << _data << "\n";

}

template <class T>
void Tree<T>::InOrder(ostream& os)const
{
	if (IsEmpty())
	{
		os << "<empty>" << endl;
	}
	else
	{
		_pRoot->InOrder(os);
	}
}

template <class T>
void Tree<T>::PreOrder(ostream& os)const
{
	if (IsEmpty())
	{
		os << "<empty>" << endl;
	}
	else
	{
		_pRoot->PreOrder(os);
	}
}

template <class T>
void Tree<T>::PostOrder(ostream& os)const
{
	if (IsEmpty())
	{
		os << "<empty>" << endl;
	}
	else
	{
		_pRoot->PostOrder(os);
	}
}

#endif