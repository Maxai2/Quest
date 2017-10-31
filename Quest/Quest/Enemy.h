#pragma once

#include "Characters.h"
//---------------------------------------------------------------------------------------
class Enemy : public Character
{
	static int count;
public:
	Enemy(Damage damage, Position position, int hp, int cooldown);
	virtual void scanMap(Direction dir) = 0;
	virtual void move(Direction dir) override;
};
//---------------------------------------------------------------------------------------