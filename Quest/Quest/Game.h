#pragma once

#include "Functions.h"
#include "Player.h"
#include "Skeleton.h"
#include "MySFML.h"

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
	~Game();
	static Game& get();

	void Draw();
	void drawSkelet();
	void skeletMove();

    void findEnemy();

	Player* getPlayer();
};
//---------------------------------------------------------------------------------------