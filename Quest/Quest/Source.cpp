#include <SFML/Graphics.hpp>
#include <conio.h>

#include "enum.h"
#include "Game.h"


//---------------------------------------------------------------------------------------
void main()
{
	int key = 0;

	Game::get();
	while (true)
	{		
		Game::get().Draw();
		key = _getch();

		Game::get().getPlayer()->move(Direction(key));
	}
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