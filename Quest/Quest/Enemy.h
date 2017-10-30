#pragma once

#include "Characters.h"
//---------------------------------------------------------------------------------------
class Enemy : public Character
{
	static int count;
	Enemy(Damage damage, Position position, int hp, int cooldown);
public:
	virtual void scanMap() = 0;
};
//---------------------------------------------------------------------------------------