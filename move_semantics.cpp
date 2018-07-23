// https://www.youtube.com/watch?v=IOkgBrXCtfo
// new feature of c++11
// move constructors and move semantics
// advanced topics

// you need to understand the diff bw lvalue and rvalue
#include<iostream>

class Com{

	int a;


public:
	Com(int a = 12)
	{
		this->a = a;
		std::cout << "called" << std::endl;
	}

	Com operator +(Com &x)
	{
		Com temp;
		temp.a = this->a + x.a;
		return temp;
	}
};


int main()
{
	Com x(43), y(12);
	Com z;
	z = Com(4) + Com(12); 


	return 0;
}
