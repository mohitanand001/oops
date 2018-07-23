// https://www.youtube.com/watch?v=QOQhOUFfv_8
// class type to class type conversion
// converting from one class type to another class type
// two ways to do it
// constructor
// and casting operator
// here we have sovled it using casting operator

#include<iostream>

class Product;

class Product{

private:
	int m, n;

public:
	Product()
	{
		m = 12;
		n = 123;
	}
	void set_data(int x = 0, int y = 0)
	{
		m = x, n = y;
	}

	void get_data()
	{
		std::cout << m << " " << n << std::endl;
	}

	int get_m()
	{
		return m;
	}

	int get_n()
	{
		return n;
	}

};

class Item{

private:
	int a, b;

public:
	Item()
	{
		a = 0, b = 0;
	}

	Item(Product obj)
	{
		this->a = obj.get_m() ;
		this->b = obj.get_n() ;
	} 

	void get_data()
	{
		std::cout << a << " " << b << std::endl;
	}

};


int main()
{

	Item i ;
	Product j;
	i = j;
	j.get_data();
	i.get_data();

	return 0;
}