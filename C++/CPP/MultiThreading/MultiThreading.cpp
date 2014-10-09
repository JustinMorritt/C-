Multi-Threading 

Program: file that can start a process 
Process:  Running software
Thread: A sequence of execution of instructions.

How We Multi Thread : Different for every OS ... we are discussing the windows .

Function to create a thread:

//CREATE THESE PROTOTYPES
DWORD = unsigned long
DWORD WINAPI InThread(void*);

HANDLE hInThread = CreateThread(NULL, 0 , InThread, &inPass, &inThreadID);  //Security Descriptors
		hInThread = like a pointer       0 = Stack Size , Pointer To a function(InThread) ,  inPass = paramaters   , &inThreadID = an alias for the thread

if(inThreadID == 0)
{
	cerr << " Could not create thread." << endl
	return 1;
}


sleeping a thread .. 

Circular Buffer

"Singing Frog Bug"
Race Condition: Where you race over the limits of data into some invalid Data
--a race condition happens tho threads acccesing the same variable , other thread changes it 
  one thread tries to access it and it crashes.

  Multi threading Primitives  :Structures that allow multithreading to not race condition
  
  Windows: MUTEX  "The Mack Truck of Windows" 
	--Mutual Exclusive  Execution
	
HANDLE hMutex 
	hMutex = CreateMutex(NULL, FALSE, "DemoMutex")
	if(hMutex == NULL)
	
WaitForMultipleObjects(2 , hThreads, TRUE, INFINITE);  TRUE uppercase (win32 thing)


DWORD waitResult = 
Release Mutex (at end)

DONT USE MUTEX uNLESS YOU HAVE TO ... Its a heavy weight ..




//THESE ARE LIGHTWEIGHT    --- THE OS TAKES CARE OF THAT PART Of THE CRITICAL SECTION
//genuinely make as Many threads as you have cores..
friend DWORD WINAPI PhilosopherThread(LPVOID lpParameter);

2nd MAJOR CONDITION IN MULTI THREADING  : 

DEADLOCK : nothing gets done , process hangs.. 
fix this by using a primitive    CRITICAL_SECTION


CRITICAL_SECTION _cs;
InitializeCriticalSection(&_cs);

//If you dont delete will hang, 
//This is RAII
DeleteInitializeCriticalSection(&_cs);

EnterCriticalSection(&_cs);
LeaveCriticalSection(&_cs);
	