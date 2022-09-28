#pragma once
#ifndef HEAP_H
#define HEAP_H
#include <iostream>
using namespace std;

typedef int element;
class HeapType {
	element* heap;
	int heapSize;
public:
	HeapType(int cnt);
	HeapType* creatHeap();
	void insertHeap(element item);
	element deleteHeap();
	void printHeap();
};
void p_out(element* p, int cnt);

#endif
