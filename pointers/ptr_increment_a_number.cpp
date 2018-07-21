#include<iostream>

void inc(int *x)
{
	(*x) = (*x) + 1;
}


int main()
{
	int a;
	std::cin>>a;	

	inc(&a);
	std::cout<< a<< std::endl;

	return 0;
}