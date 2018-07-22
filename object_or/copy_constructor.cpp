// https://www.youtube.com/watch?v=6MZr5e-SUxM
// saurabh shukla

#include<iostream>


class Complex{

private:
	int a, b;

public:
	// parameterized constructor1
	Complex(int x, int y)
	{
		std::cout<< "pc1 called" << std::endl;
		a = x; b = y;
	}	


	// parameterized constructor2
	Complex(int k)
	{
		std::cout << "pc2 called" << std::endl;
		a = k;
	}

	// default constructor
	Complex()
	{
		std::cout << "dc1 called" << std::endl;
	}

	// copy constructor
	Complex(const Complex &r)
	{
		std::cout << "copy constructor called" << std::endl;
		this->a = r.a;
		this->b = r.b;
	}

};


int main()
{

	// pc1 called
	Complex c1(3, 5);

	// pc2 called
	Complex c2(4);

	// dc1 called
	Complex c3;

	// pc2 called, since Complex c4(4) is same as Complex c4 = 4
	Complex c4 = 4;

	// Complex c5 = c1 is same as Complex c5(c1);
	// Compiler makes two constructor
	// default constructor(without arguments) and copy constructor
	// if they are not made by the programmer
	// copy constructor copies objects.
	// If we have made any constructor in our class other, then 
	// default constructor will not be made by the Compiler, 
	// but a copy constructor will be made, if the constructor we have made is NOT
	// copy constructor. 

	// If we make copy constructor in our class, the Compiler will NOT make
	// either default constructor nor copy constructor
	Complex c5 = c1;
	Complex c6(c1);	

	return 0;
}