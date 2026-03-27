#include "SmartPointer.h"
#include <iostream>

using namespace std;

SmartPointer::SmartPointer(int* ptr) : ptr{ptr}
{
	
}

SmartPointer::~SmartPointer()
{
	delete ptr;
	ptr = nullptr;
}
