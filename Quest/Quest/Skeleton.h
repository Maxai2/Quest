#pragma once

#include "Characters.h"
#include "Map.h"
#include "Enemy.h"
#include "enum.h"

//---------------------------------------------------------------------------------------
class Skeleton : public Enemy
{
public:
	Skeleton(Damage damage, Position position, int hp, int cooldown);
	virtual void scanMap();
};
//---------------------------------------------------------------------------------------