- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment19.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
    int numb1 is assigned askForInt();
		Output numb1 with ShowBits ();
    int numb2 is assigned askForInt();
		Output numb2 with ShowBits ();
	int a, b , temp;

	a is assigned the bits of numb1 &(bitwise) numb2 
	b is assigned the bits of numb1 ^(Xor) numb2 

	Loop while the bits of a != 0
		perform a Bitwise left shift assign to a  ( <<= )
		the temp value is assigned the bits of b Xor a ( ^ )
		a is now assigned the value of the bit wise operation & for a and b
		b will now be assigned the value of temp.
	end loop
	int dx = b; assign the resulting int dx the value of b
	Show the Bits of The result using ShowBits();
end

3)Accomplishments*****************************************************************
	This assignment helped me understand the bitwise operations. By using these operations you can 
affect the bits of a number underneath the hood. By assigning an int to the & bits and the Xor bits,
one can also shift the bits to the left and perform and addition of two bit patterns.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .