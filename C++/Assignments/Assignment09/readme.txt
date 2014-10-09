- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment09.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	Class Node (Friend class List)
		Assign Member functions(private)
			Node(const string  reference)
			Node(const Node reference named other) << copy constructor
			Node& Node operator=(const Node reference named other) << Overloaded assignment operator
			unsigned Count() const
			void Display()	const
	Assign Member variables(private)
			string _data
			Node* _pNext
			Node* _pPrev
	Class List
		Assign Member functions(public)
			List(const string  reference)
			List(const List reference other) <<Copy constructor
			List& List operator=(const List reference named other) << Overloaded assignment operator
			void PushFront(const string& data)
			void PushBack(const string& data)
			const string* Front const
			const string* Back const
			void PopFront
			void PopBack
			void Display const
			unsigned Size const
			bool IsEmpty const
			void Clear
		Assign Member variables(private)
			Node* _pFront;
			Node* _pBack;
	begin (Main)
		Create Vector named "quote"
		push_back all the lines into the vector.
		Create List named lst
		Start for loop (while less then quote vector size) ++in
			lst.PushFront(pass it the vector address at quote[i])
				Creates a new Node pointer p assigns it to a new Node(with data passed in)
					if List (isEmpty())
						set _pFront pointer to p
						set _pBack pointer to p
					else
						set p's -> _pNext to _pBack;
						_pBack pointer's -> _pPrev is assigned to p;
						_pBack's pointer is now assigned to p;
		lst.Display function
			displays *_data (whats stored at _pNext)
			cycles through to the next _pNext
		Create List named lst2(lst) passes it to copy constructor making it the same as lst
			cycles through the list other passed to the copy contructor(lst)
				while (p)
					creates a Node* n assigned to a new Node(*p) <-- passing the current address data to the Node copy constructor
						Node Copy constructor sets _data to a new string from the passed in data
					Assigns the pointers _pFront, _pBack, _pPrev, _pBack
		Displays lst2 with Display function (same display function, different addresses then lst)
		Create List named lst3
		Assign lst3 = lst2 passes it to Overloaded Assignment Operator function making it the same as lst2
			Very similar to copy constructor except returns *this
		Display lst3 with Display function
		Clear first list lst . 
		re-display lst2 to see that a Deep copy has occurred. 
			
end

3)Accomplishments*****************************************************************
	This assignment has been by far the hardest I've done yet. I really underestimated just how complex a
copy constructor can get with multiple pointers. This was the ultimate test to see if I could get Deep copy
Functioning. After many days of many hours and many frustrated nights I finally achieved a working deep copy.
The Overloading assignment operator wasn't as bad to figure out , as I had all the ground work layed out. I really
got a feel for deep copy and how pointers to classes work. Just when I was getting the most frustrated with errors
and how it wasn't working for me it started to make more sense what I needed to do and I weeded out my problems.
I think the hardest part of the assignment was getting two class's to work together with creating new nodes by
passing back and forth data. It starts becoming a very complex maze at some point and you just need to step back
and take a breather. In the end I completed the task of performing a deep copy in various ways. Being one of the 
Big three concepts this is crucial to understand and become comfortable with.  
	


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:Headers,Readme,Makefile,UnixVersions, .sln file, .vcxproj file .
I want to become more proficient with overloading assignment operators. 