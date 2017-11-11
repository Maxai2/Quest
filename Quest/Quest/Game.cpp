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
	RenderWindow window(VideoMode(700, 500), "Quest");

	Image heroImage;
	heroImage.loadFromFile("Textures/Jake_Shine.png");
	heroImage.createMaskFromColor(Color(255, 255, 255));

	Texture heroTexture;
	heroTexture.loadFromImage(heroImage);
	
	//Texture heroTexture;
	//heroTexture.loadFromFile("Textures/Dino.png");
	
	Sprite heroSprite;
	heroSprite.setTexture(heroTexture);
	heroSprite.setTextureRect(IntRect(213, 135, 34, 54.75));
	//heroSprite.setPosition(50, 25);

	Clock clock;
	//float teleportTime = 0;

	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time/800;
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		//teleportTime += time;

		//if (teleportTime > 3000)
		//{
		//	heroSprite.setPosition(0, 120);
		//	teleportTime = 0;
		//}

		if (Keyboard::isKeyPressed(Keyboard::S)) 
		{ 
			heroSprite.move(0, 0.1 * time); 
			heroSprite.setTextureRect(IntRect(212, 25, 34, 54.75)); 
		} 
		else if (Keyboard::isKeyPressed(Keyboard::A)) 
		{ 
			heroSprite.move(-0.1 * time, 0);
			heroSprite.setTextureRect(IntRect(213, 81, 34, 54.75)); 
		} 
		else if (Keyboard::isKeyPressed(Keyboard::D)) 
		{ 
			heroSprite.move(0.1 * time, 0);
			heroSprite.setTextureRect(IntRect(213, 135, 34, 54.75)); 
		} 
		else if (Keyboard::isKeyPressed(Keyboard::W)) 
		{ 
			heroSprite.move(0, -0.1 * time);
			heroSprite.setTextureRect(IntRect(213, 187, 34, 54.75)); 
		} 

		window.clear();
		window.draw(heroSprite);
		window.display();

		cout << time << "\n";
	}

	//for (int i = 0; i < Map::get().height; i++)
	//{
	//	for (int j = 0; j < Map::get().width; j++)
	//	{
	//		if (Map::get().getCell(i, j) == MapCell::Empty)
	//			cout << " ";
	//		else
	//			cout << "*";
	//	}
	//	cout << endl;
	//}
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