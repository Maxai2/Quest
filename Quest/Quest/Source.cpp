#include <SFML/Graphics.hpp>
#include <iostream>
#include <conio.h>

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

//---------------------------------------------------------------------------------------
void main()
{
	//Game initialization

	//Game loop

	int key = 0;

	Map::get();
	Player pl;
	while (true)
	{
		for (int i = 0; i < Map::get().height; i++)
		{
			for (int j = 0; j < Map::get().width; j++)
			{
				if (pl.getPos().x == j && pl.getPos().y == i) cout << "@";
				else
				if (Map::get().getCell(i, j) == MapCell::Empty) cout << " ";
				else
					cout << "*";
			}
			cout << endl;
		}
						
		key = _getch();
		if (key == 0 || key == 224)
			key = _getch();
		
		pl.move(Direction(key));
		
		system("cls");
		//Input handling

		//Game logic

		//Drawing
	}
	system("pause");

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

