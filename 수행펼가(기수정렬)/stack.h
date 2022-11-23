#pragma once
#ifndef STACK_H

#define STACK_H

#include <iostream>
using namespace std;

class Stack {
private:
	int SP;
	int SZ;
	int* Data;
public:
	enum Exception { INVALID_POS, EMPTY_STACK };
	int pop();
	void push(int dat);
	int iterate_pop(int* org, int cnt);
	void clear() { SP = 0; }
	Stack() { SP = 0; }
	Stack(int su) { Data = new int[su]; SP = 0; SZ = su; }
};

void Radix_Sort(int* org, int SZ);
#endif // !STACK_H