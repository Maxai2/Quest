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
	Character();

	virtual void attack(Character &target) override;
	//virtual void shoot(Character &target) override;
	//virtual void move(Direction dir) override;

	static int getHp();
};
//---------------------------------------------------------------------------------------