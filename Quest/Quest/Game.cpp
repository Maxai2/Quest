#include "Game.h"
//---------------------------------------------------------------------------------------
Game::Game()
{
	Enemy* enemInd;
	Map::get();
	player = new Player;
	for (int i = 0; i < 7; i++)
	{
		Damage dam;
		dam.max = 20;
		dam.min = 5;
		Position pos;
		pos = placeChecker();
		int hp = Character::getHp();
		
		Enemy enem(dam, pos, hp, cooldown);
		
	}
	//enemies.push_back(new Enemy);
}
//---------------------------------------------------------------------------------------
Position Game::placeChecker()
{
	bool check = false;
	Position pos;
	pos.x = MRand(1, 90);
	pos.y = MRand(1, 30);

	if (true)
	{
		
	}
	return pos;
}
//---------------------------------------------------------------------------------------
Game & Game::get()
{
	static Game game;
	return game;
}
//---------------------------------------------------------------------------------------
void Game::Draw()
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
//---------------------------------------------------------------------------------------
Player * Game::getPlayer() { return player; }
//---------------------------------------------------------------------------------------
void Game::scanMap()
{
	for (int i = 0; i < 4; i++)
	{

	}
}
//---------------------------------------------------------------------------------------