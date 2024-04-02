#include "DeepClass.h"

DeepClass::DeepClass() {
	myInt = 0;
	myPtr = nullptr;
}


DeepClass::DeepClass(int value, int ptrvalue) {
	myInt = value;
	myPtr = new int(ptrvalue);
}


DeepClass::DeepClass(const DeepClass& other) {
	myInt = other.myInt;
	myPtr = new int(*other.myPtr);
	cout << "Copy Constructor has been called!" << endl;
}




DeepClass& DeepClass::operator=(const DeepClass& other) {
	myInt = other.myInt;
	delete myPtr;
	myPtr = new int(*other.myPtr);
	if (this == &other) {
		return *this;
	}
	return *this;
	cout << "Equals Operator has been called!" << endl;


}
void DeepClass::setInt(int value) {
	myInt = value;
}

void DeepClass::setPtr(int ptrvalue) {
	*myPtr = ptrvalue;
}
int DeepClass::getInt() {
	return myInt;
}
int DeepClass::getPtr() {
	return *myPtr;
}
string DeepClass::toString() {
	stringstream x;
	x << "Int value: " << myInt << ",location: " << &myInt;
	x << endl;
	x << "Pointer value: " << *myPtr << ",location: " << myPtr;
	x << endl;
	return x.str();
}
bool DeepClass::ShallowEqual(DeepClass other) {
	return (myInt == other.myInt) && (*myPtr == *(other.myPtr));
}
bool DeepClass::DeepEqual(DeepClass other) {
	return (myInt == other.myInt) && (myPtr == other.myPtr);
}


DeepClass::~DeepClass() {
	delete myPtr;
}