#pragma once
#include "Map.h"

class Topo : Map
{
private:
	string _location = "";

public:
	Topo(string mapName, float height, float width, string location);
	~Topo();

	void printMap();
};

