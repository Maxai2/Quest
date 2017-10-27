#include "Player.h"

Player::Player() : Character()
{
	position.x = 28;
	position.y = 15;
	name = "Maxai";
	exp = 0;
	level = 0;
}

inline Position Player::getPos() { return position; }

void Player::move(Direction dir)
{
	switch (dir)
	{
	case Up:
		if (position.y > 0 && Map::get().getCell(position.y - 1, position.x) == MapCell::Empty)
			position.y--;
		break;
	case Down:
		if (position.y < Map::get().height && Map::get().getCell(position.y + 1, position.x) == MapCell::Empty)
			position.y++;
		break;
	case Left:
		if (position.x > 0 && Map::get().getCell(position.y, position.x - 1) == MapCell::Empty)
			position.x--;
		break;
	case Right:
		if (position.x < Map::get().width && Map::get().getCell(position.y, position.x + 1) == MapCell::Empty)
			position.x++;
	}
}
