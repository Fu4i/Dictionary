#include "Map.h"



Map::Map(string  new_value)
{
	key = md5(new_value);
	value = new_value;
}
string Map::getValue()
{
	return value;
}

string Map::getKey()
{
	return key;
}


Map::~Map()
{
}
