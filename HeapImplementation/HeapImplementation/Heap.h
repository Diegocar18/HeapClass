#pragma once
class Heap
{
public:
	Heap(int capacity);
	~Heap();
	bool isFull();
	int getParentNode(int index);
	void insert(int value);
	void fixHeapAbove(int index);
	void printHeapArray();

private:
	int *heapArray;
	int size;

};

