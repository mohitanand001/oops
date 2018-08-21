// https://www.youtube.com/watch?v=1nfuYMXjZsA

#include <iostream>
using namespace std;
// Note that in case of assignment constructor default constructor of DEF is called
// Hence, it is not advisable to use assignment constructor

class DEF
{
public:
	int r;

public:
	DEF()
	{
		cout << "default constructor called" << endl;
	}

	DEF(int r)
	{
		this->r = r;
		cout << "constructor for DEF called with r = " << (this->r) << endl; 
	}

};


class ABC
{
private:
	int x ;
	DEF y ;

public:
	// assignment constructor 
	ABC()
	{
		y = DEF(12);
		x = 12;
		cout << "assignment constructor for ABC called " << endl;
	}

	// initialiazer constructor
	ABC(int xx)
		:y(DEF(34)), x(xx)  
		{cout << "initialiazer constructor for ABC called" << endl;}

};


int main()
{

	ABC a;
	cout << endl;
	ABC b(785);

	return 0;
}