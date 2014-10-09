//Tic Tac Toe ***************************ARRAYS


#include <iostream>



int main()
{

	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = {	{'O','X','O'},
									{' ','X','X'},
									{'X','O','O'}};
									
	std::cout << "Here's the tic-tac-toe board: \n\n";
	for(int i = 0; i < ROWS; ++i)
		{
		for(int j = 0; j < COLUMNS; ++j)
			{
			std::cout << board[i][j];
			}
		std::cout << std::endl;
		}
	std::cout << "\n'X' moves to the empty location. \n\n";
	board[1][0] = 'X';
	
	std::cout << "Now the tic tack toe board is:\n\n";
	for(int i = 0; i < ROWS; ++i)
		{
		for(int j = 0; j < COLUMNS; ++j)
			{
			std::cout << board[i][j];
			}
		std::cout << std::endl;
		}
	std::cout << "\n\n\n\t****** 'X' WINS !*********\n\n\n\n";
	
	
return 0;
}