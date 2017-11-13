#include "Characters.h"
#include "Map.h"
#include "MySFML.h"

#include <iostream>

//---------------------------------------------------------------------------------------
Character::Character()
{
	hp = 100;
	state = State::Idle;
}
//---------------------------------------------------------------------------------------
void Character::Draw()
{
	SetCoord(position);
	cout << Symb;
}
//---------------------------------------------------------------------------------------
void Character::move(Direction dir)
{
	Position OldPos = position;

	switch (dir)
	{
	case Up:
		if (position.y > 0 && Map::get().isEmptyCell(position.y - 1, position.x))
		{
            MySFML::get().getSpriteHero().setTextureRect(IntRect(36, 166, 36, 53));
            MySFML::get().getSpriteHero().move(0, -0.1);
			break;
		}
		else
			return;
	case Down:
		if (position.y < Map::get().height && Map::get().isEmptyCell(position.y + 1, position.x))
		{
            MySFML::get().getSpriteHero().setTextureRect(IntRect(36, 0, 36, 53));
            MySFML::get().getSpriteHero().move(0, 0.1);
			break;
		}
		else
			return;
	case Left:
		if (position.x > 0 && Map::get().isEmptyCell(position.y, position.x - 1))
		{
            MySFML::get().getSpriteHero().setTextureRect(IntRect(36, 58, 36, 53));
            MySFML::get().getSpriteHero().move(-0.1, 0);
			break;
		}
		else
			return;
	case Right:
		if (position.x < Map::get().width && Map::get().isEmptyCell(position.y, position.x + 1))
		{
            MySFML::get().getSpriteHero().setTextureRect(IntRect(34, 113, 34, 53));
            MySFML::get().getSpriteHero().move(0.1, 0);
			break;
		}
		else
			return;
	case None:
	default:
		return;
	}

	SetCoord(OldPos);
	std::cout << ' ';
	Draw();

	//    if (Keyboard::isKeyPressed(Keyboard::S))
	//    {
	//        heroSprite.setTextureRect(IntRect(36, 0, 36, 53));
	//        heroSprite.move(0, 0.1 * time);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::A))
	//    {
	//        heroSprite.setTextureRect(IntRect(36, 58, 36, 53));
	//        heroSprite.move(-0.1 * time, 0);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::D))
	//    {
	//        heroSprite.setTextureRect(IntRect(34, 113, 34, 53));
	//        heroSprite.move(0.1 * time, 0);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::W))
	//    {
	//        heroSprite.setTextureRect(IntRect(36, 166, 36, 53));
	//        heroSprite.move(0, -0.1 * time);
	//    }	

	
	//    if (Keyboard::isKeyPressed(Keyboard::S))
	//    {
	//        CurrentFrame += 0.005*time;
	//        if (CurrentFrame > 4)
	//            CurrentFrame -= 4;
	//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 0, 36, 53));
	//        heroSprite.move(0, 0.1 * time);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::A))
	//    {
	//        CurrentFrame += 0.005*time;
	//        if (CurrentFrame > 4)
	//            CurrentFrame -= 4;
	//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 58, 36, 53));
	//        heroSprite.move(-0.1 * time, 0);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::D))
	//    {
	//        CurrentFrame += 0.005*time;
	//        if (CurrentFrame > 4)
	//            CurrentFrame -= 4;
	//        heroSprite.setTextureRect(IntRect(34 * int(CurrentFrame), 113, 34, 53));
	//        heroSprite.move(0.1 * time, 0);
	//    }
	//    else if (Keyboard::isKeyPressed(Keyboard::W))
	//    {
	//        CurrentFrame += 0.005*time;
	//        if (CurrentFrame > 4)
	//            CurrentFrame -= 4;
	//        heroSprite.setTextureRect(IntRect(36 * int(CurrentFrame), 166, 36, 53));
	//        heroSprite.move(0, -0.1 * time);
	//    }
}
//---------------------------------------------------------------------------------------