#pragma once

#include <iostream>
#include <windows.h>

#include "Map.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;

//---------------------------------------------------------------------------------------
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

void noCursor(bool visible)
{
	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = visible; // set the cursor visibility
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
//---------------------------------------------------------------------------------------
class Game
{
	Player* player;
	vector<GameObject*> staticObjects;
	vector<Enemy*> enemies;

	Game();
public:
	static Game& get();

	void Draw();

	Player* getPlayer();

	virtual void scanMap();
};
//---------------------------------------------------------------------------------------