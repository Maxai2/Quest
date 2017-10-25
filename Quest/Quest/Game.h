#pragma once

#include "Map.h"
#include "Player.h"
#include "Enemy.h"
//---------------------------------------------------------------------------------------
class Game
{
	Map& map;
	Player& player;
	vector<GameObject> staticObjects;
	vector<Enemy> enemies;
};
//---------------------------------------------------------------------------------------