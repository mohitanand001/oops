#include<iostream>

void inc(int &a)
{
	a = a + 1;
}


int main()
{

	int a;
	std::cin>> a;

	inc(a);
	std::cout<< a << std::endl;

	return 0;
}