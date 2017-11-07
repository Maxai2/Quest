#pragma once

#include "Characters.h"
//---------------------------------------------------------------------------------------
class Enemy : public Character
{
	static int count;
public:
	Enemy(Damage damage, Position position, int hp, int cooldown);
	virtual void scanMap(Direction dir, Character &target) = 0;
};
//---------------------------------------------------------------------------------------