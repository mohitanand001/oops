// https://www.youtube.com/watch?v=RPRXbJ5Qjys
// class type to primitive type

#include<iostream>

class Complex{

private:
	int r;
	int i;

public:
	void set(int r = 0, int i = 0)
	{
		this->r = r;
		this->i = i;
	}

	void get()
	{
		std::cout<<(this->r) << " " << (this->i) << std::endl;
	}

	Complex(int x = 0)
	{
		this->r =  x;
		this->i = 2312;
	}

	// casting operator
	operator int()
	{
		return (this->r);
	}

};


int main()
{

	// Compilation error, if casting operator int() {return (this->r); } is not
	// present
	Complex x(12);
	int y = x;

	std::cout << y << std::endl;

	return 0;
}