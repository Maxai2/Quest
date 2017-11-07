#pragma once

#include "Functions.h"
#include "Player.h"
#include "Skeleton.h"

//---------------------------------------------------------------------------------------
class Game
{
	Player* player;
	Skeleton* skel;
	vector<GameObject*> staticObjects;
	vector<Enemy*> enemies;

	Game();
	Position placeChecker();
public:
	static Game& get();

	void Draw();
	void drawPlayer();
	void drawSkelet();
	void skeletMove();

	Player* getPlayer();
	Skeleton* getSkeleton();
};
//---------------------------------------------------------------------------------------