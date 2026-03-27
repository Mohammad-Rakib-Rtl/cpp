#pragma once
#ifndef TEXTBOX_H
#define TEXTBOX_H
//#include <iostream>
#include <string>



using namespace std;

class TextBox
{
	
public:
	
	TextBox() = default;
	explicit TextBox(const string& value);
	string getValue();
	void setValue(const string& value);

	//string value;



private:
	string value;



};

#endif 