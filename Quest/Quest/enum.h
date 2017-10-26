#pragma once

using namespace std;

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

enum MapCoord { /*height = 40, width = 40*/ height = 30, width = 90 };
//---------------------------------------------------------------------------------------