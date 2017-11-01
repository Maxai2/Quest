#include "Enemy.h"
//---------------------------------------------------------------------------------------
Enemy::Enemy(Damage damage, Position position, int hp, int cooldown) : Character()
{
	this->position.x = position.x;
	this->position.y = position.y;
	this->damage.max = damage.max;
	this->damage.min = damage.min;
	this->hp = hp;
	this->cooldown = cooldown;
	//this->count++;
}
//---------------------------------------------------------------------------------------