#pragma once

#include "Characters.h"
#include "Map.h"
#include "enum.h"

//---------------------------------------------------------------------------------------
class Skeleton : public Character
{
public:
	Skeleton(int min, int max);
	virtual void scanMap();
};
//---------------------------------------------------------------------------------------