#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "Hero.h"
using namespace std;

class Hero_Manager
{
public:
	vector <Hero> Heroes;

	void Create_Heroes()
	{
		vector <string> Hero_Names = { "Magnus", "Ursa", "Timbersaw", "Zeus", "Ember Spirit", "Elder Titan", "Medusa", "Winter Wyvern", "Axe", "Bristleback" };

		for (size_t i = 0; i < Hero_Names.size(); i++)
		{
			Hero hero = Hero(Hero_Names[i], rand() % 101, rand() % 1001, rand() % 501);
		
			Heroes.push_back(hero);
		}
	}

	void Show_Heroes()
	{
		for (size_t i = 0; i < Heroes.size(); i++)
		{
			Heroes[i].Get_Heroes();
		}
	}

	Hero Find_Hero_by_the_Name(string Name)
	{
		for (size_t i = 0; i < Heroes.size(); i++)
		{
			if (Heroes[i].Hero_Name == Name)
			{
				return Heroes[i];
			}
		}
	}

	Hero Delete_Hero_by_Name(string Name)
	{
		for (size_t i = 0; i < Heroes.size(); i++)
		{
			if (Heroes[i].Hero_Name == Name)
			{
				Heroes.erase(Heroes.begin() + i);
				return Heroes[i];
			}
		}
	}

	int Add_new_Hero(string Name, int HP, int Damage, int Speed)
	{
	
		for (size_t i = 0; i < Heroes.size(); i++)
		{
			if (Heroes[i].Hero_Name == Name)
			{
				return 0;
			}
		}
		Hero hero = Hero(Name, HP, Damage, Speed);
		hero.Get_Heroes();
		Heroes.push_back(hero);
		cout << "                                 Heroes' list with new hero\n";
		Show_Heroes();
	}
	
};
