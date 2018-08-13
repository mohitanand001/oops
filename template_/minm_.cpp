#include <iostream>
using namespace std;

template <class T>
T minm(T x, T y)
{
	if(x < y)
		return x;

	return y; 
}

int main()
{

	cout << minm<int>(1, 4) << endl;
	cout << minm<double>(4.0, 100) << endl;

	return 0;
}