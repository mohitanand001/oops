// https://www.youtube.com/watch?v=4p3grlSpWYA&index=46&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
// arrow operator


#include<iostream>


struct node
{
	int a, b;
};

int main()
{

	node x;
	x.a = 1;
	x.b = 2;

	node *z = new node;
	(*z).a = 12;
	(*z).b = 13;

	std::cout << (*z).a << " " << (*z).b << std::endl;

	// the above can also be written as
	// the arrow operator is just to improve 
	// look of the syntax
	node *y = new node;
	y->a = 100;
	y->b = 101;

	std::cout << y->a << " " << y->b << std::endl;


	return 0;
}