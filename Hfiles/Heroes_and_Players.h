#pragma once
#include <iostream>
#include <vector>

#include "Hero.h"
#include "Player.h"

using namespace std;

class Heroes_and_Players : Player, Hero
{
public:
	//Here I merge Player with Hero
	Hero hero; 
	Player player;
	Heroes_and_Players(Player& player, Hero& hero)
	{
		this->player = player;
		this->hero = hero;
	}
	
};
