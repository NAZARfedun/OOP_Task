// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string> //чтобы юзать тип string. Этот тип создан на базе char
#include <clocale>//нужна для команды setlocale
#include <Windows.h>//нужна для команд SetConsole...
#include <stdio.h>//для функции gets()
#include <fstream>//для работы с файлами(записывать, создавать файл и работать с ними)
#include <cmath>//для математических операций
#include <iomanip>// Needed to do formatted I/O
#include <map>//для использования контейнера map

#include "Player.h"
#include "Player_Manager.h"
#include "Hero.h"
#include "Hero_Manager.h"
#include "Teams.h"
#include "Battle.h"

using namespace std;

//IF I ENTER SOMETHING WRONG THE CODE WILL BE CLOSED
int main()
{
	srand(time(NULL));
	//                                      PLAYER_MANAGER
	Player_Manager Player_Manager;

	//CREATING PLAYERS AND OUTPUT THEM
	cout << "                                 List of Players\n";
	Player_Manager.Create_Palyers();
	Player_Manager.Show_Players();

	//SEARCHING PLAYER BY THE NICKNAME 

	
	string Player_Name0;
	int choice = 4;
	Player player;
	
	while (choice != 1 && choice != 0)
	{
		cout << "Would you like to find Player's parameters by his/her nickname(1 - yes, 0 - no)? ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter Player's nickname which parameters you wanna find: ";
			cin >> Player_Name0;
			player = Player_Manager.Find_Palyer_by_Nickname(Player_Name0);
			player.Get_Player();
			break;
		case 0:
			cout << "You decided not to search Player's parameters" << endl;
			break;
		default:
			cout << "Incorrect Entering" << endl;
			break;
		}
	}
	
	
	//SEARCHING PLAYER BY ID

	
	int Player_ID;
	int choice1 = 3;
	while (choice1 != 1 && choice1 != 0)
	{
		cout << "Would you like to find Player's parameters by his/her ID(1 - yes, 0 - no)? ";
		cin >> choice1;
		switch (choice1)
		{
		case 1:
			cout << "Enter Player's ID which parameters you wanna find: ";
			cin >> Player_ID;
			player = Player_Manager.Find_Player_by_ID(Player_ID);
			player.Get_Player();
			break;
		case 0:
			cout << "You decided not to search Player's parameters" << endl;
			break;
		default:
			cout << "Incorrect Entering" << endl;
			break;
		}
	}
	

	
	//GANGING PLAYER'S NICKNAME

	
	string Player_Name1;
	int choice2 = 2;
	//    MY CODE DOESN'T WORK AFTER THIS COMMENTED PART. I DON'T KNOW WHY
	//do
	//{
	//	player = Player_Manager.Change_Nickname(Player_Name1);
	//	player.Get_Player();
	//} while (Player_Name1 != "0");
	while (choice2 != 1 && choice2 != 0)
	{
		cout << "Would you like to change somebody's Player's name(1 - yes, 0 - no)? ";
		cin >> choice2;
		switch (choice2)
		{
		case 1:
			cout << "Enter Player's nickname which nick you wanna change: ";
			cin >> Player_Name1;
			player = Player_Manager.Change_Nickname(Player_Name1);
			player.Get_Player();
			break;
		case 0:
			cout << "You decided to change nothing" << endl;
			break;
		default:
			cout << "Incorrect entering" << endl;
			break;
		}
	}
	

	
	//                                      HERO_MANAGER

	Hero_Manager Hero_Manager;

	//CREATING AND OUTPUT HEROES

	
	cout << "                                 List of Heroes\n";
	Hero_Manager.Create_Heroes();
	Hero_Manager.Show_Heroes();
	

	//SEARCHING HERO BY THE NAME

	
	string Hero_Name0;
	int choice3 = 5;
	Hero hero;

	while (choice3 != 1 && choice3 != 0)
	{
		cout << "Would you like to find Hero's parameters by his/her name(1 - yes, 0 - no)? ";
		cin >> choice3;
		switch (choice3)
		{
		case 1:
			cout << "Enter the Hero's name: ";
			cin >> Hero_Name0;
			hero = Hero_Manager.Find_Hero_by_the_Name(Hero_Name0);
			hero.Get_Heroes();
			break;
		case 0:
			cout << "You decided not to search Hero's parameters by his/her name" << endl;
			break;
		default:
			cout << "Incorrect entering" << endl;
			break;
		}
	}
	
	
	//DELETING HERO BY NAME

	//  EVERYTHING IS WORKING!!!
	string Hero_Name1;
	int choice4 = 6;
	while (choice4 != 1 && choice4 != 0)
	{
		cout << "Would you like to delete your Hero by his/her Name(1 - yes, 0 - no)? ";
		cin >> choice4;

		switch (choice4)
		{
		case 1:
			cout << "Enter Hero's name which you wanna delete: ";
			cin >> Hero_Name1;
			hero = Hero_Manager.Delete_Hero_by_Name(Hero_Name1);
			cout << "                                 List of Heroes without this Hero\n";
			Hero_Manager.Show_Heroes();
			break;
		case 0:
			cout << "You decided not to delete hero" << endl;
			break;
		default:
			cout << "Incorrect entering" << endl;
			break;
		}
	}
	

	//ADDING NEW HERO
	int choice5 = 7;
	while (choice5 != 1 && choice5 != 0)
	{
		cout << "Would you like to add new hero with other Name(1 - yea, 0 - no)? ";
		cin >> choice5;
		string Hero_Name;
		int Hero_HP = rand() % 101; int Hero_Damage; int Hero_Speed = rand() % 501;
		switch (choice5)
		{
		case 1:
			cout << "Enter a name for your new Hero: ";
			cin >> Hero_Name;
			Hero_Manager.Add_new_Hero(Hero_Name, Hero_HP, Hero_Damage = rand() % 1001, Hero_Speed);
			break;
		case 0:
			cout << "You Decided not to create new Hero." << endl;
			break;
		default:
			cout << "Incorrect entering" << endl;
			break;
		}
	}

	Teams teams;
	teams.Create_Teams(Player_Manager.Players, Hero_Manager.Heroes);
	
	Battle battle(hero);
	battle.Fighting(Hero_Manager.Heroes);
	//battle.Fighting(Player_Manager.Players, Hero_Manager.Heroes);
	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
