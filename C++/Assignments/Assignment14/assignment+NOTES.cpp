C++ Assignment 14 & 15

Starting with the Date class example we looked at today, Implement the following:

1) Less than operator (<)
2) Less than or equals operator (<=)
3) Plus assign operator that adds days (+=)
4) Minus assign operator that subtracts days (-=)
5) Minus operator that takes two Date objects and return the difference in number of days.
6) Implement a postfix and prefix decrement operator (--).
7) An insertion operator (<<) that inserts the results of the to string function to an ostream object. 
8) Uncomment the test code in the main function that tests all your operators.

NOTE: Start with an existing Date project.
NOTE: Submit you source code, readme.txt, the .sln file and the .vcxproj file.

Modify the class so
that an invalid date throws a custom exception.  The custom exception is be a 
subclass of one of the standard c++ exception classes. "NOT STD EXCEPTION"

1) Implement a custom exception class that is a subclass of a standard c++
   exception classes.  Choose an appropriate c++ class as the base class
2) Use this custom exception class in the Date class and give the exception 
   object an appropriate error message.
3) Modify the main function so that it:
   - puts all Date object creation in a try block
   - has an appropriate catch block for the try block that handles the exception
     and prints the appropriate error message using the exception::what() 
     function.
   - Attempt to create invalid date objects in the try block.
   
Hints:
1) Throw the exceptions in the isValid() function when the class checks its 
   validity.  You may find it best to alter the return type of the isValid() 
   function ('to what?' is the question).  Look at the supp material 
   implementation of exceptions for a big hint. 


Notes :
operator overload------

std::cout << p-> tostring();
std::cout << *p; // operator overload.

1.C++ is the only language that allows operator overloading .
2.Operator overloading is not aloud on specific operators.
3.you cannot invent your own operator , you must use an existing operator.

all an operator is is a function with a different syntax.
"outstream"

ostream& operator<<(ostream& os, const Card* p);
{
	os << p->Tostring();
	return os; //promised to return this.
}

//STANDALONE VERSION 
class Vector3D
{
public:
		Vector3D(float x, float y, float z) : _X(x), _Y(y), _Z(z){};
private:
	float _X, _Y, _Z
	friend Vector3D operator+(const Vector3D& w, const Vector3D& w2);//NOW WILL COMPILE
}
 
 Vector3D v1(4,2,-1)
Vector3D v2(-2.5,1.6,2.7)
Vector3D v3 = v1 + V2;

two ways to implement .  
Operator overload as a member , or as a stand alone function


Vector3D operator+(const Vector3D& w, const Vector3D& w2); //Prototype

Vector3D operator+(const Vector3D& w, const Vector3D& w2)
{

return Vector3D(w._X + w2._X, w._Y + w2._Y, w._Z + w2._Z);  //WONT COMPILE , trying to access private members
}


  //MEMBER VERSION 
class Vector3D
{
public:
		Vector3D(float x, float y, float z) : _X(x), _Y(y), _Z(z){};
		Vector3D operator+(const Vector3D& v) const;
private:
	float _X, _Y, _Z
}
 
Vector3D v1(4,2,-1)
Vector3D v2(-2.5,1.6,2.7)
Vector3D v3 = v1 + V2;

//"Implied object here " 
//"this" "v is simply a new name for V2 passed in "
Vector3D Vector3D::operator+(const Vector3D& v) const
{
	return(_X+v._X,_Y+v._Y,_Z+v._Z);
}


	  //OTHER VERSION 
class Vector3D
{
public:
		Vector3D(float x, float y, float z) : _X(x), _Y(y), _Z(z){};
		Vector3D& operator+=(const Vector3D& v) const;
		friend ostream& operator<<(ostream& os, const Vector3D& v); //MAKE FRIEND TO ACCESS PRIVATE DATA MEMBERS
private:
	float _X, _Y, _Z
}
 
Vector3D v1(4,2,-1)
Vector3D v2(-2.5,1.6,2.7)
Vector3D V2 += V1;

//"Implied object here " 
//"this" "v is simply a new name for V2 passed in "
Vector3D& Vector3D::operator+=(const Vector3D& v) const
{
	_X+=v._X;
	_Y+=v._Y;
	_Z+=v._Z;
	return *this;
}


//UNIVERSALY MAKE THESE STAND ALONE FUNCTIONS
ostream& operator<<(ostream& os, const Vector3D& v); //PROTOTYPE

ostream& operator<<(ostream& os, const Vector3D& v)
{
	std::stringstream ss;
	ss << "[" << v._X << "\t" << v._Y << "\t" << v._Z << "]";
	os << ss.str();
	return os;
};


//DATE IMPLEMENTATiOn

Date now;
Date lastWeek;
lastWeek.addDays(-7);

if (now == lastWeek)

bool operator==(const Date& d1, const Date& d2)
{
	return 	d1._Day == d2._Day &&
			d1._Month == d2._Month &&
			d1._Year == d2._Year ;
};

bool operator!=(const Date& d1, const Date& d2)
{
	return 	!(d1==d2); //RETURNS TRUE IF NOT EQUAL , USING OTHER == OVERLOAD.
};


bool operator>(const Date& d1, const Date& d2)
{
	if(d1._Year > d2._Year)
	{
		return true;
	}
	if(d1._Year < d2._Year)
	{
		return false
	}
	//SAME YEAR
	if(d1._Month > d2._Month)
	{
		return true;
	}
		if(d1._Month < d2._Month)
	{
		return false;
	}
	//SAME MONTH
		if(d1._Day > d2._Day)
	{
		return true;
	}
		return false;
};

bool operator>=(const Date& d1, const Date& d2)
{
	return (d1>d2) || (d1==d2);
};



++X & X++
// ++first = increment first .. then assign .. ++last = assign first , increment after


Date& operator++(); //FUNCTION PROTOTYPE

Date& Date::operator++()
{
	addDay(true);
	return *this;
}



//LESS EFFICIENT
//  Date++     "Dummy value"
//Always include dummy value in post fix
Date operator++(int);

Date operator++(int)
{
	Date ret = *this;
	addDay(true);
	return ret;
}