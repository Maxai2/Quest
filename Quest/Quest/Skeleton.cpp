#include "Skeleton.h"
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(int min, int max) : Character()
{
	while(Map::get().getCell(Mrand(min, max), Mrand(min, max)) != MapCell::Wall)
	{
		position.x = Mrand(min, max);
		position.y = Mrand(min, max);
	}
}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap()
{
	for (int i = 0; i < 4; i++)
	{

	}
}
//---------------------------------------------------------------------------------------