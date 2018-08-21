// https://www.youtube.com/watch?v=E8Yh4dw6Diw

#include<iostream>
using namespace std;

int* block_memory(int how_much)
{
	int *ptr = new int[how_much];

	return ptr;
}

int main()
{

	int *pt = block_memory(34);
	pt[0] = 1;
	cout << pt[0] << endl;
 

	return 0;
}