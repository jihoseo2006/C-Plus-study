#include "stack.h"

int main() {
	int org[] = { 6,2,7,3,4,5,9,10210,8,10,13,1537,14,12,11 };
	int SZ = sizeof(org) / sizeof(int);

	Radix_Sort(org, SZ);
}