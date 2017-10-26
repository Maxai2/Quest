#include <SFML/Graphics.hpp>
#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Game.h"
#include "Map.h"
#include "Player.h"

using namespace std;
//---------------------------------------------------------------------------------------
//
///*
//Files
//const, final, override
//smart pointers
//*/
//

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

	Map::get();
	Player pl;
	noCursor(false);
	while (true)
	{
		SetConsoleCursorPosition(handle, { 0,0 });
		for (int i = 0; i < Map::get().height; i++)
		{
			for (int j = 0; j < Map::get().width; j++)
			{
				if (pl.getPos().x == j && pl.getPos().y == i) cout << "@";
				else
				if (Map::get().getCell(j, i) == MapCell::Empty) cout << " ";
				else
					cout << "*";
			}
			cout << endl;
		}
						
		key = _getch();
		if (key == 0 || key == 224)
			key = _getch();
		
		pl.move(Direction(key));
		
//		system("cls");
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

