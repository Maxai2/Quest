#pragma once

#include <iostream>

#include "Enemy.h"
//#include "Functions.h"

using namespace std;

//---------------------------------------------------------------------------------------
class Skeleton : public Enemy
{
public:
	Skeleton(Damage damage, Position position, int hp, int cooldown);
	virtual void scanMap(Direction dir);
	virtual void move();
};
//---------------------------------------------------------------------------------------