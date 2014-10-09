#include<iostream>
#include <cstring>
#include "sString.h"



StupidString::StupidString(const char* p)
{
	if(!p)
	{
		_pData = NULL;
		_capacity = 0;
		return;
	}
	_capacity = strlen(p); // stands for string length ... C function
	
	if(!_capacity)
	{
		_pData = NULL;
		return;
	}
	
	_pData = new char[_capacity + 1];  //because of the 0 at end in C
	strcpy(_pData, p); //
}
	//Over-riding the copy ctor
StupidString::StupidString(const StupidString& str)
	{
		if(str.isEmpty())
		{
			_pData = NULL;
			_capacity = 0;
			return;
		}
		_capacity = str._capacity;
		_pData = new char [_capacity + 1];
		strcpy(_pData, str._pData);
	}

StupidString& StupidString::operator=(const StupidString& str)
{
	//There are two StupidString objects here :
	//One is the argument to the function and because this is
	//a member function, there is an implied object on which
	//this function is being called
	//"this" is pointer to that object
	
	//Must check for self assignment !
	if(this == &str)
	{
		return *this;
	}
	
//if we get this far we know that they are two different objects
	
	_capacity = str._capacity;
	delete [] _pData;
	if(_capacity == 0)
	{
		_pData = NULL;
		return *this;
	}
	_pData = new char[_capacity +1];
	strcpy(_pData, str._pData);
	return *this;
	


}

StupidString::StupidString(unsigned len, char ch) :
 _pData(new char[len +1]), _capacity(len)
{
	for(unsigned i = 0; i < _capacity; ++i)
	{
		_pData[i] = ch;
	}
	_pData[_capacity] = '\0'; // This is the same as just 0
}

StupidString::~StupidString()    //DESTRUCTOR
{
	delete [] _pData;   //for deleting arrays. include [] 
						//because we used the array new
	std::cout << "\nStupidString::~StupidString() is called"; 
}