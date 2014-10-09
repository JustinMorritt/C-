#include<iostream>
#include<ostream> //OUTPUT STREAM


/*
struct AnotherNode
{
// default access specifier is public     C class

};
*/


class Node
{
	Node(int data) : _data(data), _pNext(nullptr), _pPrev(nullptr)
	{
	}
	
	//RECURSIVE
	unsigned Count() const
	{
		if(!_pPrev)
		{
			return 1;
		}
		return 1 + _pPrev -> Count();
	}
	void Display(std::ostream& os) const; //a referencce to OSTREAM 
	int _data;
	Node* _pNext;
	Node* _pPrev;
	friend class List;  //now the List class can access the private data members

};



class List
{
public:
	List();
	~List();
	void PushFront(int data);
	void PushBack(int data);
	int Front() const;
	int Back() const;
	void PopFront();
	void PopBack();
	void Display(std::ostream& os) const;
	unsigned Size() const; //const functions do not change anything in the object
	bool IsEmpty() const;
	void Clear();
	//hope to get here
	void Insert(int data, unsigned after);

private:
	Node* _pFront;
	Node* _pBack;
};



