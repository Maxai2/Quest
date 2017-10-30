#pragma once
#include <time.h>

using namespace std;

//---------------------------------------------------------------------------------------
int Mrand(int min, int max)
{
	srand(time(0));
	return rand() % (max - min + 1) + min;
}

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

enum MapCoord { /*height = 40, width = 40*/ height = 30, width = 90 };
//---------------------------------------------------------------------------------------