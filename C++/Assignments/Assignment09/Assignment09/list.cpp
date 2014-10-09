#include <iostream>
#include <string>
#include "list.h"

//Node::Node()
//{
//};

Node::Node(const std::string& data)
	{
		this->_data = std::string(data);
		this->_pNext = 0;
		this->_pPrev = 0;
	};

void Node::Display() const
{
	std::cout << _data << std::endl;   // CHANGE *_data to _data to see different memory locations.
	if(_pNext)
	{
		_pNext -> Display();
	}
}

//COPY CONSTRUCTORS *************************************
Node::Node(const Node& other)
{
	//std::cout << "NODE Copy constructor initiated\n";
	_data = std::string(other._data);
}


List::List(const List& other) : _pFront(nullptr), _pBack(nullptr)
{
	std::cout << "Copy constructor initiated ----->\n";
	if (other.IsEmpty())
	{
		return;
	}
	Node* p = other._pFront;   //USE existing nodes to iterate through changing the front pointer as you go through 
	Node* prev = p->_pPrev;
	
	while (p)
	{
		Node* n = new Node(*p);			//send the data stored at *p to the Node Copy constructor
		if (IsEmpty())
		{
			_pFront = n;				//set the copied node's Front/Back to the address of n (new copy*)
			_pBack = n;
		}
			else
			{
				n->_pNext = _pBack;		//set the copied node's  Next/Prev
				_pBack->_pPrev = n;		
				_pBack = n;
			}

		p = prev;			//CHANGE iterator to next stored address
		if (prev)
		{
			prev = p->_pPrev;
		}
	}
}
//*******************************************************
//OVERLOADED ASSIGNMENT OPERATOR

List& List::operator=(const List& other)
{
	std::cout << "List Overload Assignment Operator used ---->\n";
	if (this == &other)
	{
		std::cout << "Same Entry";
		return *this;
	}
	if (other.IsEmpty())
	{
		this -> Clear();
		return *this;
	}
	Node* p = other._pFront;   //USE existing nodes to iterate through changing the front pointer as you go through 
	Node* prev = p->_pPrev;

	while (p)
	{
		Node* n = new Node(*p);	
		
		if (IsEmpty())
		{
			_pFront = n;				//set the copied node's Front/Back to the address of n (new copy*)
			_pBack = n;
		}
		else
		{
			n->_pNext = _pBack;		//set the copied node's  Next/Prev
			_pBack->_pPrev = n;
			_pBack = n;
		}

		p = prev;			//CHANGE iterator to next stored address
		if (prev)
		{
			prev = p->_pPrev;
		}
	}

	return *this;
		
}

Node& Node::operator=(const Node& other)
{
	//std::cout << "Node overloaded assignment operator activated--->\n";
	if (this == &other)
	{
		return *this;
	}
	this -> _data = std::string(other._data);
	return *this;
}

//*******************************************************

List::List() : _pFront(0), _pBack(0)
{
}

List::~List()
{
	Clear();
}

bool List::IsEmpty() const
{
//    return _pFront == 0;
	
	if(_pFront == 0)
	{
	    return true;
	}
	return false;	
}

void List::PushFront(const std::string& data)
{
	Node* p = new Node(data);
	if(IsEmpty())
	{
		_pFront = p;
		_pBack = p;
		return;
	}
	p -> _pPrev = _pFront;
	_pFront -> _pNext = p;
	_pFront = p;
}

void List::PushBack(const std::string& data)
{
	Node* p = new Node(data);
	if(IsEmpty())
	{
		_pFront = p;
		_pBack = p;
		return;
	}
	p -> _pNext = _pBack;
	_pBack -> _pPrev = p;
	_pBack = p;
	
}

void List::PopFront()
{
	//do nothing on an empty list
	if(IsEmpty())
	{
	    //Not totally happy with this but we will deal with it later.
	    return;
	}
	if(_pFront == _pBack)
	{
	    delete _pFront;
		_pFront = 0;
		_pBack = 0;
		return;
	}
	Node* p = _pFront;
	_pFront = _pFront -> _pPrev;
	_pFront -> _pNext = 0;
	delete p;
	
	
}

void List::PopBack()
{
	//do nothing on an empty list
	if(IsEmpty())
	{
	    //Not totally happy with this but we will deal with it later.
	    return;
	}
	if(_pFront == _pBack)
	{
	    delete _pFront;
		_pFront = 0;
		_pBack = 0;
		return;
	}
	Node* p = _pBack;
	_pBack = _pBack -> _pNext;
	_pBack -> _pPrev = 0;
	delete p;
}

const std::string& List::Front() const
{
    if(IsEmpty())
	{
		//What the hell do we do???!
		static std::string error;
		return error;
	}
	return _pFront -> _data;
	
}

const std::string& List::Back() const
{
    if(IsEmpty())
	{
		//What the hell do we do???!
		static std::string error;

		return error;
	}
	return _pBack -> _data;
	
}

unsigned List::Size() const
{
    if(IsEmpty())
	{
	    return 0;
	}
	if(_pBack == _pFront)
	{
	    return 1;
	}

	/*
	//Walk the list -- Iteration
	unsigned ret = 0;
	Node* p = _pFront;
	while(p)
	{
	    p = p -> _pPrev;
		++ret;
	}
    return ret;
	*/

	//How do we do this recursively?
	return _pFront -> Count();	
}

void List::Clear()
{
	if(IsEmpty())
	{
		return;
	}
	
	Node* p = _pFront;
	Node* prev = p -> _pPrev;
	
	while(p)
	{
	    delete p;
	    p = prev;
		if(prev)
		{
		    prev = p -> _pPrev;
		}
	}
	_pFront = 0;
	_pBack = 0;
	
}

void List::Display() const
{
   if(IsEmpty())
   {
       std::cout << "<empty>\n\n";
	   return;
   }
   _pBack -> Display(); 
}

