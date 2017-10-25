#pragma once



class Trap : public GameObject, public IInteractive
{
	virtual void interaction(Character & target) override;
};