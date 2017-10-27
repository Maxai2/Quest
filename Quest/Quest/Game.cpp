#include "Game.h"

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
