#pragma once

#include "Functions.h"
//---------------------------------------------------------------------------------------
class GameObject
{
protected:
	Position position;
public:
	GameObject();

	Position getPos();
	void setPos(Position pos);
};
//---------------------------------------------------------------------------------------
