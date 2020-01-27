#pragma once
#include <iostream>
#include <vector>

#include "Hero.h"
#include "Hero_Manager.h"
#include "Player.h"
#include "Player_Manager.h"
#include "Heroes_and_Players.h"

using namespace std;

class Teams
{
public:
	Hero_Manager hm; Player_Manager pm;
	
	//vector<Hero>& hero; vector<Player>& player; 

	vector<Heroes_and_Players> Green_Team;
	vector<Heroes_and_Players> Orange_Team;

	
	//I can't understand how to make random. So I push players and heroes in order
	void Create_Teams(vector<Player>& Players, vector<Hero>& Heroes)
	{
		for (size_t i = 0; i < 10; i++)
		{
			Heroes_and_Players heroes_and_players = Heroes_and_Players(Players[i], Heroes[i]);
			if (i < 1)
			{
				cout << "           **********Green Team**********" << endl;
			}
			else if (i == 5 )
			{
				cout << "           **********Orange Team**********" << endl;
			}
			if (i < 5)
			{	
				Green_Team.push_back(heroes_and_players);
				Show_Teams(Green_Team[Green_Team.size() - 1].player, i, Green_Team[Green_Team.size() - 1].hero);
			}
			else
			{
				Orange_Team.push_back(heroes_and_players);
				Show_Teams(Orange_Team[Orange_Team.size() - 1].player, i, Orange_Team[Orange_Team.size() - 1].hero);
			}
			
		}
	}

	Player player;
	Hero hero;

	void Show_Teams(Player player,int i, Hero hero)
	{
		cout << "Player " << i << endl;
 		player.Get_Player();
		cout << "Hero " << i << endl;
		hero.Get_Heroes();
	}
};
