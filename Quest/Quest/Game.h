#pragma once

#include <iostream>
#include <windows.h>

#include "Map.h"
#include "Player.h"
#include "Enemy.h"
#include "enum.h"

using namespace std;
//---------------------------------------------------------------------------------------
class Game
{
	Player* player;
	vector<GameObject*> staticObjects;
	vector<Enemy*> enemies;

	Game();
	Position placeChecker();
public:
	static Game& get();

	void Draw();

	Player* getPlayer();

	virtual void scanMap();
};
//---------------------------------------------------------------------------------------