// https://www.youtube.com/watch?v=SBcIjz3cy3k
// primitive type to class type, can be implemented through 
// a constructor


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

};

int main()
{


	// this would compile and call constructor Complex(int x)
	// this is same as Complex c1(5);
	// in the absence of a constructor it will throw an error
	Complex c1 = 78; 
	c1 = 23;
	c1.get();


	//  following would also compile and call constructor Complex(int x)
	// in the absence of a constructor it will throw an error
	Complex c2;
	c2 = 5;
	c2.get();


	//  following would also compile and call constructor Complex(int x)
	// in the absence of a constructor it will throw an error

	Complex c3 ; 
	int x = 12;
	c3 = x;
	c3.get(); 

	//  following would also compile and call constructor Complex(int x)
	// in the absence of a constructor it will throw an error
	Complex c4(43); 
    c4.get() ;
	


	return 0;
}