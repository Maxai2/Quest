#pragma once

#include "Characters.h"
//---------------------------------------------------------------------------------------
class IInteractive
{
public:
	virtual void interaction(Character &target) = 0; //typeid Player
};
//---------------------------------------------------------------------------------------