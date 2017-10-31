#include "Skeleton.h"
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(Damage damage, Position position, int hp, int cooldown) : Enemy(damage, position, hp, cooldown){}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap(Direction dir)
{
	switch (dir)
	{
	case Up:
		break;
	case Down:
		break;
	case Left:
		break;
	case Right:
		break;
	}
}
//---------------------------------------------------------------------------------------
void Skeleton::move()
{
	Direction dir;
//	dir = MRand(0, 4);
}
//---------------------------------------------------------------------------------------