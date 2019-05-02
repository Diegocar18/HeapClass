#include "pch.h"
#include "UserInput.h"
#include <iostream>

using namespace std;


UserInput::UserInput()
{
}


UserInput::~UserInput()
{
}

int UserInput::getHeapSize()
{
	cout << "Enter an integer size for your heap" << endl;
	cin >> size;
	return size;
}

int UserInput::getHeapValues()
{
	int value = 0;
	cout << "Enter a value to be inserted or 9999 to quit" << endl;
	cin >> value;

	return value;
}
