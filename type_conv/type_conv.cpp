// https://www.youtube.com/watch?v=SBcIjz3cy3k
// Primitive type conversion 
// All Primitive type conversion is implicit


#include<iostream>

int main()
{
	int p = 5;
	// automatic type conversion is done internally 
	// from int to float
	// implicit type conversion
	float q = p;


	// automatic type conversion is done internally
	// from	 float to int
	// implicit type conversion
	// data loos may be present
	float r = 12.4;
	int s = r;

	std::cout << r << " " << s << std::endl;

	return 0;
}