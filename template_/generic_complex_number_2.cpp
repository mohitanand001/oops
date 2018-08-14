#include<iostream>
using namespace std;

template <class T>
class Complex{

private:
	T real, img;

public:
	Complex(T x, T y);
	void print_all();
	void set_data(T x, T y);
	T get_real();
	T get_img();
};


template <class T>
T Complex<T>::get_real() {
	return real;
}

template <class T>
T Complex<T>::get_img()
{
	return img;
}

template <class T>
void Complex<T>::print_all()
{
	cout << real << " " << img << endl;
}

template <class T>
Complex<T>::Complex(T x, T y)
{
	real = x;
	img = y;
}

int main()
{

	Complex<int> cpx1(1, 5);
	cpx1.print_all();

	Complex<double> cpx2(1.43, 3.434);
	cpx2.print_all();


	return 0;
}