#include "GameObject.h"
//---------------------------------------------------------------------------------------
GameObject::GameObject(){}
//---------------------------------------------------------------------------------------
Position GameObject::getPos() {	return this->position; }
//---------------------------------------------------------------------------------------
void GameObject::setPos(Position pos) { this->position = pos; }
//---------------------------------------------------------------------------------------