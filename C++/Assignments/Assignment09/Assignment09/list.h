#ifndef LIST_H__
#define LIST_H__
#include <iostream>


class Node
{
//default access specifier is private
	

	
	Node(const std::string& data);

	
	Node(const Node& other); //COPY CONSTRUCTOR
	Node& Node::operator=(const Node& other);

	unsigned Count() const
	{
		if(!_pPrev)
		{
		    return 1;
		}
		return 1 + _pPrev -> Count();
	};
	void Display() const;
    std::string _data;
	Node* _pNext;
	Node* _pPrev;
	friend class List;
};



class List
{
public:
	List();
	List(const List& other);
	List& List::operator=(const List& other);
	~List();
	void PushFront(const std::string& data);
	void PushBack(const std::string& data);
	const std::string& Front() const;
	const std::string& Back() const;
	void PopFront();
	void PopBack();
	void Display() const;
	unsigned Size() const;
	bool IsEmpty() const;
	void Clear();
 	
private:
	Node* _pFront;
	Node* _pBack;
};


#endif