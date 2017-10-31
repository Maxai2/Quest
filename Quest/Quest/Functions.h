#pragma once

#include <windows.h>
#include <time.h>
#include <iostream>

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

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