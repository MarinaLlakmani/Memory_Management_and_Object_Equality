#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class ShallowClass
{
private:
	int myInt;
	int* myPtr;

public:
	ShallowClass();
	ShallowClass(int, int);
	void setInt(int);
	void setPtr(int);
	int getInt();
	int getPtr();
	string toString();
	bool ShallowEqual(ShallowClass other);
	bool DeepEqual(ShallowClass other);
};

