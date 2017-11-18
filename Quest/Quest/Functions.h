#pragma once

#include <windows.h>
#include <time.h>
#include <iostream>

static HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

//---------------------------------------------------------------------------------------
enum Direction 
{
	Up, Down, Left, Right, None
};

//char MapCell { Empty, Wall };
enum State { Idle, Attack, Defend, Shoot, Dead };
enum MapSize { height = 21, width = 40 };
enum AttackDefence { AttackKey = 32, DefendKey = 'p'};

struct Position { short x, y; };
struct Damage { int min, max; };

//---------------------------------------------------------------------------------------
inline void SetCoord(Position pos)
{
	SetConsoleCursorPosition(handle, { short(pos.x), short(pos.y) });
}
//---------------------------------------------------------------------------------------
inline Direction GetDirection(int key)
{
	switch (key)
	{
	case 'w':
		return Up;
	case 'a':
		return Left;
	case 's':
		return Down;
	case 'd':
		return Right;
	default:
		return None;
	}
}
//---------------------------------------------------------------------------------------
inline int MRand(int min, int max)
{
	int rn = rand() % (max - min + 1) + min;
	return rn;
}
//---------------------------------------------------------------------------------------
inline void noCursor(bool visible)
{
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(handle, &cursorInfo);
	cursorInfo.bVisible = visible;
	SetConsoleCursorInfo(handle, &cursorInfo);
}
//---------------------------------------------------------------------------------------