- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment20.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	Main takes Arguments
		assign argument [1] (outFileText) to a char* 
		assign argument [2] (outFileText) to a char* 
		create an ifstream object using passing it the pointer from arg[1]
		create an ifstream object using passing it the pointer from arg[2]
		create a Map of string as the Key and unsigned as the variable.
		check if Infile fails
			"could not open" exit(1);
		check if Outfile fails to open.
			if it fails 
				Run the GetWordCount Function passing it the filename pointer and a reference to the map created
		else
		create an outFile using the Outfile pointer from the Main arguments.
			Run the GetWordCount Function passing it the filename pointer and a reference to the map created
			using an iterator iterate throught the entire map using an iterator.
		after displayed
	Close Infile
	Close OutputFile
end

GetWordCount Function ( char * pIn ,  map<string, unsigned>& map)
	Use the Infile Stream and iterate through it pulling each word out 
		Iterate throught the word converting it to upper and push back the letters to a temp string
		Use a map check and if the item is already on there then access the second ellement and increment it .
		otherwise 
			insert the String along with a number 1 into the map .
		end

	

3)Accomplishments*****************************************************************
	I accomplished building a map and inserting items into it while checking if the key existed.
This is a great exercise to manage objects, and gave me insight into the workings and benefits to a map.
I also used the most minimal approach to solving this assignment to keep efficiency up , while passing items
as references. I feel I have made it very far in the language c++ after completing this assignment in a few hours.
At one point this task would of taken days to complete but after having a deep understanding in c++, it makes
a massive difference.
 


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .