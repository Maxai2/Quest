#pragma once

#include <iostream>

#include "Enemy.h"
#include "Map.h"
#include "Game.h"

using namespace std;

//---------------------------------------------------------------------------------------
class Skeleton : public Enemy
{
	bool playerCheker(Position source, Position dest);
public:
	Skeleton(Damage damage, Position position, int hp, int cooldown);
	virtual void attack(Character &target) override;
	virtual void scanMap(Direction dir, Character &target) override;
	virtual void move(Direction dir) override;
};
//---------------------------------------------------------------------------------------