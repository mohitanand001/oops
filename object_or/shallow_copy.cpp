// https://www.youtube.com/watch?v=nCAVr_T4DbM&list=PLLYz8uHU480j37APNXBdPz7YzAi4XlQUF&index=56&t=0s
// saurabh shukla video youtube

#include<iostream>

class Dummy{

private:
	int a, b;
	int *ptr;

public:
	Dummy()
	{
		std::cout << "hello " << std::endl;
		this->a = 1;
		this->b = 2;
		this->ptr = new int;
	}

	Dummy(const Dummy &r)
	{
		std::cout << "gello" << std::endl;
		this->a = r.a;
		this->b = r.b;
		this->ptr = r.ptr;
	}

	void set(int a = 0, int b= 0, int x = 0)
	{
		this->a = a;
		this->b = b;
		(*ptr) = x;
	}

	void get()
	{
		std::cout<< (this->a) << " " << (this->b) << " " << (*(this->ptr)) << std::endl;
	}

};


int main()
{

	Dummy d1;
	d1.set(1, 3, 8);
	// Dummy d2 = d1 means the copy constructor is called, either the default one created by 
	// compiler itself, or constructor created by programmer 
	// If we write Dummy d2; d2 = d1;
	// The overloaded assignment (=) operator (implicit copy assignment operator) is called, though the effect 
	// is same in case of shallow copy


	// Calls the  constructor Dummy() for creating d2 and default 
	Dummy d2 = d1;
	d2.get();


	// we can notice that both the ptr of d1 and d2 are pointing
	// to the same memory location, when we change the value 
	// of memory location pointed by d2 to 20, the value of memory location
	// pointed by d1 also changes
	d2.set(1, 5, 20);
	d2.get();
	d1.get();


	// Calls the constructor Dummy(const Dummy &)
	// Dummy d2() ; 

	return 0;
}