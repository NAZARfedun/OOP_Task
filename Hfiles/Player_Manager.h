#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

using namespace std;

class Player_Manager
{
public:

	vector <Player> Players;
	void Create_Palyers()
	{	
		vector <string> player_nicknames = { "Brock", "Lucy", "Endy", "Rick", "Mandol", "Dany", "Snow", "Stark", "Lanister", "Witcher" };

		for (size_t i = 0; i < player_nicknames.size(); i++)
		{
			Player player = Player(i + 1, 1000, player_nicknames[i]);

			Players.push_back(player);
		}
	}

	void Show_Players()
	{
		for (size_t i = 0; i < Players.size(); i++)
		{
			Players[i].Get_Player();
		}
	}

	Player Find_Palyer_by_Nickname(string Name)
	{
			for (size_t i = 0; i < Players.size(); i++)
			{
				if (Players[i].Nickname == Name)
				{
					return Players[i];
				}
			}
	}

	//There is one problem. If I Enter for example "Lady Gaga" I will see only "Lady" (without "Gaga")
	Player Change_Nickname(string Name)
	{	
			for (size_t i = 0; i < Players.size(); i++)
			{
				if (Players[i].Nickname == Name)
				{
					cout << "Correct entering nickname.\n";
					cout << "Enter new nickname to this player: ";
					cin >> Name;
					Players[i].Nickname = Name;
					cout << "Player's parameters with new nickname:" << endl;
					return Players[i];
				}
			}
	}

	Player Find_Player_by_ID(int ID)
	{
		for (size_t i = 0; i < Players.size(); i++)
		{
			if (Players[i].ID == ID)
			{
				return Players[i];
			}
		}
	}
};