#pragma once
#include <vector>

#include "GameObject.h"

using namespace std;
//---------------------------------------------------------------------------------------
class Map
{
	vector<vector<MapCell>> field;

	Map(int width = 40, int height = 40) : width(width), height(height)
	{
		field.resize(height);
		for (int i = 0; i < height; i++)
		{
			field[i].resize(width);
		}

		for (int i = 0; i < 40; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				int code = rand() % 10;
				if (code < 8)
					field[i][j] = MapCell::Empty;
				else if (code < 10)
					field[i][j] = MapCell::Wall;
			}
		}
	}
public:
	const int width;
	const int height;

	static Map& get()
	{
		static Map INSTANCE;
		return INSTANCE;
	}

	MapCell getCell(int x, int y)
	{
		if (x >= 0 && x < height && y >= 0 && y < width)
			return field[x][y];
		else
			return MapCell::Wall;
	}
};