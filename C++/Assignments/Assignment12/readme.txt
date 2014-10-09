- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the enemy.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
	Class Enemy
		Assign Member functions(public)
			Enemy Constructor (defaults damage = 10)
			void Attack() const
			void Taunt() const
		Assign Member variables(private)
			int damage
	Class Boss : public Enemy
		Assign Member functions(public)
			Boss Constructor (defaults int damage = 30 , int multiplier = 3)
			void Attack() const
			void SpecialAttack() const
			void Taunt() const
		Assign Member variables(private)
			int damage
			int multiplier
	begin (Main)
		Create Enemy object named "e"
		Create Boss object named "b"
		use Enemy e's Attack()
			displays " Enemy inflicts :"  << damage << "damage ";
		use Boss b's Attack()	
			displays " Boss inflicts :"  << damage << "damage ";
		use Boss b's SpecialAttack()
			displays " Boss inflicts :"  << (damageMultiplier * damage) << "damage ";
		use Boss b's Taunt()
			uses Enemy e's Taunt()
				displays "your mother was a hamster"
			displays " And your father smelled of elderberries " for Boss
end

3)Accomplishments*****************************************************************
	I accomplished getting more comfortable with inheritance. I also truly understand
how to set default arguments for the constructor now. These can be changed during the 
creation of an object or left the same for the default. This assignment has helped me
with my proficiency in creating classes with or without inheritance involved. I 
accomplished making my first program in Visual Studio 2013. This is a great asset to
building programs/games and I plan on making it second nature to use . 

4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included: Headers, Readme, Makefile, UnixVersions,
 .sln file, .vcxproj file.