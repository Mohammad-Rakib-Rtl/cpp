


#include "TextBox.h"
#include <iostream>

using namespace std;



string TextBox::getValue()
{
	return value;
}


void TextBox::setValue(const string& value) {
	/*if (!value)
		throw invalid_argument("value");*/

	this->value = value;
	
}


//TextBox::TextBox() : value{value} {
//
//}
