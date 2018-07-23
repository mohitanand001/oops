#include<iostream>

class Entity{

private:
	int x;

public:
	Entity(int y = 0)
	{
		x = y;
	}

	Entity operator [](int x, int y)
	{
		return x + 1;
	}
	void get()
	{
		
		std::cout << this->x << std::endl;
	}
};


int main()
{
	Entity x ;
	x[0] = 12;
	x.get(); 
	return 0;
}