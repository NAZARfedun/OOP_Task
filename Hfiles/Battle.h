#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "Hero.h"
#include "Player.h"
#include "Hero_Manager.h"
#include "Hero_Manager.h"
#include "Heroes_and_Players.h"
#include "Teams.h"

using namespace std;



class Battle
{
public:

	Hero hero;
	Battle(Hero& hero)
	{
		this->hero = hero;
	}
	/*just Fun*/void Start_Time()
	{
		cout << "Fight started at: ";
		for (int i = 0; i < 1; i++)
		{
			i = rand() % 30 + 1;
			if (i < 10)
			{
				cout << "0" << i << ".";
			}
			else
			{
				cout << i << ".";
			}
			for (int j = 0; j < 1; j++)
			{
				j = rand() % 12 + 1;
				if (j < 10)
				{
					cout << "0" << j << ".";
				}
				else
				{
					cout << j << ".";
				}
				
			}
			for (int k = 0; k < 1; k++)
			{
				k = rand() % 2000 + 3000;
				cout << k;
			}
		}
		cout << endl << "Time: ";
		for (int i = 0; i < 1; i++)
		{
			i = rand() % 24 + 1;
			if (i < 10)
			{
				cout << "0" << i << ":";
			}
			else
			{
				cout << i << ":";
			}
			for (int j = 0; j <	1; j++)
			{
				j = rand() % 60 + 1;
				if (j < 10)
				{
					cout << "0" << j << ":";
				}
				else
				{
					cout << j << ":";
				}
				for (int k = 0; k < 1; k++)
				{
					k = rand() % 60 + 1;
					if (k < 10)
					{
						cout << "0" << k;
					}
					else
					{
						cout << k;
					}
				}
			}
		}
		cout << endl;
	}
	void Fighting(vector<Hero>& Heroes)
	{
		/*int start = clock();
		int end = clock();
		
		cout << "Beginning of the game: " << start << endl;*/

		int Green_HP = 0, Green_Damage = 0;
		int Orange_HP = 0, Orange_Damage = 0;
		for (size_t i = 0; i < 10; i++)
		{
			Battle battle = Battle(Heroes[i]);
			if (i < 5)
			{
				Green_HP += Heroes[i].Hero_HP;
				Green_Damage += Heroes[i].Hero_Damage;
			}
			else
			{
				Orange_HP += Heroes[i].Hero_HP;
				Orange_Damage += Heroes[i].Hero_Damage;
			}
		}

		if (Green_HP - Orange_Damage > Orange_HP - Green_Damage)
		{
			cout << "Green Wins!" << endl;
		}
		else if (Orange_HP - Green_Damage > Green_HP - Orange_Damage)
		{
			cout << "Orange Wins!" << endl;
		}
		else if (Orange_HP - Green_Damage == Green_HP - Orange_Damage)
		{
			cout << "Nobody wins. TIE!" << endl;
		}

		/*int end_of_the_game = ((end - start) / CLOCKS_PER_SEC) / 60;*/
		cout << "How long has the game been going: " << clock()/1000.0 << endl;
	}
};
