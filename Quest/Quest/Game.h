#pragma once

#include "Functions.h"
#include "Skeleton.h"
#include "Player.h"

using namespace std;
//---------------------------------------------------------------------------------------
class Game : public Skeleton
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