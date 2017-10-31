#pragma once

#include "Functions.h"

//---------------------------------------------------------------------------------------
class IMovable
{
	Direction direction;
public:
	virtual void move(Direction dir) = 0;
};
//---------------------------------------------------------------------------------------