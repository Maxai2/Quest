#include "Characters.h"
//---------------------------------------------------------------------------------------
Character::Character()
{
	hp = 100;
	state = State::Idle;
}
//---------------------------------------------------------------------------------------
void Character::attack(Character & target)
{
	Position pos;
	pos = target.position;

	if (this->position.x == pos.x)
	{

	}
}
//---------------------------------------------------------------------------------------
int Character::getHp()	{ return this->hp; } 
//---------------------------------------------------------------------------------------