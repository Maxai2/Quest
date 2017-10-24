#pragma once

#include <string>

using namespace std;

#include "Characters.h"
//---------------------------------------------------------------------------------------
class Player : public Character
{
protected:
	string name;
	int exp;
	int level;
	int strength;
	//int endurance;
	//int dexterity;
public:
	Player() : Character()
	{
		position.x = 15;
		position.y = 15;		
		name = "Maxai";
		exp = 0;
		level = 0;
	}

	Position getPos()
	{
		return position;
	}
};
//---------------------------------------------------------------------------------------