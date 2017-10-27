#include <SFML/Graphics.hpp>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Game.h"

using namespace std;
//---------------------------------------------------------------------------------------
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

void noCursor(bool visible)
{
	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = visible; // set the cursor visibility
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
//---------------------------------------------------------------------------------------
void main()
{
	int key = 0;

	Game::get();
	noCursor(false);
	while (true)
	{
		SetConsoleCursorPosition(handle, { 0,0 });
		
		Game::get().Draw();
		key = _getch();

		Game::get().getPlayer()->move(Direction(key));
	}
}
//---------------------------------------------------------------------------------------
//
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