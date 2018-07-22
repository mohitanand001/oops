// https://www.youtube.com/watch?v=1nfuYMXjZsA&index=36&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
// Comment/Uncomment sections of code to see the output difference


#include<iostream>

class Example{

public:
	Example()
	{
		std::cout<<"hello 1" << std::endl;
	}

	Example(int x)
	{
		std::cout<<"hello 2" << " " << x << std::endl;
	}


};


class Entity{

private:
	int a;
	std::string name;
	Example x;

public:
	// Constructor
	// Entity()
	// {
	// 	this->a = 1;
	// 	this->name = "mohit";
	// 	this->x = 8;
	// }

	// Constructor using member initializer list
	// x(9) calls the constructor of Example class for object 'x'
	Entity()
	: a(5), name("mohit"), x(9)
	{ 	}


	// Parameterized Constructor
	// Entity(int a , const string &name )
	// {
	// 	this->a = a;
	// 	this->name = name;
	// }

	// Member initializer list corresponding to Parameterized Constructor

	Entity(int x, const std::string &nam)
	: a(x), name(nam)
	{	}

};


int main()
{	

	Entity r;

	return 0;
}