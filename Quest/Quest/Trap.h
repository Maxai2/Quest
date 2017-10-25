#pragma once

#include "GameObject.h"
#include "IInteractive.h"
#include "Characters.h"
//---------------------------------------------------------------------------------------
class Trap : public GameObject, public IInteractive
{
	//virtual void interaction(Character & target) override;
};
//---------------------------------------------------------------------------------------