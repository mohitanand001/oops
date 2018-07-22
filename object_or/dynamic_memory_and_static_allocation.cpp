#include<iostream>
// https://www.youtube.com/watch?v=ZSzzY3adfDM
// Saurabh shukla video

// https://stackoverflow.com/questions/15013077/arrayn-vs-array10-initializing-array-with-variable-vs-real-number

int main()
{
	// The amount of memory that a static variable
	// will get is decided at compile time.
	// The actual memory is given at runtime when the program is in 
	// the RAM.
	// SMA ( Static Memory Allocation)
	// Static Memory Allocation means the memory allocated is fixed, and decided at compile time
	// We cannot decide when to deallocate SMA

	// DMA(Dynamic Memory Allocation)
	// The amount of memory that a dynamic variable
	// will get is decided at run time.
	// No name for the memory area is there, we only have pointer to the beginning of
	// the dynamically allocated area

	// Even though the following code will compile and will not give any errors
	// some compilers might give a warning like the following when run with '-pedantic' flag. 
	// warning: ISO C++ forbids variable length array ‘arr’ [-Wvla]
	//   int arr[n];

	int n;
	std::cin>> n;

	int arr[n];
	for(int i = 0; i < n; i +=1)
	{
		arr[i] = 2;
	}

	return 0 ;
}