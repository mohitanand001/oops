#include<iostream>

int main()
{
	int a;
	std::cin>>a;

	// valid declarations of ptrs

	int *ptr1 = &a;
	int* ptr2 = &a;
	int *ptr3 = &a, *ptr4 = &a;

	// invalid declaration
	// int* p1 = &a, p2 = &a;

	return 0;
}
