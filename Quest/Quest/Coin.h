#pragma once

#include "GameObject.h"
#include "IInteractive.h"
//---------------------------------------------------------------------------------------
class Coin : public GameObject, public IInteractive
{
	virtual void interaction(Character & target) override;
};
//---------------------------------------------------------------------------------------