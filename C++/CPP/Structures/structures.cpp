/*

Turing complete Language:

1/   Sequence of execution.
	Through the order of statements
	
2/   Selection: execute a block of code, based on some truth condition.
	through if statements and switch constructs (another we will talk about)
	
3/   Iteration: execute a block of code repeatedly, until condition is met.

for loop, while loop, and the do while loop


*/

#include<iostream>
#include<string>

int main()
{




//Finicky Counter**********(BREAK AND CONTINUE STATEMENTS)*******************

int count = 0;
while(true)
	{
		count += 1;
		//end loop if greater then 10
		if(count > 10)
		{
		break;
		}
		//skip the number 5
		if(count==5)
		{
		continue;	 //Stop current Iteration of the loop && go back to top.
		}
		std::cout << count << std::endl;
	}







// *************DO LOOP****************
/*
char again;
do
{
std::cout << "\n**Played an exciting game**";
std::cout << "\nDo you want to play again ? (y/n): ";
std::cin >> again;

}while(again == 'y');

std::cout << "\nOkay, Bye. ";
*/




// *************WHILE LOOP****************
/*
char again = 'y';
while(again == 'y')
{
	std::cout << "\n**Played an exciting game!**";
	std::cout <<"\nDo you want to play again? (y/n) : ";
	std::cin >> again;
}
std::cout << "\nOkay, Bye!";
*/





/*
std::cout << "Difficulty Levels \n\n";
std::cout << "1 -- Easy \n";
std::cout << "2 -- Normal \n";
std::cout << "3 -- Difficult \n";

int choice;
std::cin >> choice;

switch (choice)
{
	case 1:
		std::cout << "You Picked Easy. \n";
		break;
	case 2:	
		std::cout << "You Picked Normal. \n";
		break;
	case 3:	
		std::cout << "You Picked Difficult. \n";
		break;
	default:
		std::cout << "Bad Choice Moron!. \n";	
		break;

}
*/









/*
int score;
std::cout << " enter score: ";
std::cin >> score;
if(score >= 1000)
{
std::cout << "you scored 1k + \n";
}
else
{
	if(score >=500)
		{
	std::cout << "you scored 500 + \n";
		}
	
		else
		{
		if(score >=250)
			{
			std::cout << "you scored 500 + \n";
			}
		
			else
			{
				if(score <250)
				{
				std::cout << " LAMER";
				}
			}
		}
}
*/




/*	if(true)
	{
	std::cout << "This is always displayed. \n\n";
	}
	int score = 1000;

	if(score)   //or if (score !=0)
	{
	std::cout << "Atleast you didnt score 0.\n";
	}
	if(score>=250)
	{
		std::cout << "You scored 250 or more good job \n";
	}
	if(score>=500)
	{
		std::cout << "You scored 500 or more great job \n";
		if(score >= 1000)
		{
		std::cout << "you scored 1000 or more. IMPRESSIVE \n";
		}
	}*/

	return 0;
}