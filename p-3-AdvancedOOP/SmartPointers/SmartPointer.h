#pragma once
class SmartPointer
{


public:
	explicit SmartPointer(int* ptr);
	~SmartPointer();


private:

	int* ptr;


};

