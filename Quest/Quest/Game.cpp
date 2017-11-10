#include "Game.h"
//---------------------------------------------------------------------------------------
Game::Game()
{
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
		
		skel = new Skeleton(dam, pos, hp, cooldown);
		enemies.push_back(skel);
	}
}
//---------------------------------------------------------------------------------------
Position Game::placeChecker()
{
	Position pos;
	while (true)
	{
		pos.x = MRand(1, 88);
		pos.y = MRand(1, 29);

		if (Map::get().getCell(pos.y, pos.x) != MapCell::Wall)
			return pos;
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
//	SetConsoleCursorPosition(handle, { 0,0 });



	for (int i = 0; i < Map::get().height; i++)
	{
		for (int j = 0; j < Map::get().width; j++)
		{
			if (Map::get().getCell(i, j) == MapCell::Empty)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}
//---------------------------------------------------------------------------------------
Player* Game::getPlayer() { return this->player; }
//---------------------------------------------------------------------------------------
Skeleton* Game::getSkeleton() { return this->skel; }
//---------------------------------------------------------------------------------------
void Game::drawPlayer()
{
	SetCoord(player->getPos().x, player->getPos().y);
	cout << '@';
}
//---------------------------------------------------------------------------------------
void Game::drawSkelet()
{
	for (int i = 0; i < enemies.size(); i++)
	{
		SetCoord((short)enemies[i]->getPos().x, (short)enemies[i]->getPos().y);
		cout << 'S';
	}
}
//---------------------------------------------------------------------------------------
void Game::skeletMove()
{
	int dir = 0;

	for (int i = 0; i < enemies.size(); i++)
	{
		dir = MRand(0, 3);
		enemies[i]->move(Direction(dir));
	}
}
//---------------------------------------------------------------------------------------