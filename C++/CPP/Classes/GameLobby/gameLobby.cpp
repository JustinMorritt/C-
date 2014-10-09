#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player(const string& name = "");
	string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);
	
private:
	string m_Name;
	Player* m_pNext; //pointer to next person in list.


};

Player::Player(const string& name) : m_Name(name), m_pNext(0)  //DEFAULT SETS PLAYERS NEXT TO 0 
{

}

string Player::GetName() const
{
	return m_Name;
}

Player* Player::GetNext() const
{
	return m_pNext;
}

void Player::SetNext(Player* next)
{
	m_pNext = next; 			//SETS THE NEW PLAYERS ADDRESS IN AS the next player
}


class Lobby
{
	friend ostream& operator<<(ostream& os, const Lobby& aLobby); // declare

public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void Clear();
	
private:
	Player* m_pHead;  	//Player pointer to an m_pHead (front of the list)
};

Lobby::Lobby() : m_pHead(0)   //INITIALIZES THE HEAD TO 0 , NONE in list so far 
{
}

Lobby::~Lobby()
{
	Clear();
}

void Lobby::AddPlayer()
{
	//create a new player node
	cout << "Please enter the name of the new player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);	//creates a Player Pointer called pNewPlayer 
											//and assigns it to a new player object with the passed in new name.
	
	//if list is empty, make head of list this new player 
	
	if(m_pHead == 0)
	{
		m_pHead = pNewPlayer;
	}
	
	//otherwise find the end of the list and add the player there
	
	else
	{
		Player* pIter = m_pHead;
		while(pIter -> GetNext() !=0)
		{
			pIter = pIter -> GetNext();				//ITERATES THROUGH ASSIGNING THE ADDRESS UNTIL no more next players..
		}
		pIter -> SetNext(pNewPlayer);				//SETS THE NODE IT LANDS ON PNEXT TO THE NEW PLAYER...*****THIS SIMULATES A LIST*****
	
	}

}

void Lobby::RemovePlayer()
{
	if(m_pHead == 0 )
	{
		cout << "THe game lobby is empty , noone to remove!\n\n";
	}
	else
	{
		Player* pTemp = m_pHead;
		m_pHead = m_pHead -> GetNext();
		delete pTemp;  // THIS DELETES THE ORIGINAL m_pHEAD by assigning it to a temp pointer.
	}
}

void Lobby::Clear()
{
	while(m_pHead !=0)
	{
		RemovePlayer();
	}
}

ostream& operator<<(ostream& os, const Lobby& aLobby)  //OVERLOADING THE << operator to display a Lobby object by sending it to COUT
{
	Player* pIter = aLobby.m_pHead;
	os << "\nHeare's who's in the game lobby:\n";
	if(pIter == 0)
	{
		os << "The lobby is empty.\n";
	}
	else
	{
		while(pIter !=0)
		{
			os << pIter -> GetName() << endl;
			pIter = pIter -> GetNext();
		}
	}
	return os;
}


int main()
{
	Lobby myLobby;
	int choice;
	
	do
	{
		cout << myLobby;
		cout << "\nGame Lobby\n";
		cout << "0 - Exit the program.\n";
		cout << "1 - Add a player to the lobby.\n";
		cout << "2 - Remove a player from the lobby.\n";
		cout << "3 - Clear the Lobby.\n";
		cout << endl << "Enter choice: ";
		cin >> choice;
		
		switch(choice)
		{
		case 0: cout << "Good-Bye!\n";	break;
		case 1: myLobby.AddPlayer();	break;
		case 2: myLobby.RemovePlayer();	break;
		case 3: myLobby.Clear();	break;
		default: cout << "That was not a valid choice...\n";	break;
		}
	}while(choice !=0);
	
return 0;
}