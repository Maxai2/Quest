#pragma once

#include "Characters.h"
//---------------------------------------------------------------------------------------
class Enemy : public Character
{
	static int count;
public:
	virtual void scanMap() = 0;
};
//---------------------------------------------------------------------------------------