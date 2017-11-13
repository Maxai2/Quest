#pragma once

#include "Functions.h"

//---------------------------------------------------------------------------------------
class IMovable
{
	Direction direction;
public:
	virtual void move(Direction dir) = 0;

	Direction getDirection() { return direction; }
	void setDirection(Direction dir) { this->direction = dir; }
};
//---------------------------------------------------------------------------------------