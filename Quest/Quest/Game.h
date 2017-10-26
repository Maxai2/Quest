#pragma once

#include "Map.h"
#include "Player.h"
#include "Enemy.h"

//---------------------------------------------------------------------------------------
class Game
{
	//Map& map;
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

	void Draw()
	{
		for (int i = 0; i < Map::get().height; i++)
		{
			for (int j = 0; j < Map::get().width; j++)
			{
				if (player->getPos().x == j && player->getPos().y == i)
					cout << "@";
				else
					if (Map::get().getCell(i, j) == MapCell::Empty)
						cout << " ";
					else
						cout << "*";
			}
			cout << endl;
		}
	}

	Player* getPlayer()
	{
		return player;
	}
};
//---------------------------------------------------------------------------------------