#include "Game.h"
//---------------------------------------------------------------------------------------
Game::Game()
{
	Map::get();
	player = new Player;
	enemies.push_back(new Enemy);
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