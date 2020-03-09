#include "Topo.h"

Topo::Topo(string mapName, float height, float width, string location) :Map(mapName, height, width)
{
	_location = location;
}

void Topo::printMap()
{
	cout << _location << endl;
}
