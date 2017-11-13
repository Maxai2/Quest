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
	char Symb;
public:
	Character();

	int getHp() { return hp; }
	void setHp(int num) { hp = num; }
	State getState() { return state; }
	void setState(State st) { state = st; }
	
	virtual void move(Direction dir) override;
	void Draw();
};
//---------------------------------------------------------------------------------------
//virtual void attack(Character &target) override;
//virtual void shoot(Character &target) override;