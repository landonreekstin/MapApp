#pragma once
#include <iostream>

using namespace std;

// Abstract Base class
// Must be inherited by another class in order to be used
class Map
{
private:
	string _mapName = "";
	float _height = 0;
	float _width = 0;

public:
	Map(string mapName, float height, float width);
	virtual ~Map() { cout << "Destroying map" << endl; };

	virtual void printMap() = 0;
};

