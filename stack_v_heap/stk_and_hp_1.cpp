// https://www.youtube.com/watch?v=wJ1L2nSIV1s&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=54

#include<iostream>

struct node
{
	int p; 
	int q; 
};

int main()
{

	// allocate integer memory on stack 
	int x = 5;
	int xrr[5] = {1, 2, 3, 4, 5}; 
	node xdd = {1, 3};

	// allocate integer memory on heap
	int *y = new int;
	*y = 5;

	int *yrr = new int[5];
	yrr[0] = 1, yrr[1] = 2, yrr[2] = 3, yrr[3] = 4, yrr[4] = 5;
	node *ydd = new node;
	(*ydd).p = 1;
	(*ydd).q = 2;
	// OR
	// ydd->p = 1; ydd->q = 2;

	return 0;
}