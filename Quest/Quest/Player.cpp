#include "Player.h"
//---------------------------------------------------------------------------------------
Player::Player() : Character()
{
	position.x = 2;
	position.y = 27;
	name = "Maxai";
	damage.max = 20;
	damage.min = 1;
	exp = 0;
	level = 0;
}
//---------------------------------------------------------------------------------------
Position Player::getPos() { return position; }
//---------------------------------------------------------------------------------------
void Player::move(Direction dir)
{
	SetCoord(position.x, position.y);
	cout << ' ';
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
//---------------------------------------------------------------------------------------
void Player::attack(Character & target)
{
	//
	//if (true)
	//{

	//}
	//target.setHp(target.getHp() - )
}
//---------------------------------------------------------------------------------------