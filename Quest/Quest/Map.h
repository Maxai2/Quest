#pragma once
#include <vector>
#include <fstream>
#include <string>

#include "enum.h"
#include "GameObject.h"

using namespace std;
//---------------------------------------------------------------------------------------
class Map
{
	vector<vector<MapCell>> field;

	Map(int width = MapCoord::width, int height = MapCoord::height) : width(width), height(height)
	{
		field.resize(height);
		for (int i = 0; i < height; i++)
		{
			field[i].resize(width);
		}

		ifstream map("Map/map.txt");
		string buffer;

		for (int i = 0; i < height; i++)
		{
			getline(map, buffer);
			for (int j = 0; j < width; j++)
			{
				if (buffer[j] == '0')
					field[i][j] = MapCell::Empty;
				else if (buffer[j] == '1')
					field[i][j] = MapCell::Wall;
			}

		}
		map.close();
	}
public:
	const int width;
	const int height;

	static Map& get()
	{
		static Map INSTANCE;
		return INSTANCE;
	}

	MapCell getCell(int y, int x)
	{
		if (x >= 0 && x < width && y >= 0 && y < height)
			return field[y][x];
		else
			return MapCell::Wall;
	}
};
//---------------------------------------------------------------------------------------