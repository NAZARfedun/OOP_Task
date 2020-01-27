#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:
	string Hero_Name;
	int Hero_HP;
	int Hero_Damage;
	int Hero_Speed;

	Hero() {}
	Hero(string Hero_Name, int Hero_HP, int Hero_Damage, int Hero_Speed)
	{
		this->Hero_Name = Hero_Name;
		this->Hero_HP = Hero_HP;
		this->Hero_Damage = Hero_Damage;
		this->Hero_Speed = Hero_Speed;
	}

	void Get_Heroes()
	{
		cout << endl << "*************************" << endl;
		cout << "Hero's Name: " << Hero_Name << endl;
		cout << "Hero's HP: " << Hero_HP << endl;
		cout << "Hero's Damage: " << Hero_Damage << endl;
		cout << "Hero's Speed: " << Hero_Speed << endl;
		cout << "*************************" << endl;
	}
};
