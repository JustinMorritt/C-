Libraries

1)Templates exist in header files and header files arnt compiled . TCLAP
2)Static Library ,..  Windows(.lib)"also a header (.h)   .lib treated like obj file.
	-need header to describe whats in the .lib , 
	
*******	if file name is icluded in < header.h>  look for this file in the usual places
		echo %INCLUDE%  list of paths to the header files
		if file include = " header.h "  == current directory.
		echo %LIB%
		
Two ways to include a dll export
	-Explicit Linking -
	-Implicit Linking - Just Like a static library ..Sort of.   Mylib.dll  Mylib.lib
	
The usual Places for Dll's 
1) The directory that the .exe lives in . (debug)
2) The Processes current working directory. 
3) windows\System(32)
4) A directory in windows  \Windows\WOW64 "Windows on Windows"
5) It looks at all directories in the PATH environment variable (command line) echo %PATH%


Dynamic  -- Implicit linking like static Lib,  LoadLibrary(....)
Linking --  Explicit linking , specifying dll at runtime    GetProAddress(...)


Object Linking and Embedding:  "OLE"  -----Expanded to 
Component Object Model "COM"  ----- MyCOMObject.dll  , MyWebPlugin.ocx (rare, security hole only Internt ex)
---Component Object Manager
---C++ Interface - a c++ abstract class that is nothing but pure virtual functions.
	- Base class for all COM objects: IUnknown
How do you know where that file is located
--Stored in Hives
-- RegEdit / Classes Root / CLSID  - virtually gaurenteed to be unique
			- ClassID , InterfaceID, uuid, guid
			
void CRandGen::Release()
	{
		m_count--; 
		if(m_count == 0)
		{
			delete this; // if you are in a reference counted environment .. 
						 // std::string is reference counted ..
		}
	}
	
Direct X is all COM .. starts with I .. ends in a realese()
