#pragma once

#include "GameObject.h"
#include "IAttacking.h"
#include "IMovable.h"
//---------------------------------------------------------------------------------------
class Character : public GameObject, public IAttacking, public IMovable
{
protected:
	int hp;
	State state;
public:
	Character()
	{
		hp = 100;
		state = State::Idle;
	}

	virtual void attack(Character &target) override
	{

	}
	//virtual void shoot(Character &target) override;
	//virtual void move(Direction dir) override;
};
//---------------------------------------------------------------------------------------