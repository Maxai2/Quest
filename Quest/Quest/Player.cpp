#include "Player.h"
//---------------------------------------------------------------------------------------
Player::Player() : Character()
{
	Symb = '@';
	position.x = 2;
	position.y = 27;
	name = "Maxai";
	damage.max = 20;
	damage.min = 1;
	exp = 0;
	level = 0;
}
//---------------------------------------------------------------------------------------
void Player::attack(Character & target)
{
    
}
//---------------------------------------------------------------------------------------