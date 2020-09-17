#pragma once
#include "Bucket.h"
#include <iostream>
#include <fstream>

using namespace std;

class Dictionary
{
private:
	vector <Bucket*> Dics;


public:
	void output(string key);
	void input(string value);
	void del(string value);
	void fileout();
	void filein();
	Dictionary();
	~Dictionary();

};

