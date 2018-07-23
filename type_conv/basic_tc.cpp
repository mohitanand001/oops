// https://www.youtube.com/watch?v=Rr1NX1lH3oE&t=0s&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=41
// Implicit = automatic

#include<iostream>

class Entity{

private:
	int a, r;
	std::string name;
public:
	Entity(int b):
	a(b), name("mohit")
	{}

	Entity(const Entity &r)
	{
		std:: cout << "copy constructor called" << std::endl;
		a = r.a;
		name = r.name;
	}

	// Entity(std::string name):
	// this->a(12), this->name(name)
	// {}


	void print_all()
	{
		std::cout << a << " " << name << std::endl;
	}
};

int main()
{

	// default constructor is called
	// Entity y(43);
	// y.print_all();
	Entity z = Entity(132);
	Entity x = 12;
	x.print_all();


	return 0;
}