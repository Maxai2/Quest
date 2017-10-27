#pragma once

#include <string>
#include <conio.h>

using namespace std;

#include "Characters.h"
#include "Map.h"
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
	Player();

	Position getPos();

	virtual void move(Direction dir);

};
//---------------------------------------------------------------------------------------