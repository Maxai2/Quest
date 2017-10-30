#include "Skeleton.h"
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(Damage damage, Position position, int hp, int cooldown) : Enemy(damage, position, hp, cooldown)
{
	//while(Map::get().getCell(Mrand(min, max), Mrand(min, max)) != MapCell::Wall)
	//{
	//	position.x = Mrand(min, max);
	//	position.y = Mrand(min, max);
	//}
}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap()
{
	for (int i = 0; i < 4; i++)
	{

	}
}
//---------------------------------------------------------------------------------------