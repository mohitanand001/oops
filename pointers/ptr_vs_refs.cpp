#include<iostream>

int main()
{

	int a, b;
	std::cin>>a >> b;

	// invalid since you have to initialize a ref at declaration
	// int &ref;

	int &ref = a;

	int *ptr = &a;

	ref = ref + 1;
	std::cout<< a << std::endl;

	*ptr = (*ptr) + 1;

	std::cout<< a << std::endl;

	// invalid since we can not change where a reference is pointing
	// ref = b;


	// this is valid
	ptr = &b;
	*ptr = (*ptr) + 1;

	std::cout<< b << std::endl;

	return 0;
}