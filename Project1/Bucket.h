#pragma once
#include "Map.h"
#include <vector>

using namespace std;

class Bucket
{
private:	
	int num;
	vector <Map *> Buck;
public:
	friend class Dictionary;
	Bucket();
	~Bucket();
};

