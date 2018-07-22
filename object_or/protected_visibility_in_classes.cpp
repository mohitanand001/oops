// https://www.youtube.com/watch?v=6OVQ8nh3KP0&index=30&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb

#include<iostream>

class Entity{

protected:
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

class Child: public Entity{

private:
	int r; 

public:
	void child_set(int x = 0, int y = 0, int r = 0)
	{
		this->x = x;
		this->y = y;
		this->r = r;
	}	

	void child_get()
	{
		std::cout << (this->x) << " " << (this->y) << " " << (this->r) << std::endl;
	}

};

int main()
{	

	// Entity r; 
	// cannot access private members through, the objects
	// The protected members of a class can be accessed only through member functions
	// or through inherited classes member functions, only.
	// The inherited class's object are NOT allowed to access the inherited attributes which are protected
	// 

	// r.set(4, 8);
	// r.get();

	Child x ; 
	x.child_set(1, 2, 4);
	// The following line will produce an error
	// ‘int Entity::x’ is protected
	// x.x = 5; 

	x.child_get();


	return 0;
}