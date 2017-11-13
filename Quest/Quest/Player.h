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
	Player();

	virtual void attack(Character &target) override;
};
//---------------------------------------------------------------------------------------