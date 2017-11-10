#include <SFML/Graphics.hpp>
#include <conio.h>

#include "Game.h"
//---------------------------------------------------------------------------------------
void main()
{
	int key = 0;
	noCursor(false);
	srand(time(NULL));

	Game::get().Draw();
	while (true)
	{		
		Game::get().drawPlayer();
		Game::get().drawSkelet();

		if (_kbhit())
		{
			key = _getch();
			Game::get().getPlayer()->move(Direction(key));
		}
			
//		if (key == AttackDefence::AttackKey)
//		{
//			key = _getch();
//			Game::get().getPlayer()->move(Direction(key));
//		}
//		else
		Sleep(100);
		
		Game::get().skeletMove();
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