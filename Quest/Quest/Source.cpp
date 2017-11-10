//#include <SFML/Graphics.hpp>
#include <conio.h>

#include "Game.h"
//---------------------------------------------------------------------------------------
void main()
{
	//int key = 0;
	//noCursor(false);
	//srand(time(NULL));

	Game::get().Draw();
//	while (true)
//	{		
//		Game::get().drawPlayer();
//		Game::get().drawSkelet();
//
//		if (_kbhit())
//		{
//			key = _getch();
//			Game::get().getPlayer()->move(Direction(key));
//		}
//			
////		if (key == AttackDefence::AttackKey)
////		{
////			key = _getch();
////			Game::get().getPlayer()->move(Direction(key));
////		}
////		else
//		Sleep(100);
//		
//		Game::get().skeletMove();
//	}
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