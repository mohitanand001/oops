// https://stackoverflow.com/questions/1025579/when-to-use-a-void-pointer
// https://stackoverflow.com/questions/3523145/pointer-arithmetic-for-void-pointer-in-c

#include<iostream>

int main()
{
	int a, b;

	std::cin>> a >> b;

	void *ptr = &a;
	*(int *)ptr = (*(int *)ptr) + 1;
	// *ptr;
	std::cout<< (*(int *)ptr) << std::endl;

	return 0;
}