// https://www.youtube.com/watch?v=6OVQ8nh3KP0&index=30&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb

#include<iostream>

class Entity{

private:
	int x, y ; 

public:
	 void set(int x = 0, int y = 0)
	 {
	 	this->x = x;
	 	this->y = y;
	 }

	 void get()
	 {
	 	std::cout<<(this->x) << " " << (this->y) << std::endl;
	 }


};

int main()
{	

	Entity r; 
	// cannot access private members through, the objects
	// The private members of a class can be accessed only through member functions
	// or through friend functions
	// so r.x = 4, is invalid code

	r.set(4, 8);
	r.get();

	return 0;
}