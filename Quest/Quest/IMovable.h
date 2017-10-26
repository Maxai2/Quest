#pragma once

#include "enum.h"

//---------------------------------------------------------------------------------------
class IMovable
{
	Direction direction;
public:
	virtual void move(Direction dir) = 0;
};
//---------------------------------------------------------------------------------------