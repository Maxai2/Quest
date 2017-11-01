#include "Game.h"
//---------------------------------------------------------------------------------------
Game::Game() : Skeleton(damage, position, hp, cooldown)
{
	//Enemy* enemInd;
	noCursor(false);
	Map::get();
	player = new Player;
	for (int i = 0; i < 7; i++)
	{
		Damage dam;
		dam.max = 20;
		dam.min = 5;
		Position pos;
		pos = placeChecker();
		int hp = 100;
		int cooldown = 2;
		
		Skeleton skel(dam, pos, hp, cooldown);
		enemies.push_back(&skel);
	}
}
//---------------------------------------------------------------------------------------
Position Game::placeChecker()
{
	Position pos;
	while (true)//POS:
	{
		pos.x = MRand(1, 90);
		pos.y = MRand(1, 30);

		if (Map::get().getCell(pos.y, pos.x) != MapCell::Wall)
			return pos;
		//else
		//	goto POS;
	}
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
	SetConsoleCursorPosition(handle, { 0,0 });

	for (int i = 0; i < Map::get().height; i++)
	{
		for (int j = 0; j < Map::get().width; j++)
		{
			//if (player->getPos().x == j && player->getPos().y == i)
			//	cout << "@";
			//else
			//if (enemies.)
			//	cout << "S";
//			else
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
//void Game::scanMap()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		//enemies.
//	}
//}
//---------------------------------------------------------------------------------------