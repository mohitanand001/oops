#include<iostream>
using namespace std;

void sum()
{
	cout << "hello" << endl;
} 

int main()
{
	void (*p)() = sum;
	p();

	void (*ptr)() = [](){
		cout << "gello" << endl;
	};

	ptr();


	return 0;
}