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

	Map(int width = MapCoord::width, int height = MapCoord::height);
public:
	const int width;
	const int height;

	static Map& get();
	MapCell getCell(int y, int x);
};
//---------------------------------------------------------------------------------------