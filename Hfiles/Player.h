#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Player
{
public: 
	int ID;
	int Rank;
	string Nickname;

	Player() {}
	Player(int ID, int Rank, string Nickname) 
	{
		this->ID = ID;
		this->Rank = Rank;
		this->Nickname = Nickname;
	}

	void Get_Player()
	{
		/*for (int i = 0; i < 10; i++)
		{
			cout << "Player" << i++ << endl;
		}*/
		cout << "\n*************************\n";
		cout << "Player's Nickname: " << Nickname << endl;
		cout << "Player's ID: " << ID << endl;
		cout << "Player's Rank: " << Rank << endl;
		cout << "*************************" << endl;
	}
};