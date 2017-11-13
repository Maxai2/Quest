//#include <SFML/Graphics.hpp>
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include <conio.h>

#include "Game.h"

//---------------------------------------------------------------------------------------
void main()
{
	int key = 0;
	noCursor(false);
	srand(time(NULL));
	Clock clock;

	MySFML::get();

	//Game::get().getPlayer()->Draw();
	//Game::get().drawSkelet();
	//while (true)
	while (MySFML::get().getWindow().isOpen())
	{		
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;

		Event event;
		while (MySFML::get().getWindow().pollEvent(event))
		{
			if (event.type == Event::Closed)
				MySFML::get().getWindow().close();

            if (event.type == Event::KeyPressed)
            {
            	if (event.key.code == Keyboard::W)
                    Game::get().getPlayer()->move(Up);
            	else if (event.key.code == Keyboard::S)
                    Game::get().getPlayer()->move(Down);
            	else if (event.key.code == Keyboard::A)
                    Game::get().getPlayer()->move(Left);
            	else if (event.key.code == Keyboard::D)
                    Game::get().getPlayer()->move(Right);
            }
		}

		//if (_kbhit())
		//{
		//	key = _getch();
		//	Direction dir = GetDirection(key);
		//	Game::get().getPlayer()->move(dir);
		//}   
			
		//if (key == AttackDefence::AttackKey)
		//{
  //          Game::get().getPlayer()->attack();
		//}
		//else

		MySFML::get().getWindow().clear();
        Game::get().Draw();
		MySFML::get().getWindow().draw(MySFML::get().getSpriteHero());
		MySFML::get().getWindow().draw(MySFML::get().getSpriteDino());
		MySFML::get().getWindow().display();
		Sleep(100);
		
		//Game::get().skeletMove();

		//Sleep(100);
		//SetCoord({0, 32});
		//cout << "   ";
		//SetCoord({0, 32 });
		//cout << Game::get().getPlayer()->getHp();

		//if (Game::get().getPlayer()->getHp() == 0)
		//	break;
	}

	//SetCoord({ 0, 34 });
	//cout << "Game Over!" << endl;
	//system("pause");
}
//---------------------------------------------------------------------------------------
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//	sf::CircleShape shape(100.f);
//	shape.setFillColor(sf::Color::Green);
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//
//		window.clear();
//		window.draw(shape);
//		window.display();
//	}
//
//	return 0;
//}
//---------------------------------------------------------------------------------------
//#include <SFML/Graphics.hpp>
//#include <windows.h>
//#include <iostream>
//#include <time.h>
//
//using namespace sf;
//
//enum Cell { EMPTY, WALL };
//
//void print(Cell arr[10][10])
//{
//	system("cls");	
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			std::cout << arr[i][j];
//		}
//		std::cout << std::endl;
//	}
//}
//
//int main()
//{
//	srand(time(0));
//	RenderWindow window(VideoMode(500, 500), "Hello!");
//	Cell arr[10][10] = {};
//
//	for (int i = 0; i < 20; i++)
//	{
//		arr[rand() % 10][rand() % 10] = WALL;
//	}
//
//	Texture grasst;
//	grasst.loadFromFile("Textures/floor.png");
//	Texture wallt;
//	wallt.loadFromFile("wall.png");
//	RectangleShape empty(Vector2f(50, 50));
//	empty.setTexture(&grasst);
//	RectangleShape wall(Vector2f(50, 50));
//	wall.setTexture(&wallt);
//
//	CircleShape circle(25);
//	circle.setFillColor(Color::Blue);
//
//	while (window.isOpen())
//	{
//		Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//
//			if (event.type == Event::KeyPressed)
//			{
//				if (event.key.code == Keyboard::Up)
//					circle.move(0, -10);
//				else if (event.key.code == Keyboard::Down)
//					circle.move(0, +10);
//				else if (event.key.code == Keyboard::Left)
//					circle.move(-10, 0);
//				else if (event.key.code == Keyboard::Right)
//					circle.move(+10, 0);
//			}
//		}
//
//		//Keyboard::isKeyPressed(Keyboard::A)
//
//		window.clear();
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				if (arr[i][j] == EMPTY)
//				{
//					empty.setPosition(j * 50, i * 50);
//					window.draw(empty);
//				}
//				else if (arr[i][j] == WALL)
//				{
//					wall.setPosition(j * 50, i * 50);
//					window.draw(wall);
//				}
//			}
//
//		}
//		window.draw(circle);
//		window.display();
//		//print(arr);
//	}
//
//	return 0;
//}
//--------------------------------------------------------------------------------------------