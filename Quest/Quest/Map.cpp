#include "Map.h"
//---------------------------------------------------------------------------------------
Map::Map(int aWidth, int aHeight) : width(aWidth), height(aHeight)
{
	//field.resize(height);

	//for (int i = 0; i < height; i++)
	//	field[i].resize(width);

	//ifstream map("Map\\map.txt");

	//for (int i = 0; i < height; i++)
	//{
	//	string buffer;
	//	getline(map, buffer);
	//	
	//	for (int j = 0; j < width; j++)
	//	{
	//		if (buffer[j] == ' ')
	//			field[i][j] = 0;
	//		else 
	//			field[i][j] = buffer[j];
	//	}
	//}
	//map.close();
}
//---------------------------------------------------------------------------------------
Map & Map::get()
{
	static Map INSTANCE;
	return INSTANCE;
}
//---------------------------------------------------------------------------------------
bool Map::isEmptyCell(int y, int x)
{
	if (x >= 0 && x < width && y >= 0 && y < height)
		return field[y][x] == ' ';
	else
		return false;
}
//---------------------------------------------------------------------------------------
char Map::GetCell(int y, int x)
{
	return field[y][x];
}
//---------------------------------------------------------------------------------------
