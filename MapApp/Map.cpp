#include "Map.h"
#include <iostream>

using namespace std;

Map::Map(string mapName, float height, float width)
{
	_mapName = mapName;
	_height = height;
	_width = width;
}

void Map::printMap()
{
	cout << _mapName << " " << " " << _height << " " << " " << _width << endl;
}
