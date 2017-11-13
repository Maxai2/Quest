#include "Game.h"

//---------------------------------------------------------------------------------------
Game::Game()
{
	Map::get();

	player = new Player;
	
	for (int i = 0; i < 16; i++)
	{
		Damage dam;
		dam.max = 20;
		dam.min = 5;
	
		Position pos = placeChecker();
		int hp = 100;
		int cooldown = 0;
		
		Skeleton *skel = new Skeleton(dam, pos, hp, cooldown);
		enemies.push_back(skel);
	}
}
//---------------------------------------------------------------------------------------
Game::~Game()
{
	delete player;

	for (int i = 0; i < enemies.size(); i++)
	{
		Enemy *e = enemies.at(i);
		delete e;
	}
		
	enemies.clear();
}
//---------------------------------------------------------------------------------------
Position Game::placeChecker()
{
	Position pos;
    //for (int i = 0; i < MapSize::height - 2; i++)
    //{
    //    for (int j = 0; j < MapSize::width - 2; j++)
    //    {
    //        cout << Map::get().GetCell(i, j);
    //    }
    //    cout << endl;
    //}
	while (true)
	{
		pos.x = MRand(1, MapSize::width - 2);
		pos.y = MRand(1, MapSize::height - 2);


		if (Map::get().isEmptyCell(pos.y, pos.x))
			return pos;
	}
}
//---------------------------------------------------------------------------------------
Game & Game::get()
{
	static Game INSTANCE;
	return INSTANCE;
}
//---------------------------------------------------------------------------------------
void Game::Draw()
{
	for (int i = 0; i < Map::get().height; i++)
	{
		for (int j = 0; j < Map::get().width; j++)
		{
			char c = Map::get().GetCell(i, j);

			if (c == ' ')  
				MySFML::get().getSpriteMap().setTextureRect(IntRect(0, 415, 30, 34));
			else
				MySFML::get().getSpriteMap().setTextureRect(IntRect(0, 512, 30, 34));

			//if (c == 0)
			//	cout << " ";
			//else
			//	cout << "*";

			MySFML::get().getSpriteMap().setPosition(j * 30, i * 34);
			MySFML::get().getWindow().draw(MySFML::get().getSpriteMap());
		}
		//cout << endl;
	}
}
//---------------------------------------------------------------------------------------
Player* Game::getPlayer() { return this->player; }
//---------------------------------------------------------------------------------------
void Game::drawSkelet()
{
	for (int i = 0; i < enemies.size(); i++)
		enemies[i]->Draw();
}
//---------------------------------------------------------------------------------------
void Game::skeletMove()
{
	int dir = 0;

	for (int i = 0; i < enemies.size(); i++)
	{
		dir = MRand(0, 3);
		enemies[i]->move(Direction(dir));
		enemies[i]->scanMap(Direction(dir), *getPlayer());
	}
}
//---------------------------------------------------------------------------------------
void Game::findEnemy()
{
    Position Ppos;
    Ppos = getPlayer()->getPos();

    for (int k = 0; k < enemies.size(); k++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                //if (Ppos.x - 1)
                //{

                //}
            }
        }
    }
}
//---------------------------------------------------------------------------------------