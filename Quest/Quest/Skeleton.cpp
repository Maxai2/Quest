#include "Skeleton.h"
//---------------------------------------------------------------------------------------
bool Skeleton::playerCheker(Position source, Position dest)
{
	return true;
}
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(Damage damage, Position position, int hp, int cooldown) : Enemy(damage, position, hp, cooldown){}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap(Direction dir, Character &target)
{
	bool wallCheck = false, found = false, block = false;
//	int wallCount = 0;

	Position PPos, SPos;
	//target = *Game::get().getPlayer();

	PPos = target.getPos();
	SPos = this->position;

	for (int i = 0; i < 3; i++)
	{
		for (int j = -2; j < 3; j++)
		{
			if ((j == 0 && i == 0) || ((j == -1 || j == 0 || j == 1) && i == 1 ) || ((j == -2 || j == -1 || j == 0 || j == 1 || j == 2) && i == 2 ))
			{
				switch (dir)
				{
				case Up:
					if (PPos.x == SPos.x + j && PPos.y == SPos.y - i - 1)
					{
						found = true;
						attack(target);
						break;
					}
					break;
				case Down:
					if (PPos.x == SPos.x + j && PPos.y == SPos.y + i + 1)
					{
						found = true;
						attack(target);
						break;
					}
					break;
				case Left:
					if (PPos.x == SPos.x - j - 1 && PPos.y == SPos.y + i)
					{
						found = true;
						attack(target);
						break;
					}
					break;
				case Right:
					if (PPos.x == SPos.x + j + 1 && PPos.y == SPos.y + i)
					{
						found = true;
						attack(target);
						break;
					}
					//if (i == 0 && j == 0) // First level
					//{
					//	if (Map::get().getCell(position.y - i - 1, position.x + j) == MapCell::Wall)
					//	{
					//		wallCheck = true;
					//		break;
					//	}
					//}
					//	else
					//	if (PPos.x == SPos.x && PPos.y == SPos.y - 1)
					//	{
					//		found = true;
					//		attack(target);
					//		break;
					//	}
					//}
					//else
					//if (i == 1 && (j == -1 || j == 0 || j == 1)) // Second level
					//{
					//	if (Map::get().getCell(position.y - i - 1, position.x + j) == MapCell::Wall)
					//	{
					//		if (wallCount != 3)
					//			wallCount++;
					//		else
					//		{
					//			wallCheck = true;
					//			break;
					//		}
					//	}
					//	else
					//	if (Map::get().getCell(position.y - 2, position.x) != MapCell::Wall && 
					//		((PPos.x == SPos.x - 1 || PPos.x == SPos.x || PPos.x == SPos.x + 1) && PPos.y == SPos.y - 2))
					//	{
					//		found = true;
					//		attack(target);
					//		break;
					//	}
					//}
					//else
					//if (i == 2 && (j == -2 || j == -1 || j == 0 || j == 1 || j == 2)) // Third level
					//{
					//	if (Map::get().getCell(position.y - i - 1, position.x + j) == MapCell::Wall)
					//	{
					//		if (wallCount != 5)
					//			wallCount++;
					//		else
					//		{
					//			wallCheck = true;
					//			break;
					//		}
					//	}
					//	else
					//	if (Map::get().getCell(position.y - 3, position.x) != MapCell::Wall &&
					//		((PPos.x == SPos.x - 2 || PPos.x == SPos.x - 1 || PPos.x == SPos.x || PPos.x == SPos.x + 1 || PPos.x == SPos.x + 2) 
					//			&& PPos.y == SPos.y - 3))
					//	{
					//		found = true;
					//		attack(target);
					//		break;
					//	}
					//}
				}
			}
		}
		if (found)
			break;
	}
}
//---------------------------------------------------------------------------------------
void Skeleton::attack(Character & target)
{
	Position Ppos, Spos;

	Ppos = target.getPos();
	Spos = this->position;

	while (playerCheker(Spos, Ppos))
	{

	}
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