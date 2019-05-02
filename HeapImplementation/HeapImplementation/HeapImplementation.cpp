// HeapImplementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "UserInput.h"
#include "Heap.h"

int main()
{
	static int size;
	static int value;
	
	UserInput ui;
	size = ui.getHeapSize();
	Heap heap(size);

	int i = 0;
	while ((i < size) && (i != 9999))
	{
		value = ui.getHeapValues();
		heap.insert(value);
		i++;
	}

	heap.printHeapArray();

}


