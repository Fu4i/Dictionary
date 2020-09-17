#pragma once
#include "MD5.h"
#include <string>
using namespace std;

class Map
{
public:
	friend class Bucket;
	friend class Dictionary;
	string getValue();
	string getKey();
	Map(string new_value);
	~Map();
private:
	string  key;
	string  value;
};