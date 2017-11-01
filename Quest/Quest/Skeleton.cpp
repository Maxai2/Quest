#include "Skeleton.h"
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(Damage damage, Position position, int hp, int cooldown) : Enemy(damage, position, hp, cooldown){}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap(Direction dir)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			switch (dir)
			{
			case Up:
				if (Map::get().getCell(position.y - 1, position.x) == MapCell::Empty)
					if (Map::get().getCell(position.y - 1, position.x) == MapCell::Empty)
					{

					}
					position.y--;
				break;
			case Down:
				break;
			case Left:
				break;
			case Right:
				break;
			}
		}
	}
}
//---------------------------------------------------------------------------------------
void Skeleton::attack(Character & target)
{
	
}
//---------------------------------------------------------------------------------------
void Skeleton::move(Direction dir)
{
	SetCoord(position.x, position.y);
	cout << ' ';

	switch (dir)
	{
	case 0:
		if (position.y > 0 && Map::get().getCell(position.y - 1, position.x) == MapCell::Empty)
			position.y--;
		break;
	case 1:
		if (position.y < Map::get().height && Map::get().getCell(position.y + 1, position.x) == MapCell::Empty)
			position.y++;
		break;
	case 2:
		if (position.x > 0 && Map::get().getCell(position.y, position.x - 1) == MapCell::Empty)
			position.x--;
		break;
	case 3:
		if (position.x < Map::get().width && Map::get().getCell(position.y, position.x + 1) == MapCell::Empty)
			position.x++;
	}
}
//---------------------------------------------------------------------------------------