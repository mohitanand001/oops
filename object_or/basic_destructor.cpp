// https://www.youtube.com/watch?v=D8cWquReFqw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=26
// https://www.quora.com/What-will-happen-if-I-explicitly-call-the-destructor-of-an-object


// saurabh shukla video
// https://www.youtube.com/watch?v=_P1YRBOtioE 

#include<iostream>

class Entity{

public:
	int a, b;
	int *ptr;

	Entity()
	{
		a = 5, b = 10;
		ptr = new int;
		*ptr = 200;
	}

	~Entity()
	{
		// destructor releases resources allocated to an object
		// the memory allocated to ptr is being freed when the destructor is
		// called. A destructor is called when the object goes out of its
		// scope of creation
		// we cannot have destructor overloaded
		// destructor should not have a return type, just like a constructor
		// compiler will automatically generate a destructor which will do 
		// nothing if we don't explicitly define our own destructor.
		// A destructor is the last function called in the lifetime of
		// an object

		// destructor is an instance member function, not a static member function
		// destructor do not take any args
		// destructor does not destroy object, it is just the last function in the 
		// lifetime of an object

		std:: cout << "destroyed" << std::endl;

		// If we don't delete ptr, the ptr pointer will be lost
		// but the space allocated will not be free for others to 
		// access, this situation is memory leak.

		delete ptr; 
	}

};

int main()
{

	// free the resources, like memory allocated on heap
	// 
	
	Entity r; 
	
	// Undefined behaviour, see the answer on quora
	// https://www.quora.com/What-will-happen-if-I-explicitly-call-the-destructor-of-an-object
	// r.~Entity();	

	std::cout<<"s";

	return 0;
}