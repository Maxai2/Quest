//#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

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
	Map::get();
	Player pl;
	while (true)
	{
		for (int i = 0; i < Map::get().height; i++)
		{
			for (int j = 0; j < Map::get().width; j++)
			{
				if (pl.getPos().x == i && pl.getPos().y == j)
					cout << "@";
				else
					cout << Map::get().getCell(i, j);
			}
			cout << endl;
		}
				
		break;

		//Input handling

		//Game logic

		//Drawing
	}
	system("pause");
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
//
