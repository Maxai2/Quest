#pragma once

#include <windows.h>
#include <time.h>
#include <iostream>

static HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

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
inline int MRand(int min, int max)
{
	srand(time(NULL));
	int rn = rand() % (max - min + 1) + min;
	return rn;
}
//---------------------------------------------------------------------------------------
inline void noCursor(bool visible)
{
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(handle, &cursorInfo);
	cursorInfo.bVisible = visible; // set the cursor visibility
	SetConsoleCursorInfo(handle, &cursorInfo);
}
//---------------------------------------------------------------------------------------