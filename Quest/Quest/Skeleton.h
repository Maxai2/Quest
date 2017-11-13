#pragma once

#include <iostream>

#include "Enemy.h"
#include "Map.h"

using namespace std;

//---------------------------------------------------------------------------------------
class Skeleton : public Enemy
{
public:
	Skeleton(Damage damage, Position position, int hp, int cooldown);
	virtual void attack(Character &target) override;
	virtual void scanMap(Direction dir, Character &target) override;
};
//---------------------------------------------------------------------------------------