#pragma once

#include <iostream>

#include "Map.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;

//---------------------------------------------------------------------------------------
class Game
{
	Player* player;
	vector<GameObject*> staticObjects;
	vector<Enemy*> enemies;

	Game()
	{
		Map::get();
		player = new Player;
	}
public:
	static Game& get()
	{
		static Game game;
		return game;
	}

	void Draw();

	Player* getPlayer() { return player; }
};
//---------------------------------------------------------------------------------------