#pragma once

#include <iostream>
#include <time.h>

using namespace std;
//---------------------------------------------------------------------------------------
int MRand(int max, int min)
{
	srand(time(NULL));
	int rn = rand() % (max - min + 1) + min;
	return rn;
}
//---------------------------------------------------------------------------------------
enum Direction 
{ 
	Up = 'w',
	Down = 's',
	Left = 'a',
	Right = 'd'
 };

enum State { Idle, Attack, Defend, Shoot, Dead };
enum MapCell { Empty, Wall };
struct Position { int x, y; };
struct Damage { int min, max; };

enum MapCoord { height = 30, width = 90 };
//---------------------------------------------------------------------------------------