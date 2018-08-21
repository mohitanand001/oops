// https://www.youtube.com/watch?v=ynYtgGUNelE

#include<iostream>
using namespace std;

int adder(int a, int b)
{
	return a + b;
}

double madder(int a, double b)
{
	return a * b;
}

int main()
{

	// function pointer to adder function

	int (*p)(int, int) = adder;

	cout << p(1, 43) << endl;

	// different way to initialize
	// here we use &madder instead of madder
	double (*r)(int , double) = &madder;
	cout << r(12, 23.34) << endl; 

	return 0; 
}