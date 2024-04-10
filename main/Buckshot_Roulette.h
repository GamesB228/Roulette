#pragma once

#include <iostream>
#include <windows.h>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;

class Buckshot_Roulette
{
protected:
	int WhichMove = 0;
	int pila = 0;
	int hp_p1;
	int hp_p2;
	bool naruchniky_p1 = false;
	bool naruchniky_p2 = false;
	int PreviousItem = 0;

	vector <int> bullets;
	vector <int> inventory_p1;
	vector <int> inventory_p2;
public:
	void bullet_chance();
	void hp_chance();
	void hp_lose(int x);
	void hp_add();
	void shot_opponent();
	void shot_himself();
	void prev_item();
	bool Game_over();
	void item_naruchniky();
	void item_chance();
	void item_interaction(int number);
	string item_name(int number);
	void Game_start();
	void Game_info();

};

