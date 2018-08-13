#include <iostream>
using namespace std;

template<class T, class U>
bool maxm(T x, U y)
{

	return x > y;
}


int main()
{

	cout << maxm<int, double>(133434, 34.4545) << endl;
	cout << maxm<int, double>(1, 34.4545) << endl;


	return 0;
}