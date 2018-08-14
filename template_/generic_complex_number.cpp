#include<iostream>
using namespace std;

template <class T>
class Complex
{

private:
	T real, img;
public:
	Complex(T real, T img)
	{
		this->real = real;
		this->img = img;
	}

	void show_all()
	{
		cout << (this->real) << " " << (this->img) << endl;
	}

	T get_real()
	{
		return (this->real);
	}

	T get_imaginary()
	{
		return (this->imaginary);
	}		

};


int main()
{

	Complex<int> cpx1(2, 43);
	Complex<double> cpx2(3.454, 23.2323);

	cpx1.show_all(); 
	cpx2.show_all();

	return 0;
}