#include<iostream>

#include<ostream>
#include "list.h"

void Node::Display(std::ostream& os) const
{
	os << _data;
	if(_pNext)
	{
		os << " \n";
		_pNext -> Display(os);
		
	}
	os << std::endl;
}

List::List() : _pFront(NULL), _pBack(NULL)   //CONSTRUCTOR
{
}


bool List::IsEmpty() const
{
	//return _pFront == NULL;     //these two ways are identical  
	
	if(_pFront == NULL)
	{
		return true;
	}
	return false;
}

void List::PushFront(int data)
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

void List::PushBack(int data)
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
		//not totally happy with this but we will deal with it later.
		return;
	}
	if(_pFront == _pBack)
	{
		delete _pFront;
		_pFront = nullptr;
		_pBack = nullptr;
		return;
	}
	Node* p = _pFront;   // p being the temp swapping variable.
	_pFront = _pFront -> _pPrev;
	_pFront -> _pNext = nullptr;
	delete p;
}

void List::PopBack()
{
	if(IsEmpty())
	{
		return;
	}
	if(_pFront == _pBack) // getting rid of one existing node
	{
		delete _pFront;
		_pFront = nullptr;
		_pBack = nullptr;
		return;
	}
	Node* p = _pBack;   // getting rid of the back pointer
	_pBack = _pBack -> _pNext;
	_pBack -> _pPrev = nullptr;
	delete p;
}

int List::Front() const
{
	if(IsEmpty())
	{
		//What the hell do we do
		return 0;
	}
	return _pFront -> _data; // Return the pointer to the front of the list
}

int List::Back() const
{
	if(IsEmpty())
	{
		//What the hell do we do
		return 0;
	}
	return _pBack -> _data; // Return the pointer to the back of the list
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
	
	unsigned ret = 0; //Counting from the end to the front 
	
	//ITERATIVELY
	Node* p = _pFront;
	while(p)
	{
		p = p -> _pPrev;
		++ret;
	}
	//return ret;
	
	
	//RECURSIVELY
	return _pFront -> Count();
}

void List::Clear()
{
	if(IsEmpty())
	{
	return;
	}
	Node* p = _pFront;
	Node* prev = p -> _pPrev;	//declare pointer p , and 
	while(p)
	{
		delete p;
		p = prev;
		if(prev)
		{
			prev = p -> _pPrev;
		}
		
	}
	_pFront = nullptr;
	_pBack = nullptr;
}

List::~List()
{
	Clear();
}

void List::Display(std::ostream& os) const
{
	if(IsEmpty())
	{
		os << std::endl;
		os << "<empty>";
		return;
	}
	_pBack -> Display(os);
}


/*
	//hope to get here
	void Insert(int data, unsigned after);
*/