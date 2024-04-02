#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class DeepClass
{
private:
	int myInt;
	int* myPtr;

public:
	DeepClass();
	DeepClass(int, int);
	DeepClass(const DeepClass& other);
	DeepClass& operator=(const DeepClass& other);
	void setInt(int);
	void setPtr(int);
	int getInt();
	int getPtr();
	string toString();
	bool ShallowEqual(DeepClass other);
	bool DeepEqual(DeepClass other);
	~DeepClass();
};