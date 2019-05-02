#include "pch.h"
#include "Heap.h"
#include <iostream>;

using namespace std;


Heap::Heap(int capacity)
{
	heapArray = new int[capacity];
	cout << "You chose a capacity of " + capacity;
	

}


Heap::~Heap()
{
}

bool Heap::isFull()
{

	return size == sizeof(heapArray);
	//if size same as length, return it.

	//if heap is full can throw an exception or resize the array.
}

int Heap::getParentNode(int index)
{
	return (index - 1) / 2;           //don't use floor in java. rounded automatically.
}

 void Heap::insert(int value)
{
	if (isFull())
	{
		throw("heap is full, cannot insert");
	}    //put value in a new spot at end of array
	heapArray[size] = value;
	fixHeapAbove(size);
	size++;             //increment size;
   //  heapify process follows:
   //This is a max heap so check that parent is greater than child
}

//when deleting we will have to fix it.  We will receive the value that we 
//just inserted.
void Heap::fixHeapAbove(int index)
{
	int newValue = heapArray[index];

	//if we haven't hit the root, compare the new value against the value of its parent.
	while (index > 0 && newValue > heapArray[getParentNode(index)])
	{
		//if new value is greater than parent, then swap the two
		heapArray[index] = heapArray[getParentNode(index)];
		index = getParentNode(index);
		//we are only going to assign newValue after we have found its correct position.
		//for now we are just shifting it down.
	}
	heapArray[index] = newValue;    //update  the newvalue into parent's position

}


void Heap::printHeapArray()
{
	for (int i = 0; i < sizeof(heapArray); i++)
	{
		cout << heapArray[i] + ", ";
	}


}



