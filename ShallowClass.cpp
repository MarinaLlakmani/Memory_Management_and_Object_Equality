#include "ShallowClass.h"

ShallowClass::ShallowClass() {
	myInt = 0;
	myPtr = nullptr;
}


ShallowClass::ShallowClass(int value, int ptrvalue) {
	myInt = value;
	myPtr = new int(ptrvalue);
}


void ShallowClass::setInt(int value) {
	myInt = value;
}
void ShallowClass::setPtr(int ptrvalue) {
	*myPtr = ptrvalue;

}
int ShallowClass::getInt() {
	return myInt;
}
int ShallowClass::getPtr() {
	return *myPtr;
}

string ShallowClass::toString() {
	string result = "Int value: " + to_string(myInt) + ",location: " + to_string((long long)&myInt) + "\n";
	result += "Pointer value: " + to_string(*myPtr) + ",location: " + to_string((long long)myPtr);
	return result;
}


bool ShallowClass::ShallowEqual(ShallowClass other) {
	if (myInt != other.myInt && *myPtr != *(other.myPtr)) {
		return false;
	}
	else {
		return true;
	}
}

bool ShallowClass::DeepEqual(ShallowClass other) {
	if (myInt == other.myInt && myPtr != nullptr && other.myPtr != nullptr && *myPtr == *(other.myPtr)) {
		return true;
	}
	else {
		return false;
	}
}