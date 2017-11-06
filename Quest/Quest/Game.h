#pragma once

#include "Functions.h"
#include "Skeleton.h"
#include "Player.h"


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

	virtual void scanMap(Direction dir) override;

	Player* getPlayer();
	Skeleton* getSkeleton();
};
//---------------------------------------------------------------------------------------