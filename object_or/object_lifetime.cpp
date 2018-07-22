// https://www.youtube.com/watch?v=iNuTwvD6ciI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=43
// Object lifetime on stack

#include<iostream>

int* create_arr_on_stack()
{
	int arr[10] = {1,2};
	return	arr;
}

int* create_arr_on_heap()
{
	int *arr = new int[50];
	arr[0] = 1, arr[1] = 2;
	return arr;
}


void print_all(int *a){

	for(int i = 0; i < 50; i +=1)
	{
		std::cout<< *(a + i) << " ";
	}
	std::cout << std::endl;
}

int main()
{

	// We allocate 50 int space on stack but that space gets scraped off
	// as soon as the function call create_arr_on_stack gets over,
	// so this arr is pointing to invalid location
	// int *arr = create_arr_on_stack();
	// print_all(arr);
	

	// We allocate 50 int space on heap, since, objects on heap have lifetime 
	// of a program , the 'brr' points to valid location and prints the 
	// numbers successfully
	int *brr = create_arr_on_heap();
	print_all(brr);


	return 0;
}