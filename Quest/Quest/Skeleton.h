#pragma once

#include <iostream>

#include "Enemy.h"
#include "Functions.h"
#include "Map.h"

using namespace std;

//---------------------------------------------------------------------------------------
class Skeleton : public Enemy
{
public:
	Skeleton(Damage damage, Position position, int hp, int cooldown);
	virtual void attack(Character &target) override;
	virtual void move(Direction dir) override;
};
//---------------------------------------------------------------------------------------