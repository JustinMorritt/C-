- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment13.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	Abstract Class Weapon
		Assign Member functions(public)
			Virtual void Use()
			Virtual void Withdraw()
			Virtual void Load()
	Class Sword
		Assign Member functions(public)
			Sword Constructor (defaults damage = 10 , withdrawn = true)
			void Use()
			void Withdraw()
		Assign Member variables(private)
			int damage
			bool withdrawn
	Class Crossbow
		Assign Member functions(public)
			Crossbow Constructor (defaults damage = 20 , loaded = true)
			void Use()
			void Load()
		Assign Member variables(private)
			int damage
			bool loaded
	begin (Main)
		Create Sword object named "sw"
		Create Crossbow object named "cb"
		Create a pointer to the base class Weapon* and assign it to the address of &sw(Sword)
		use the Weapon* pointer function -> Use()   (Use this function twice in a row)
			if(withdrawn)
				display "Sword used dealt:" << damage(10) << "damage."
				set boolean variable withdrawn to false
			else
				display "Sword needs to be withdrawn" 
		use the pointer p function -> Withdraw()  (Use this function twice in a row)
			if(withdrawn)
				display "Sword already withdrawn"
			else
				display "Sword being Withdrawn"
				boolean withdrawn = true
		use the Weapon* pointer function -> Use()(Use this function twice in a row) (shows that it has been withdrawn)
		Re-Assign the Weapon* pointer to the address of the &cb (Crossbow object)
		use the pointer p function -> Use()   (Use this function twice in a row)
			if(loaded)
				display "Crossbow used dealt:" << damage(20) << "damage."
				set boolean variable loaded to false
			else
				display "Crossbow needs to be loaded"
		use the pointer p function -> Load()  (Use this function twice in a row)
			if(loaded)
				display "Crossbow already loaded"
			else
				display "Crossbow being loaded"
		use the Weapon* pointer function -> Use()(Use this function twice in a row) (shows that it has been re-loaded)
		
end

3)Accomplishments*****************************************************************
	I accomplished creating an abstract base class that hosted virtual functions for 
the classes that inherit from it. The classes that inherit from the base class host a couple variables separate from
the rest. This was a great example of using inheritance for virtual functions. I accomplished assigning a pointer of 
the base class to the address of an object that inherits from it. This is a great technique to use because it frees 
up space from the stack by using addresses instead of duplicating objects. This assignment helped me get a better insight
on the virtual function concept. 


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:Headers,Readme,Makefile,UnixVersions, .sln file, .vcxproj file .