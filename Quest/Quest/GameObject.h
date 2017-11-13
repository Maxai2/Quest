#pragma once

#include "Functions.h"
//---------------------------------------------------------------------------------------
class GameObject
{
protected:
	Position position;
public:
	GameObject() {};

	Position getPos() { return position; }
	void setPos(Position pos) { position = pos; }
};
//---------------------------------------------------------------------------------------
